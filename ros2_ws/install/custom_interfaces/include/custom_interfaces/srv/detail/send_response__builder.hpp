// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SendResponse.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__BUILDER_HPP_

#include "custom_interfaces/srv/detail/send_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendResponse_Request_value
{
public:
  explicit Init_SendResponse_Request_value(::custom_interfaces::srv::SendResponse_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SendResponse_Request value(::custom_interfaces::srv::SendResponse_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SendResponse_Request msg_;
};

class Init_SendResponse_Request_message
{
public:
  Init_SendResponse_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendResponse_Request_value message(::custom_interfaces::srv::SendResponse_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SendResponse_Request_value(msg_);
  }

private:
  ::custom_interfaces::srv::SendResponse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SendResponse_Request>()
{
  return custom_interfaces::srv::builder::Init_SendResponse_Request_message();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendResponse_Response_feedback
{
public:
  Init_SendResponse_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SendResponse_Response feedback(::custom_interfaces::srv::SendResponse_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SendResponse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SendResponse_Response>()
{
  return custom_interfaces::srv::builder::Init_SendResponse_Response_feedback();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__BUILDER_HPP_
