#!/usr/bin/env python

import rospy
import math
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.animation as animation
from modules.map.relative_map.proto import navigation_pb2
from modules.localization.proto import localization_pb2
from modules.planning.proto import planning_pb2
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped

map_msg = None
planning_msg = None
navigation_path_x = []
navigation_path_y = []
localization_pb = None

def localization_callback(localization_pb2):
    global localization_pb
    localization_pb = localization_pb2
    print 'localization callback'+ repr(localization_pb)

def map_callback(map_msg_pb):
    global map_msg
    map_msg = map_msg_pb

def planning_callback(planning_msg_pb):
    global planning_msg
    planning_msg = planning_msg_pb
    if planning_msg is not None:
        x = []
        y = []
        for tp in planning_msg.trajectory_point:
            x.append(tp.path_point.y)
            y.append(tp.path_point.x)
    #print 'planning callback'

def navigation_callback(navigation_info_pb):
    global navigation_path_x, navigation_path_y
    navigation_path_x = []
    navigation_path_y = []
    pose = PoseStamped()
    path = Path()
    path.header.frame_id = "map"
    path.header.stamp = rospy.Time.now()
    for navi_path in navigation_info_pb.navigation_path:
        for path_point in navi_path.path.path_point:
             pose.header.frame_id = "main"
             pose.pose.position.x = path_point.x
             pose.pose.position.y = path_point.y
             path.poses.append(pose)
    Path_pub.publish(path)



def add_listener():
    rospy.init_node('relative_map_plot', anonymous=True)
    rospy.Subscriber('/apollo/relative_map',
                     navigation_pb2.MapMsg,
                     map_callback)
    rospy.Subscriber('/apollo/navigation',
                     navigation_pb2.NavigationInfo, navigation_callback)
    rospy.Subscriber('/apollo/localization/pose',
                     localization_pb2.LocalizationEstimate,
                     localization_callback)
    rospy.Subscriber('/apollo/planning',
                     planning_pb2.ADCTrajectory,
                     planning_callback)
def add_publisher():
    Path_pub = rospy.Publisher('/drive/planning', Path, queue_size = 10)
    #Odom_pub = rospy.Publisher('/drive/odom', Odometry, queue_size = 10)



if __name__ == '__main__':
    add_listener()
    rospy.spin()