#!/usr/bin/env python

import rospy
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
    #print 'localization callback'+ repr(localization_pb)

def map_callback(map_msg_pb):
    global map_msg
    map_msg = map_msg_pb

def planning_callback(planning_msg_pb):
    print 'planning message is' + str(planning_msg_pb)
    
    path = Path()
    path.header.frame_id = "map"
    path.header.stamp = rospy.Time.now()
    i = 0
    if planning_msg_pb is not None:
        for tp in planning_msg_pb.trajectory_point:
            pose = PoseStamped()
            #i += 1
            #pose.header.seq  =  i
            pose.header.stamp = rospy.Time.now()
            pose.header.frame_id = "map"
            pose.pose.position.x = tp.path_point.x
            pose.pose.position.y = tp.path_point.y
            pose.pose.orientation.w = 1.0
            path.poses.append(pose)
    path_pub.publish(path)

    #print 'planning callback'

def navigation_callback(navigation_info_pb):
    global navigation_path_x, navigation_path_y
    navigation_path_x = []
    navigation_path_y = []
    for navi_path in navigation_info_pb.navigation_path:
        for path_point in navi_path.path.path_point:
            navigation_path_x.append(path_point.x)
            navigation_path_y.append(path_point.y)



def add_listener():
    global path_pub
    path_pub = rospy.Publisher('/drive/planning', Path, queue_size = 10)
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

if __name__ == '__main__':
    add_listener()
    rospy.spin()