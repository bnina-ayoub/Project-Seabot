// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "seabot_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace seabot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace seabot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use seabot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const seabot_interfaces::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  seabot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use seabot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const seabot_interfaces::msg::SensorData & msg)
{
  return seabot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<seabot_interfaces::msg::SensorData>()
{
  return "seabot_interfaces::msg::SensorData";
}

template<>
inline const char * name<seabot_interfaces::msg::SensorData>()
{
  return "seabot_interfaces/msg/SensorData";
}

template<>
struct has_fixed_size<seabot_interfaces::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<seabot_interfaces::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<seabot_interfaces::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
