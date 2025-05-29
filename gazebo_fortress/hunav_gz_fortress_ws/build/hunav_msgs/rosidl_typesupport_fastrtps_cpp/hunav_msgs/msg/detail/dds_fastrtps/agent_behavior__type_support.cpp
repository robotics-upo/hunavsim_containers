// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/msg/detail/agent_behavior__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hunav_msgs/msg/detail/agent_behavior__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hunav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hunav_msgs
cdr_serialize(
  const hunav_msgs::msg::AgentBehavior & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: state
  cdr << ros_message.state;
  // Member: configuration
  cdr << ros_message.configuration;
  // Member: duration
  cdr << ros_message.duration;
  // Member: once
  cdr << (ros_message.once ? true : false);
  // Member: vel
  cdr << ros_message.vel;
  // Member: dist
  cdr << ros_message.dist;
  // Member: social_force_factor
  cdr << ros_message.social_force_factor;
  // Member: goal_force_factor
  cdr << ros_message.goal_force_factor;
  // Member: obstacle_force_factor
  cdr << ros_message.obstacle_force_factor;
  // Member: other_force_factor
  cdr << ros_message.other_force_factor;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hunav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hunav_msgs::msg::AgentBehavior & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: state
  cdr >> ros_message.state;

  // Member: configuration
  cdr >> ros_message.configuration;

  // Member: duration
  cdr >> ros_message.duration;

  // Member: once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.once = tmp ? true : false;
  }

  // Member: vel
  cdr >> ros_message.vel;

  // Member: dist
  cdr >> ros_message.dist;

  // Member: social_force_factor
  cdr >> ros_message.social_force_factor;

  // Member: goal_force_factor
  cdr >> ros_message.goal_force_factor;

  // Member: obstacle_force_factor
  cdr >> ros_message.obstacle_force_factor;

  // Member: other_force_factor
  cdr >> ros_message.other_force_factor;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hunav_msgs
get_serialized_size(
  const hunav_msgs::msg::AgentBehavior & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: configuration
  {
    size_t item_size = sizeof(ros_message.configuration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: once
  {
    size_t item_size = sizeof(ros_message.once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel
  {
    size_t item_size = sizeof(ros_message.vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist
  {
    size_t item_size = sizeof(ros_message.dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: social_force_factor
  {
    size_t item_size = sizeof(ros_message.social_force_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_force_factor
  {
    size_t item_size = sizeof(ros_message.goal_force_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle_force_factor
  {
    size_t item_size = sizeof(ros_message.obstacle_force_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: other_force_factor
  {
    size_t item_size = sizeof(ros_message.other_force_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hunav_msgs
max_serialized_size_AgentBehavior(
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


  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: configuration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: once
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: social_force_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_force_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: obstacle_force_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: other_force_factor
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
    using DataType = hunav_msgs::msg::AgentBehavior;
    is_plain =
      (
      offsetof(DataType, other_force_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AgentBehavior__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hunav_msgs::msg::AgentBehavior *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AgentBehavior__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hunav_msgs::msg::AgentBehavior *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AgentBehavior__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hunav_msgs::msg::AgentBehavior *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AgentBehavior__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AgentBehavior(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AgentBehavior__callbacks = {
  "hunav_msgs::msg",
  "AgentBehavior",
  _AgentBehavior__cdr_serialize,
  _AgentBehavior__cdr_deserialize,
  _AgentBehavior__get_serialized_size,
  _AgentBehavior__max_serialized_size
};

static rosidl_message_type_support_t _AgentBehavior__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AgentBehavior__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hunav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hunav_msgs::msg::AgentBehavior>()
{
  return &hunav_msgs::msg::typesupport_fastrtps_cpp::_AgentBehavior__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hunav_msgs, msg, AgentBehavior)() {
  return &hunav_msgs::msg::typesupport_fastrtps_cpp::_AgentBehavior__handle;
}

#ifdef __cplusplus
}
#endif
