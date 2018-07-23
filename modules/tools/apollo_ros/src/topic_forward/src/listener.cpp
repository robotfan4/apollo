#include "ros/ros.h"
#include "chatter.pb.h"
#include "std_msgs/Int64.h"
ros::Publisher pub;
void pbChatterCallback(const boost::shared_ptr<pb_msgs::ShortMessage>& msg)
{
  ROS_INFO_STREAM("Time: " << msg->stamp().sec() << "." << msg->stamp().nsec());
  ROS_INFO("I heard pb short message: [%s]", msg->content().c_str());
}

void counterCallback(const boost::shared_ptr<pb_msgs::Counter>& msg)
{
  ROS_INFO("I get counter message: [%d]", (int)msg->count());
  std_msgs::Int64 temp_msg_;
  temp_msg_.data = msg->count();
  pub.publish(temp_msg_);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber pb_sub = n.subscribe("pb_chatter", 1000, pbChatterCallback);
  ros::Subscriber sub = n.subscribe("counter", 1000, counterCallback);
  pub = n.advertise<std_msgs::Int64>("/std_counter",10);
  ros::spin();

  return 0;
}
