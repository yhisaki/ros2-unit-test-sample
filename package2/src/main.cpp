#include "package2/package2.hpp"

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Package2Node>());
  rclcpp::shutdown();
  return 0;
}