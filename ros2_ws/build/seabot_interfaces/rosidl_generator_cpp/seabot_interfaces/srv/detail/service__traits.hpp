// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__SRV__DETAIL__SERVICE__TRAITS_HPP_
#define SEABOT_INTERFACES__SRV__DETAIL__SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "seabot_interfaces/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace seabot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace seabot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use seabot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const seabot_interfaces::srv::Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  seabot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use seabot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const seabot_interfaces::srv::Service_Request & msg)
{
  return seabot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<seabot_interfaces::srv::Service_Request>()
{
  return "seabot_interfaces::srv::Service_Request";
}

template<>
inline const char * name<seabot_interfaces::srv::Service_Request>()
{
  return "seabot_interfaces/srv/Service_Request";
}

template<>
struct has_fixed_size<seabot_interfaces::srv::Service_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<seabot_interfaces::srv::Service_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<seabot_interfaces::srv::Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace seabot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace seabot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use seabot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const seabot_interfaces::srv::Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  seabot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use seabot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const seabot_interfaces::srv::Service_Response & msg)
{
  return seabot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<seabot_interfaces::srv::Service_Response>()
{
  return "seabot_interfaces::srv::Service_Response";
}

template<>
inline const char * name<seabot_interfaces::srv::Service_Response>()
{
  return "seabot_interfaces/srv/Service_Response";
}

template<>
struct has_fixed_size<seabot_interfaces::srv::Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<seabot_interfaces::srv::Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<seabot_interfaces::srv::Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<seabot_interfaces::srv::Service>()
{
  return "seabot_interfaces::srv::Service";
}

template<>
inline const char * name<seabot_interfaces::srv::Service>()
{
  return "seabot_interfaces/srv/Service";
}

template<>
struct has_fixed_size<seabot_interfaces::srv::Service>
  : std::integral_constant<
    bool,
    has_fixed_size<seabot_interfaces::srv::Service_Request>::value &&
    has_fixed_size<seabot_interfaces::srv::Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<seabot_interfaces::srv::Service>
  : std::integral_constant<
    bool,
    has_bounded_size<seabot_interfaces::srv::Service_Request>::value &&
    has_bounded_size<seabot_interfaces::srv::Service_Response>::value
  >
{
};

template<>
struct is_service<seabot_interfaces::srv::Service>
  : std::true_type
{
};

template<>
struct is_service_request<seabot_interfaces::srv::Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<seabot_interfaces::srv::Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEABOT_INTERFACES__SRV__DETAIL__SERVICE__TRAITS_HPP_
