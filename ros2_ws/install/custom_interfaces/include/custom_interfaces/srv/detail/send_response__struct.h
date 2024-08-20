// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/SendResponse.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__STRUCT_H_

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

// Struct defined in srv/SendResponse in the package custom_interfaces.
typedef struct custom_interfaces__srv__SendResponse_Request
{
  rosidl_runtime_c__String message;
  double value;
} custom_interfaces__srv__SendResponse_Request;

// Struct for a sequence of custom_interfaces__srv__SendResponse_Request.
typedef struct custom_interfaces__srv__SendResponse_Request__Sequence
{
  custom_interfaces__srv__SendResponse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SendResponse_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SendResponse in the package custom_interfaces.
typedef struct custom_interfaces__srv__SendResponse_Response
{
  rosidl_runtime_c__String feedback;
} custom_interfaces__srv__SendResponse_Response;

// Struct for a sequence of custom_interfaces__srv__SendResponse_Response.
typedef struct custom_interfaces__srv__SendResponse_Response__Sequence
{
  custom_interfaces__srv__SendResponse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SendResponse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SEND_RESPONSE__STRUCT_H_
