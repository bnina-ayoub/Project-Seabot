// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include "custom_interfaces/msg/detail/feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::msg::Feedback>()
{
  return "custom_interfaces::msg::Feedback";
}

template<>
inline const char * name<custom_interfaces::msg::Feedback>()
{
  return "custom_interfaces/msg/Feedback";
}

template<>
struct has_fixed_size<custom_interfaces::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
