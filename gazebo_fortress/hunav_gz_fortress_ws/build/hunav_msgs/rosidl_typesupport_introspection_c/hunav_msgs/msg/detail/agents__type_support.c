// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hunav_msgs:msg/Agents.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hunav_msgs/msg/detail/agents__rosidl_typesupport_introspection_c.h"
#include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hunav_msgs/msg/detail/agents__functions.h"
#include "hunav_msgs/msg/detail/agents__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `agents`
#include "hunav_msgs/msg/agent.h"
// Member `agents`
#include "hunav_msgs/msg/detail/agent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hunav_msgs__msg__Agents__init(message_memory);
}

void hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_fini_function(void * message_memory)
{
  hunav_msgs__msg__Agents__fini(message_memory);
}

size_t hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__size_function__Agents__agents(
  const void * untyped_member)
{
  const hunav_msgs__msg__Agent__Sequence * member =
    (const hunav_msgs__msg__Agent__Sequence *)(untyped_member);
  return member->size;
}

const void * hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_const_function__Agents__agents(
  const void * untyped_member, size_t index)
{
  const hunav_msgs__msg__Agent__Sequence * member =
    (const hunav_msgs__msg__Agent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_function__Agents__agents(
  void * untyped_member, size_t index)
{
  hunav_msgs__msg__Agent__Sequence * member =
    (hunav_msgs__msg__Agent__Sequence *)(untyped_member);
  return &member->data[index];
}

void hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__fetch_function__Agents__agents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hunav_msgs__msg__Agent * item =
    ((const hunav_msgs__msg__Agent *)
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_const_function__Agents__agents(untyped_member, index));
  hunav_msgs__msg__Agent * value =
    (hunav_msgs__msg__Agent *)(untyped_value);
  *value = *item;
}

void hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__assign_function__Agents__agents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hunav_msgs__msg__Agent * item =
    ((hunav_msgs__msg__Agent *)
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_function__Agents__agents(untyped_member, index));
  const hunav_msgs__msg__Agent * value =
    (const hunav_msgs__msg__Agent *)(untyped_value);
  *item = *value;
}

bool hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__resize_function__Agents__agents(
  void * untyped_member, size_t size)
{
  hunav_msgs__msg__Agent__Sequence * member =
    (hunav_msgs__msg__Agent__Sequence *)(untyped_member);
  hunav_msgs__msg__Agent__Sequence__fini(member);
  return hunav_msgs__msg__Agent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__msg__Agents, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__msg__Agents, agents),  // bytes offset in struct
    NULL,  // default value
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__size_function__Agents__agents,  // size() function pointer
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_const_function__Agents__agents,  // get_const(index) function pointer
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__get_function__Agents__agents,  // get(index) function pointer
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__fetch_function__Agents__agents,  // fetch(index, &value) function pointer
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__assign_function__Agents__agents,  // assign(index, value) function pointer
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__resize_function__Agents__agents  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_members = {
  "hunav_msgs__msg",  // message namespace
  "Agents",  // message name
  2,  // number of fields
  sizeof(hunav_msgs__msg__Agents),
  hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_member_array,  // message members
  hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_init_function,  // function to initialize message memory (memory has to be allocated)
  hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_type_support_handle = {
  0,
  &hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, msg, Agents)() {
  hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, msg, Agent)();
  if (!hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_type_support_handle.typesupport_identifier) {
    hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hunav_msgs__msg__Agents__rosidl_typesupport_introspection_c__Agents_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
