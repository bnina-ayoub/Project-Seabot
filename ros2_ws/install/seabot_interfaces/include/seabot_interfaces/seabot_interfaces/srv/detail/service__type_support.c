// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "seabot_interfaces/srv/detail/service__rosidl_typesupport_introspection_c.h"
#include "seabot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "seabot_interfaces/srv/detail/service__functions.h"
#include "seabot_interfaces/srv/detail/service__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  seabot_interfaces__srv__Service_Request__init(message_memory);
}

void seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_fini_function(void * message_memory)
{
  seabot_interfaces__srv__Service_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_member_array[2] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces__srv__Service_Request, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces__srv__Service_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_members = {
  "seabot_interfaces__srv",  // message namespace
  "Service_Request",  // message name
  2,  // number of fields
  sizeof(seabot_interfaces__srv__Service_Request),
  seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_member_array,  // message members
  seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_type_support_handle = {
  0,
  &seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_seabot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Request)() {
  if (!seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_type_support_handle.typesupport_identifier) {
    seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &seabot_interfaces__srv__Service_Request__rosidl_typesupport_introspection_c__Service_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "seabot_interfaces/srv/detail/service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "seabot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "seabot_interfaces/srv/detail/service__functions.h"
// already included above
// #include "seabot_interfaces/srv/detail/service__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  seabot_interfaces__srv__Service_Response__init(message_memory);
}

void seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_fini_function(void * message_memory)
{
  seabot_interfaces__srv__Service_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(seabot_interfaces__srv__Service_Response, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_members = {
  "seabot_interfaces__srv",  // message namespace
  "Service_Response",  // message name
  1,  // number of fields
  sizeof(seabot_interfaces__srv__Service_Response),
  seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_member_array,  // message members
  seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_type_support_handle = {
  0,
  &seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_seabot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Response)() {
  if (!seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_type_support_handle.typesupport_identifier) {
    seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &seabot_interfaces__srv__Service_Response__rosidl_typesupport_introspection_c__Service_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "seabot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "seabot_interfaces/srv/detail/service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_members = {
  "seabot_interfaces__srv",  // service namespace
  "Service",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_Request_message_type_support_handle,
  NULL  // response message
  // seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_Response_message_type_support_handle
};

static rosidl_service_type_support_t seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_type_support_handle = {
  0,
  &seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_seabot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service)() {
  if (!seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_type_support_handle.typesupport_identifier) {
    seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, seabot_interfaces, srv, Service_Response)()->data;
  }

  return &seabot_interfaces__srv__detail__service__rosidl_typesupport_introspection_c__Service_service_type_support_handle;
}
