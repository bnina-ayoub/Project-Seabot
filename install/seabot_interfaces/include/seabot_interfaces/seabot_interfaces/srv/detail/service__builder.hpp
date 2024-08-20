// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__SRV__DETAIL__SERVICE__BUILDER_HPP_
#define SEABOT_INTERFACES__SRV__DETAIL__SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "seabot_interfaces/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace seabot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Service_Request_value
{
public:
  explicit Init_Service_Request_value(::seabot_interfaces::srv::Service_Request & msg)
  : msg_(msg)
  {}
  ::seabot_interfaces::srv::Service_Request value(::seabot_interfaces::srv::Service_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::seabot_interfaces::srv::Service_Request msg_;
};

class Init_Service_Request_message
{
public:
  Init_Service_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Service_Request_value message(::seabot_interfaces::srv::Service_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Service_Request_value(msg_);
  }

private:
  ::seabot_interfaces::srv::Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::seabot_interfaces::srv::Service_Request>()
{
  return seabot_interfaces::srv::builder::Init_Service_Request_message();
}

}  // namespace seabot_interfaces


namespace seabot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Service_Response_feedback
{
public:
  Init_Service_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::seabot_interfaces::srv::Service_Response feedback(::seabot_interfaces::srv::Service_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::seabot_interfaces::srv::Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::seabot_interfaces::srv::Service_Response>()
{
  return seabot_interfaces::srv::builder::Init_Service_Response_feedback();
}

}  // namespace seabot_interfaces

#endif  // SEABOT_INTERFACES__SRV__DETAIL__SERVICE__BUILDER_HPP_
