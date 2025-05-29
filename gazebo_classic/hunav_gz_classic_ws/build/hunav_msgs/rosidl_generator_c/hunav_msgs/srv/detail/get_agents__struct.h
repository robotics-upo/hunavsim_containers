// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:srv/GetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_H_
#define HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAgents in the package hunav_msgs.
typedef struct hunav_msgs__srv__GetAgents_Request
{
  int32_t empty;
} hunav_msgs__srv__GetAgents_Request;

// Struct for a sequence of hunav_msgs__srv__GetAgents_Request.
typedef struct hunav_msgs__srv__GetAgents_Request__Sequence
{
  hunav_msgs__srv__GetAgents_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__GetAgents_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'agents'
#include "hunav_msgs/msg/detail/agents__struct.h"

/// Struct defined in srv/GetAgents in the package hunav_msgs.
typedef struct hunav_msgs__srv__GetAgents_Response
{
  hunav_msgs__msg__Agents agents;
} hunav_msgs__srv__GetAgents_Response;

// Struct for a sequence of hunav_msgs__srv__GetAgents_Response.
typedef struct hunav_msgs__srv__GetAgents_Response__Sequence
{
  hunav_msgs__srv__GetAgents_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__GetAgents_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_H_
