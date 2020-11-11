cmake_minimum_required(VERSION 3.0.2)
project(server_client)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  std_msgs
)

## Service declaration: SrvTutorial.srv
add_service_files(FILES SrvTutorial.srv)

## This is an option to configure dependent messages.
## If std_msgs is not installed, an error occurs when you build.
generate_messages(DEPENDENCIES std_msgs)

###################################
## catkin specific configuration ##
###################################

catkin_package(
 LIBRARIES server_client
 CATKIN_DEPENDS message_generation roscpp std_msgs
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Build options for the service server node
add_executable(server src/server.cpp)
add_dependencies(server ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(server ${catkin_LIBRARIES})


##Build options for client node
add_executable(client src/client.cpp)
add_dependencies(client ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(client ${catkin_LIBRARIES})
