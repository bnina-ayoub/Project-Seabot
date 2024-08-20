// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "seabot_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace seabot_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorData_temp
{
public:
  explicit Init_SensorData_temp(::seabot_interfaces::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::seabot_interfaces::msg::SensorData temp(::seabot_interfaces::msg::SensorData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::seabot_interfaces::msg::SensorData msg_;
};

class Init_SensorData_data
{
public:
  Init_SensorData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_temp data(::seabot_interfaces::msg::SensorData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SensorData_temp(msg_);
  }

private:
  ::seabot_interfaces::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::seabot_interfaces::msg::SensorData>()
{
  return seabot_interfaces::msg::builder::Init_SensorData_data();
}

}  // namespace seabot_interfaces

#endif  // SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
