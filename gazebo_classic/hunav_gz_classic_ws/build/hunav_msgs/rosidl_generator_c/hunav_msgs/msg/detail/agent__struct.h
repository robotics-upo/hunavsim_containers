// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:msg/Agent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_H_
#define HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PERSON'.
enum
{
  hunav_msgs__msg__Agent__PERSON = 1
};

/// Constant 'ROBOT'.
enum
{
  hunav_msgs__msg__Agent__ROBOT = 2
};

/// Constant 'OTHER'.
enum
{
  hunav_msgs__msg__Agent__OTHER = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'goals'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'behavior'
#include "hunav_msgs/msg/detail/agent_behavior__struct.h"
// Member 'closest_obs'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Agent in the package hunav_msgs.
/**
  * types
 */
typedef struct hunav_msgs__msg__Agent
{
  int32_t id;
  uint8_t type;
  uint8_t skin;
  rosidl_runtime_c__String name;
  int8_t group_id;
  geometry_msgs__msg__Pose position;
  float yaw;
  geometry_msgs__msg__Twist velocity;
  float desired_velocity;
  float radius;
  float linear_vel;
  float angular_vel;
  hunav_msgs__msg__AgentBehavior behavior;
  geometry_msgs__msg__Pose__Sequence goals;
  bool cyclic_goals;
  float goal_radius;
  geometry_msgs__msg__Point__Sequence closest_obs;
} hunav_msgs__msg__Agent;

// Struct for a sequence of hunav_msgs__msg__Agent.
typedef struct hunav_msgs__msg__Agent__Sequence
{
  hunav_msgs__msg__Agent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__msg__Agent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_H_
