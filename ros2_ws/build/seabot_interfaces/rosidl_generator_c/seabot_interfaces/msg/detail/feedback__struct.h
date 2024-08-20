// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from seabot_interfaces:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_

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

/// Struct defined in msg/Feedback in the package seabot_interfaces.
typedef struct seabot_interfaces__msg__Feedback
{
  rosidl_runtime_c__String feedback;
} seabot_interfaces__msg__Feedback;

// Struct for a sequence of seabot_interfaces__msg__Feedback.
typedef struct seabot_interfaces__msg__Feedback__Sequence
{
  seabot_interfaces__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} seabot_interfaces__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEABOT_INTERFACES__MSG__DETAIL__FEEDBACK__STRUCT_H_
