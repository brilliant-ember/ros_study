// This is the subscriber node
/*
Initialize the ROS system
Subscribe to the chatter topic
Spin, waiting for messages to arrive
When a message arrives, the chatterCallback() function is called
*/
#include "ros/ros.h"
#include "std_msgs/String.h"

// a callback is just a function passed as an argument
// this function will be called with new messegs
void chatterCallback(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("I heard: [%s]", msg->data.ctr());
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Listener node yo");
    ros::NodeHandle n;
    

// if messeges are arriving faster than they are processed this is the num of 
// msgs we will buffer before throwing away old msgs
    int bufferSize = 1000;
    ros::Subscriber sub = n.subscribe("topicName", bufferSize, chatterCallback);

    // spin() will enter a loop calling message callbacks as fast as possible (polling maybe?)
    // from this thread (main one), and spin() will stop when ctrl+c is pressed
    // for more info https://wiki.ros.org/roscpp_tutorials and https://wiki.ros.org/roscpp/Overview
   ros::spin();

   return 0;
}
