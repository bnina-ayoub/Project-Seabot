// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "seabot_interfaces/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"
#include "seabot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "seabot_interfaces/msg/detail/sensor_data__functions.h"
#include "seabot_interfaces/msg/detail/sensor_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  seabot_interfaces__msg__SensorData__init(message_memory);
}

void seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function(void * message_memory)
{
  seabot_interfaces__msg__SensorData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces__msg__SensorData, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces__msg__SensorData, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members = {
  "seabot_interfaces__msg",  // message namespace
  "SensorData",  // message name
  2,  // number of fields
  sizeof(seabot_interfaces__msg__SensorData),
  seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array,  // message members
  seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle = {
  0,
  &seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_seabot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, msg, SensorData)() {
  if (!seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier) {
    seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &seabot_interfaces__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
