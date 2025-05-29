// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:msg/Agents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENTS__STRUCT_H_
#define HUNAV_MSGS__MSG__DETAIL__AGENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'agents'
#include "hunav_msgs/msg/detail/agent__struct.h"

/// Struct defined in msg/Agents in the package hunav_msgs.
typedef struct hunav_msgs__msg__Agents
{
  std_msgs__msg__Header header;
  hunav_msgs__msg__Agent__Sequence agents;
} hunav_msgs__msg__Agents;

// Struct for a sequence of hunav_msgs__msg__Agents.
typedef struct hunav_msgs__msg__Agents__Sequence
{
  hunav_msgs__msg__Agents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__msg__Agents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENTS__STRUCT_H_
