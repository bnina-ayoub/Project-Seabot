// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_H_
#define SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Service in the package seabot_interfaces.
typedef struct seabot_interfaces__srv__Service_Request
{
  rosidl_runtime_c__String message;
  double value;
} seabot_interfaces__srv__Service_Request;

// Struct for a sequence of seabot_interfaces__srv__Service_Request.
typedef struct seabot_interfaces__srv__Service_Request__Sequence
{
  seabot_interfaces__srv__Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} seabot_interfaces__srv__Service_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Service in the package seabot_interfaces.
typedef struct seabot_interfaces__srv__Service_Response
{
  rosidl_runtime_c__String feedback;
} seabot_interfaces__srv__Service_Response;

// Struct for a sequence of seabot_interfaces__srv__Service_Response.
typedef struct seabot_interfaces__srv__Service_Response__Sequence
{
  seabot_interfaces__srv__Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} seabot_interfaces__srv__Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_H_
