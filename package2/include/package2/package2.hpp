#ifndef PACKAGE2_PACKAGE2_HPP
#define PACKAGE2_PACKAGE2_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/detail/int32__struct.hpp>
#include <std_msgs/msg/int32.hpp>
// #include <std_msgs/msg/string.hpp>

class Package2Node : public rclcpp::Node {
public:
  Package2Node();

  void subscribe(const std_msgs::msg::Int32::SharedPtr msg);
  void publish();

private:
  int data = 0;
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr sub;
  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr pub;
};

#endif // PACKAGE2_PACKAGE2_HPP