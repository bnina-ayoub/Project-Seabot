// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "seabot_interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace seabot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) seabot_interfaces::msg::SensorData(_init);
}

void SensorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<seabot_interfaces::msg::SensorData *>(message_memory);
  typed_message->~SensorData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorData_message_member_array[2] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces::msg::SensorData, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces::msg::SensorData, temp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorData_message_members = {
  "seabot_interfaces::msg",  // message namespace
  "SensorData",  // message name
  2,  // number of fields
  sizeof(seabot_interfaces::msg::SensorData),
  SensorData_message_member_array,  // message members
  SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace seabot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<seabot_interfaces::msg::SensorData>()
{
  return &::seabot_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, seabot_interfaces, msg, SensorData)() {
  return &::seabot_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
