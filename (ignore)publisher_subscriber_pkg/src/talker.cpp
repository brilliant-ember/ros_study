// This is the publisher node
/*
Initialize the ROS system

Advertise that we are going to be publishing std_msgs/String messages 
on the chatter topic to the master

Loop while publishing messages to chatter 10 times a second
*/


#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv){
    //using argc and argv makes it easy
    // to pass cmd line args
    ros::init(argc, argv, "Le_talker_node");

    ros::NodeHandle n;

    //the size of our publishing queue. In this 
    // case if we are publishing too quickly it 
    // will buffer up a maximum of 1000 messages before 
     //beginning to throw away old ones.
    int bufferSize = 1000;

    ros::Publisher chatterPublisher = 
        n.advertise<std_msgs::String>("topicName", bufferSize);
    
    // 10hz means we will publish 10 times a second
    // this is the time delay in Hz, 10Hz = 100ms
    // this is a var constructor syntax something like this
    // std::string str("Hi!"); or this int x(10);
    ros::Rate loop_rate(10);

    int count = 0;

    //ros::ok() will return false if we press ctrl+c
    // or if a new node with the same name comes
    // or ros::shutdown() was called somewhere
    // or all of ros::NodeHandles has been destroyed
    while(ros::ok()){

        // this is what we will publish
        std_msgs::String msg;

        std::stringstream ss;
        ss << "hello world " << count;
        msg.data = ss.str();

        // this ROS_INFO replaces cout and printf look at this for details
        // https://wiki.ros.org/rosconsole
        ROS_INFO("%s", msg.data.c_str());

        // the msg published must agree with the
        // type defined above in the advertise function
        chatterPublisher(msg);
        
        //this lnie below is used if we receive callbacks
        // we dont for this simple program but it is good practice
        ros::spinOnce();
        
        //we ask the loop_rate to sleep until we hit our 10hz publish rate
        loop_rate.sleep();
        ++count;
    }
    return 0;
}