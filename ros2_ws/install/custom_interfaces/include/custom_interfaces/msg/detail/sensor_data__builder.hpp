// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include "custom_interfaces/msg/detail/sensor_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorData_temp
{
public:
  explicit Init_SensorData_temp(::custom_interfaces::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::SensorData temp(::custom_interfaces::msg::SensorData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SensorData msg_;
};

class Init_SensorData_data
{
public:
  Init_SensorData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_temp data(::custom_interfaces::msg::SensorData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SensorData_temp(msg_);
  }

private:
  ::custom_interfaces::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SensorData>()
{
  return custom_interfaces::msg::builder::Init_SensorData_data();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
