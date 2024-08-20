// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from seabot_interfaces:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "seabot_interfaces/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace seabot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Feedback_feedback
{
public:
  Init_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::seabot_interfaces::msg::Feedback feedback(::seabot_interfaces::msg::Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::seabot_interfaces::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::seabot_interfaces::msg::Feedback>()
{
  return seabot_interfaces::msg::builder::Init_Feedback_feedback();
}

}  // namespace seabot_interfaces

#endif  // SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
