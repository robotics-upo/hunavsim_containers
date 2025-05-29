// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__FUNCTIONS_H_
#define HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hunav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hunav_msgs/msg/detail/agent_behavior__struct.h"

/// Initialize msg/AgentBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hunav_msgs__msg__AgentBehavior
 * )) before or use
 * hunav_msgs__msg__AgentBehavior__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__init(hunav_msgs__msg__AgentBehavior * msg);

/// Finalize msg/AgentBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__msg__AgentBehavior__fini(hunav_msgs__msg__AgentBehavior * msg);

/// Create msg/AgentBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hunav_msgs__msg__AgentBehavior__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__msg__AgentBehavior *
hunav_msgs__msg__AgentBehavior__create();

/// Destroy msg/AgentBehavior message.
/**
 * It calls
 * hunav_msgs__msg__AgentBehavior__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__msg__AgentBehavior__destroy(hunav_msgs__msg__AgentBehavior * msg);

/// Check for msg/AgentBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__are_equal(const hunav_msgs__msg__AgentBehavior * lhs, const hunav_msgs__msg__AgentBehavior * rhs);

/// Copy a msg/AgentBehavior message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__copy(
  const hunav_msgs__msg__AgentBehavior * input,
  hunav_msgs__msg__AgentBehavior * output);

/// Initialize array of msg/AgentBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * hunav_msgs__msg__AgentBehavior__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__Sequence__init(hunav_msgs__msg__AgentBehavior__Sequence * array, size_t size);

/// Finalize array of msg/AgentBehavior messages.
/**
 * It calls
 * hunav_msgs__msg__AgentBehavior__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__msg__AgentBehavior__Sequence__fini(hunav_msgs__msg__AgentBehavior__Sequence * array);

/// Create array of msg/AgentBehavior messages.
/**
 * It allocates the memory for the array and calls
 * hunav_msgs__msg__AgentBehavior__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__msg__AgentBehavior__Sequence *
hunav_msgs__msg__AgentBehavior__Sequence__create(size_t size);

/// Destroy array of msg/AgentBehavior messages.
/**
 * It calls
 * hunav_msgs__msg__AgentBehavior__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__msg__AgentBehavior__Sequence__destroy(hunav_msgs__msg__AgentBehavior__Sequence * array);

/// Check for msg/AgentBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__Sequence__are_equal(const hunav_msgs__msg__AgentBehavior__Sequence * lhs, const hunav_msgs__msg__AgentBehavior__Sequence * rhs);

/// Copy an array of msg/AgentBehavior messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__msg__AgentBehavior__Sequence__copy(
  const hunav_msgs__msg__AgentBehavior__Sequence * input,
  hunav_msgs__msg__AgentBehavior__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__FUNCTIONS_H_
