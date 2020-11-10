project(publisher_subscriber_pkg)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS 
    roscpp rospy std_msgs genmsg message_generation)

## Declare ROS messages and services
add_message_files(DIRECTORY msg FILES Num.msg)
add_service_files(DIRECTORY srv FILES AddTwoInts.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

### The part below is for publisher and subscriber

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
add_dependencies(talker publisher_subscriber_pkg_generate_messages_cpp)

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
add_dependencies(listener publisher_subscriber_pkg_generate_messages_cpp)
