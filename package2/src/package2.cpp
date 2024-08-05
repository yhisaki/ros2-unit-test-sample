#include "package2/package2.hpp"
#include <std_msgs/msg/int32.hpp>

Package2Node::Package2Node() : Node("package2") {
  sub = create_subscription<std_msgs::msg::Int32>(
      "data", 10,
      std::bind(&Package2Node::subscribe, this, std::placeholders::_1));

  pub = create_publisher<std_msgs::msg::Int32>("result", 1);
}

void Package2Node::subscribe(const std_msgs::msg::Int32::SharedPtr msg) {
  data = msg->data;
  publish();
}

void Package2Node::publish() {
  auto msg = std::make_unique<std_msgs::msg::Int32>();
  msg->data = 2 * data;
  pub->publish(std::move(msg));
}