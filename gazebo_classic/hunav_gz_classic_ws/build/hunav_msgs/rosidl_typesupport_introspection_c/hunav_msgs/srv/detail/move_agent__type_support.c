// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hunav_msgs:srv/MoveAgent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hunav_msgs/srv/detail/move_agent__rosidl_typesupport_introspection_c.h"
#include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hunav_msgs/srv/detail/move_agent__functions.h"
#include "hunav_msgs/srv/detail/move_agent__struct.h"


// Include directives for member types
// Member `current_agents`
#include "hunav_msgs/msg/agents.h"
// Member `current_agents`
#include "hunav_msgs/msg/detail/agents__rosidl_typesupport_introspection_c.h"
// Member `robot`
#include "hunav_msgs/msg/agent.h"
// Member `robot`
#include "hunav_msgs/msg/detail/agent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hunav_msgs__srv__MoveAgent_Request__init(message_memory);
}

void hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_fini_function(void * message_memory)
{
  hunav_msgs__srv__MoveAgent_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_member_array[3] = {
  {
    "current_agents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__MoveAgent_Request, current_agents),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__MoveAgent_Request, robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__MoveAgent_Request, agent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_members = {
  "hunav_msgs__srv",  // message namespace
  "MoveAgent_Request",  // message name
  3,  // number of fields
  sizeof(hunav_msgs__srv__MoveAgent_Request),
  hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_member_array,  // message members
  hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_type_support_handle = {
  0,
  &hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Request)() {
  hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, msg, Agents)();
  hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, msg, Agent)();
  if (!hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hunav_msgs__srv__MoveAgent_Request__rosidl_typesupport_introspection_c__MoveAgent_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hunav_msgs/srv/detail/move_agent__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__functions.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__struct.h"


// Include directives for member types
// Member `updated_agent`
// already included above
// #include "hunav_msgs/msg/agent.h"
// Member `updated_agent`
// already included above
// #include "hunav_msgs/msg/detail/agent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hunav_msgs__srv__MoveAgent_Response__init(message_memory);
}

void hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_fini_function(void * message_memory)
{
  hunav_msgs__srv__MoveAgent_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_member_array[1] = {
  {
    "updated_agent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__MoveAgent_Response, updated_agent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_members = {
  "hunav_msgs__srv",  // message namespace
  "MoveAgent_Response",  // message name
  1,  // number of fields
  sizeof(hunav_msgs__srv__MoveAgent_Response),
  hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_member_array,  // message members
  hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_type_support_handle = {
  0,
  &hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Response)() {
  hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, msg, Agent)();
  if (!hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hunav_msgs__srv__MoveAgent_Response__rosidl_typesupport_introspection_c__MoveAgent_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_members = {
  "hunav_msgs__srv",  // service namespace
  "MoveAgent",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_Request_message_type_support_handle,
  NULL  // response message
  // hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_Response_message_type_support_handle
};

static rosidl_service_type_support_t hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_type_support_handle = {
  0,
  &hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent)() {
  if (!hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, MoveAgent_Response)()->data;
  }

  return &hunav_msgs__srv__detail__move_agent__rosidl_typesupport_introspection_c__MoveAgent_service_type_support_handle;
}
