// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Feedback in the package custom_interfaces.
typedef struct custom_interfaces__msg__Feedback
{
  rosidl_runtime_c__String feedback;
} custom_interfaces__msg__Feedback;

// Struct for a sequence of custom_interfaces__msg__Feedback.
typedef struct custom_interfaces__msg__Feedback__Sequence
{
  custom_interfaces__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_
