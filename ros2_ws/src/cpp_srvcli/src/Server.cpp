#include "rclcpp/rclcpp.hpp"
#include "seabot_interfaces/srv/service.hpp"                                        // CHANGE
#include <string>
#include <memory>

void send_response(const std::shared_ptr<seabot_interfaces::srv::Service::Request> request,     // CHANGE
          std::shared_ptr<seabot_interfaces::srv::Service::Response> response)  // CHANGE
{
  response->feedback = request->message;                                      // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s" " b: %.2f",  // CHANGE
                request->message.c_str(), request->value);                                         // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%s]", response->feedback.c_str());
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("seabot_server");   // CHANGE

  rclcpp::Service<seabot_interfaces::srv::Service>::SharedPtr service =               // CHANGE
    node->create_service<seabot_interfaces::srv::Service>("/StepperControl",  &send_response);   // CHANGE

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to Send Feedback");                     // CHANGE

  rclcpp::spin(node);
  rclcpp::shutdown();
}
