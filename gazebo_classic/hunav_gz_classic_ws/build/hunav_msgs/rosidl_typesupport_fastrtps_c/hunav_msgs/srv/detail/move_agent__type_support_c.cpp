// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hunav_msgs:srv/MoveAgent.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/srv/detail/move_agent__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hunav_msgs/srv/detail/move_agent__struct.h"
#include "hunav_msgs/srv/detail/move_agent__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "hunav_msgs/msg/detail/agent__functions.h"  // robot
#include "hunav_msgs/msg/detail/agents__functions.h"  // current_agents

// forward declare type support functions
size_t get_serialized_size_hunav_msgs__msg__Agent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hunav_msgs__msg__Agent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent)();
size_t get_serialized_size_hunav_msgs__msg__Agents(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hunav_msgs__msg__Agents(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agents)();


using _MoveAgent_Request__ros_msg_type = hunav_msgs__srv__MoveAgent_Request;

static bool _MoveAgent_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveAgent_Request__ros_msg_type * ros_message = static_cast<const _MoveAgent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_agents
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agents
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_agents, cdr))
    {
      return false;
    }
  }

  // Field name: robot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot, cdr))
    {
      return false;
    }
  }

  // Field name: agent_id
  {
    cdr << ros_message->agent_id;
  }

  return true;
}

static bool _MoveAgent_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveAgent_Request__ros_msg_type * ros_message = static_cast<_MoveAgent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_agents
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agents
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_agents))
    {
      return false;
    }
  }

  // Field name: robot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot))
    {
      return false;
    }
  }

  // Field name: agent_id
  {
    cdr >> ros_message->agent_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__MoveAgent_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveAgent_Request__ros_msg_type * ros_message = static_cast<const _MoveAgent_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_agents

  current_alignment += get_serialized_size_hunav_msgs__msg__Agents(
    &(ros_message->current_agents), current_alignment);
  // field.name robot

  current_alignment += get_serialized_size_hunav_msgs__msg__Agent(
    &(ros_message->robot), current_alignment);
  // field.name agent_id
  {
    size_t item_size = sizeof(ros_message->agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoveAgent_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__MoveAgent_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__MoveAgent_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: current_agents
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hunav_msgs__msg__Agents(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: robot
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hunav_msgs__msg__Agent(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: agent_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hunav_msgs__srv__MoveAgent_Request;
    is_plain =
      (
      offsetof(DataType, agent_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveAgent_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__MoveAgent_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveAgent_Request = {
  "hunav_msgs::srv",
  "MoveAgent_Request",
  _MoveAgent_Request__cdr_serialize,
  _MoveAgent_Request__cdr_deserialize,
  _MoveAgent_Request__get_serialized_size,
  _MoveAgent_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoveAgent_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveAgent_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, MoveAgent_Request)() {
  return &_MoveAgent_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__struct.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "hunav_msgs/msg/detail/agent__functions.h"  // updated_agent

// forward declare type support functions
size_t get_serialized_size_hunav_msgs__msg__Agent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hunav_msgs__msg__Agent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent)();


using _MoveAgent_Response__ros_msg_type = hunav_msgs__srv__MoveAgent_Response;

static bool _MoveAgent_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveAgent_Response__ros_msg_type * ros_message = static_cast<const _MoveAgent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: updated_agent
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->updated_agent, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MoveAgent_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveAgent_Response__ros_msg_type * ros_message = static_cast<_MoveAgent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: updated_agent
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hunav_msgs, msg, Agent
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->updated_agent))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__MoveAgent_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveAgent_Response__ros_msg_type * ros_message = static_cast<const _MoveAgent_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name updated_agent

  current_alignment += get_serialized_size_hunav_msgs__msg__Agent(
    &(ros_message->updated_agent), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MoveAgent_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__MoveAgent_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__MoveAgent_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: updated_agent
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hunav_msgs__msg__Agent(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hunav_msgs__srv__MoveAgent_Response;
    is_plain =
      (
      offsetof(DataType, updated_agent) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveAgent_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__MoveAgent_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveAgent_Response = {
  "hunav_msgs::srv",
  "MoveAgent_Response",
  _MoveAgent_Response__cdr_serialize,
  _MoveAgent_Response__cdr_deserialize,
  _MoveAgent_Response__get_serialized_size,
  _MoveAgent_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoveAgent_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveAgent_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, MoveAgent_Response)() {
  return &_MoveAgent_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hunav_msgs/srv/move_agent.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MoveAgent__callbacks = {
  "hunav_msgs::srv",
  "MoveAgent",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, MoveAgent_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, MoveAgent_Response)(),
};

static rosidl_service_type_support_t MoveAgent__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MoveAgent__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, MoveAgent)() {
  return &MoveAgent__handle;
}

#if defined(__cplusplus)
}
#endif
