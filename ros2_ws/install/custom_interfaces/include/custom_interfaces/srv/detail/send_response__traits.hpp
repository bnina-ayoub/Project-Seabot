// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/SendResponse.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__TRAITS_HPP_

#include "custom_interfaces/srv/detail/send_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SendResponse_Request>()
{
  return "custom_interfaces::srv::SendResponse_Request";
}

template<>
inline const char * name<custom_interfaces::srv::SendResponse_Request>()
{
  return "custom_interfaces/srv/SendResponse_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SendResponse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SendResponse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::SendResponse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SendResponse_Response>()
{
  return "custom_interfaces::srv::SendResponse_Response";
}

template<>
inline const char * name<custom_interfaces::srv::SendResponse_Response>()
{
  return "custom_interfaces/srv/SendResponse_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SendResponse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SendResponse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::SendResponse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SendResponse>()
{
  return "custom_interfaces::srv::SendResponse";
}

template<>
inline const char * name<custom_interfaces::srv::SendResponse>()
{
  return "custom_interfaces/srv/SendResponse";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SendResponse>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::SendResponse_Request>::value &&
    has_fixed_size<custom_interfaces::srv::SendResponse_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::SendResponse>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::SendResponse_Request>::value &&
    has_bounded_size<custom_interfaces::srv::SendResponse_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::SendResponse>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::SendResponse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::SendResponse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__TRAITS_HPP_
