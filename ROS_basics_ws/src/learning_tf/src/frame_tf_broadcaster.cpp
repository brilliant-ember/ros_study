#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "my_tf_broadcaster_node");
    ros::NodeHandle node;

    tf::TransformBroadcaster br;
    tf::Transform transform;

    ros::Rate rate(10.0);

    while(node.ok()){
        /*
   create a new transform, from the parent turtle1 to the new child carrot1.
   The carrot1 frame is 2 meters offset to the left from the turtle1 frame.
   I am saying basically that I want the frame between them two to be the 
   transform set below, ie carrot follows turtle1 within that distance between them
        */
        transform.setOrigin(tf::Vector3(0.0, 2.0, 0.0));
        transform.setRotation(tf::Quaternion(0,0,0,1));
        // The above transform is a fixed frame, if we want the frame to change
        // with time we can do this
        /*
            transform.setOrigin( tf::Vector3(2.0*sin(ros::Time::now().toSec()), 2.0*cos(ros::Time::now().toSec()), 0.0) );
            transform.setRotation( tf::Quaternion(0, 0, 0, 1) );    
        */
        br.sendTransform(tf::StampedTransform(transform, ros::Time::now(),
         "turtle1", "carrot1"));

         rate.sleep();
    }

    return 0;
};