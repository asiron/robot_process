#include <robot_process_tutorials/robot_process_tutorials.h>

int main(int argc, char *argv[]) {

  using namespace robot_process_tutorials;

  RobotProcessTutorials rbt1(argc, argv, "first");
  rbt1.init().runAsync();

  // RobotProcessTutorials rbt2(argc, argv, "second");
  // rbt2.init().runAsync();

  //ros::waitForShutdown();

  ros::Duration(2.0).sleep();

  return 0;
}
