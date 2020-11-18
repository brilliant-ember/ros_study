#!/usr/bin/env python


''' you can use rqt message publisher, but I wanted 
to make a python script that will do it for me,
I could have done it with C++ but I wanna tryout python'''

import rospy
import math

from std_msgs.msg import Float64


def rrbot_replica_joint_control_publisher():
    rospy.init_node("myJointControlNode")

    #Define publishers for each joint position controller commands.
    pub1 = rospy.Publisher('/rrbot/joint1_position_controller/command', Float64, queue_size=10)
    pub2 = rospy.Publisher('/rrbot/joint2_position_controller/command', Float64, queue_size=10)
    pub3 = rospy.Publisher('/rrbot/joint3_position_controller/command', Float64, queue_size=10)
    rate = rospy.Rate(100) #100 Hz

    i = 0

    while not rospy.is_shutdown():
        sine_control_signal = 1.7 * math.sin(i/0.1)

        pub1.publish(sine_control_signal)
        pub2.publish(sine_control_signal)
        pub3.publish(sine_control_signal)

        i = i+1

        rate.sleep() # this sleeps our program until the next call depending on frequency defined in rospy.Rate() 

# this means run continously until program gets stopped
if __name__ == '__main__':
    try: rrbot_replica_joint_control_publisher()
    except rospy.ROSInternalException: pass