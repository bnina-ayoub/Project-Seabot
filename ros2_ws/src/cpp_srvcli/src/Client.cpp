#include "rclcpp/rclcpp.hpp"
#include "seabot_interfaces/srv/service.hpp"                                       // CHANGE

#include <chrono>
#include <cstdlib>
#include <memory>
#include <string>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 3) {
      std::cout << argc;
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: Testing Seabot Interface");      // CHANGE
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("stm32_client");  // CHANGE
  rclcpp::Client<seabot_interfaces::srv::Service>::SharedPtr client =                // CHANGE
    node->create_client<seabot_interfaces::srv::Service>("/StepperControl");          // CHANGE

  auto request = std::make_shared<seabot_interfaces::srv::Service::Request>();       // CHANGE
  request->message = argv[1];
  request->value = std::stod(argv[2]);                                                            // CHANGE

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Status: %s", result.get()->feedback.c_str());
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");    // CHANGE
  }

  rclcpp::shutdown();
  return 0;
}
