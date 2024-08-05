#include "package2/package2.hpp"
#include <gtest/gtest.h>
#include <std_msgs/msg/int32.hpp>

class NodeForTesting : public rclcpp::Node {
public:
  NodeForTesting() : Node("node_for_testing") {
    pub = create_publisher<std_msgs::msg::Int32>("data", 1);

    sub = create_subscription<std_msgs::msg::Int32>(
        "result", 1,
        std::bind(&NodeForTesting::subscribe, this, std::placeholders::_1));
  }

  int result = 0;

  void publish() {
    std_msgs::msg::Int32 msg;
    msg.data = 1;
    pub->publish(msg);
  }

private:
  void subscribe(const std_msgs::msg::Int32::SharedPtr msg) {
    result = msg->data;
  }

  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr pub;
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr sub;
};

TEST(Package2, Package2Node) {
  using namespace std::chrono_literals;
  rclcpp::init(0, nullptr);
  auto node_for_testing = std::make_shared<NodeForTesting>();
  auto package2_node = std::make_shared<Package2Node>();

  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node_for_testing);
  executor.add_node(package2_node);

  node_for_testing->publish();
  executor.spin_all(1s);
  EXPECT_EQ(node_for_testing->result, 2);
  rclcpp::shutdown();
}