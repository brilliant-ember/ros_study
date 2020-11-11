#include "ros/ros.h" // ROS Default Header File

// MsgTutorial Message File Header. The header file is
// automatically created when building the package.
#include "publisher_subscriber/MsgTutorial.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "topic_publisher");
    ros::NodeHandle nh;
    int bufferSize = 100;

    ros::Publisher ros_tutorial_publisher =
        nh.advertise<publisher_subscriber::MsgTutorial>("ros_tuto_msg", bufferSize);

    // 10 hz means 10 msgs per second
    ros::Rate loop_rate(10);

    publisher_subscriber::MsgTutorial msg;
    int count = 0;

    while (ros::ok())
    {
        msg.stamp = ros::Time::now();
        msg.data = count;

        ROS_INFO("Naaanaaa naaa naaaa \n");

        ROS_INFO("send msg = %d", msg.stamp.sec);  // Prints the 'stamp.sec' message
        ROS_INFO("send msg = %d", msg.stamp.nsec); // Prints the 'stamp.nsec' message
        ROS_INFO("send msg = %d", msg.data);       // Prints the 'data' message

        ros_tutorial_publisher.publish(msg); // Publishes 'msg' message

        loop_rate.sleep(); // Goes to sleep according to the loop rate defined above.

        ++count; // Increase count variable by one
    }

    return 0;
}
