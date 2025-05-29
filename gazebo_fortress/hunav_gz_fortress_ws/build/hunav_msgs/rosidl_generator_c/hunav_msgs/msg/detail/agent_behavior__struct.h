// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_H_
#define HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BEH_REGULAR'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_REGULAR = 1
};

/// Constant 'BEH_IMPASSIVE'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_IMPASSIVE = 2
};

/// Constant 'BEH_SURPRISED'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_SURPRISED = 3
};

/// Constant 'BEH_SCARED'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_SCARED = 4
};

/// Constant 'BEH_CURIOUS'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_CURIOUS = 5
};

/// Constant 'BEH_THREATENING'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_THREATENING = 6
};

/// Constant 'BEH_NO_ACTIVE'.
/**
  * behavior states
 */
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_NO_ACTIVE = 0
};

/// Constant 'BEH_ACTIVE_1'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_ACTIVE_1 = 1
};

/// Constant 'BEH_ACTIVE_2'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_ACTIVE_2 = 2
};

/// Constant 'BEH_CONF_DEFAULT'.
/**
  * behavior configuration
 */
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_CONF_DEFAULT = 0
};

/// Constant 'BEH_CONF_CUSTOM'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_CONF_CUSTOM = 1
};

/// Constant 'BEH_CONF_RANDOM_NORMAL'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_CONF_RANDOM_NORMAL = 2
};

/// Constant 'BEH_CONF_RANDOM_UNIFORM'.
enum
{
  hunav_msgs__msg__AgentBehavior__BEH_CONF_RANDOM_UNIFORM = 3
};

/// Struct defined in msg/AgentBehavior in the package hunav_msgs.
/**
  * behaviors types
 */
typedef struct hunav_msgs__msg__AgentBehavior
{
  uint8_t type;
  uint8_t state;
  uint8_t configuration;
  float duration;
  bool once;
  float vel;
  float dist;
  float social_force_factor;
  float goal_force_factor;
  float obstacle_force_factor;
  float other_force_factor;
} hunav_msgs__msg__AgentBehavior;

// Struct for a sequence of hunav_msgs__msg__AgentBehavior.
typedef struct hunav_msgs__msg__AgentBehavior__Sequence
{
  hunav_msgs__msg__AgentBehavior * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__msg__AgentBehavior__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_H_
