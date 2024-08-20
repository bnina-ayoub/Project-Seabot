// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorData in the package seabot_interfaces.
typedef struct seabot_interfaces__msg__SensorData
{
  rosidl_runtime_c__String data;
  double temp;
} seabot_interfaces__msg__SensorData;

// Struct for a sequence of seabot_interfaces__msg__SensorData.
typedef struct seabot_interfaces__msg__SensorData__Sequence
{
  seabot_interfaces__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} seabot_interfaces__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
