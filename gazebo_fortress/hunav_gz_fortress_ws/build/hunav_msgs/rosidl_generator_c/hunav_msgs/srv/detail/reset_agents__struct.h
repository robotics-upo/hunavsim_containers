// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:srv/ResetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__STRUCT_H_
#define HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_agents'
#include "hunav_msgs/msg/detail/agents__struct.h"
// Member 'robot'
#include "hunav_msgs/msg/detail/agent__struct.h"

/// Struct defined in srv/ResetAgents in the package hunav_msgs.
typedef struct hunav_msgs__srv__ResetAgents_Request
{
  hunav_msgs__msg__Agents current_agents;
  hunav_msgs__msg__Agent robot;
} hunav_msgs__srv__ResetAgents_Request;

// Struct for a sequence of hunav_msgs__srv__ResetAgents_Request.
typedef struct hunav_msgs__srv__ResetAgents_Request__Sequence
{
  hunav_msgs__srv__ResetAgents_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__ResetAgents_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetAgents in the package hunav_msgs.
typedef struct hunav_msgs__srv__ResetAgents_Response
{
  bool ok;
} hunav_msgs__srv__ResetAgents_Response;

// Struct for a sequence of hunav_msgs__srv__ResetAgents_Response.
typedef struct hunav_msgs__srv__ResetAgents_Response__Sequence
{
  hunav_msgs__srv__ResetAgents_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__ResetAgents_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__STRUCT_H_
