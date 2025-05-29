// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hunav_msgs:srv/ComputeAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__FUNCTIONS_H_
#define HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hunav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hunav_msgs/srv/detail/compute_agents__struct.h"

/// Initialize srv/ComputeAgents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hunav_msgs__srv__ComputeAgents_Request
 * )) before or use
 * hunav_msgs__srv__ComputeAgents_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Request__init(hunav_msgs__srv__ComputeAgents_Request * msg);

/// Finalize srv/ComputeAgents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Request__fini(hunav_msgs__srv__ComputeAgents_Request * msg);

/// Create srv/ComputeAgents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hunav_msgs__srv__ComputeAgents_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__srv__ComputeAgents_Request *
hunav_msgs__srv__ComputeAgents_Request__create();

/// Destroy srv/ComputeAgents message.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Request__destroy(hunav_msgs__srv__ComputeAgents_Request * msg);

/// Check for srv/ComputeAgents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Request__are_equal(const hunav_msgs__srv__ComputeAgents_Request * lhs, const hunav_msgs__srv__ComputeAgents_Request * rhs);

/// Copy a srv/ComputeAgents message.
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
hunav_msgs__srv__ComputeAgents_Request__copy(
  const hunav_msgs__srv__ComputeAgents_Request * input,
  hunav_msgs__srv__ComputeAgents_Request * output);

/// Initialize array of srv/ComputeAgents messages.
/**
 * It allocates the memory for the number of elements and calls
 * hunav_msgs__srv__ComputeAgents_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Request__Sequence__init(hunav_msgs__srv__ComputeAgents_Request__Sequence * array, size_t size);

/// Finalize array of srv/ComputeAgents messages.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Request__Sequence__fini(hunav_msgs__srv__ComputeAgents_Request__Sequence * array);

/// Create array of srv/ComputeAgents messages.
/**
 * It allocates the memory for the array and calls
 * hunav_msgs__srv__ComputeAgents_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__srv__ComputeAgents_Request__Sequence *
hunav_msgs__srv__ComputeAgents_Request__Sequence__create(size_t size);

/// Destroy array of srv/ComputeAgents messages.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Request__Sequence__destroy(hunav_msgs__srv__ComputeAgents_Request__Sequence * array);

/// Check for srv/ComputeAgents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Request__Sequence__are_equal(const hunav_msgs__srv__ComputeAgents_Request__Sequence * lhs, const hunav_msgs__srv__ComputeAgents_Request__Sequence * rhs);

/// Copy an array of srv/ComputeAgents messages.
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
hunav_msgs__srv__ComputeAgents_Request__Sequence__copy(
  const hunav_msgs__srv__ComputeAgents_Request__Sequence * input,
  hunav_msgs__srv__ComputeAgents_Request__Sequence * output);

/// Initialize srv/ComputeAgents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hunav_msgs__srv__ComputeAgents_Response
 * )) before or use
 * hunav_msgs__srv__ComputeAgents_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Response__init(hunav_msgs__srv__ComputeAgents_Response * msg);

/// Finalize srv/ComputeAgents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Response__fini(hunav_msgs__srv__ComputeAgents_Response * msg);

/// Create srv/ComputeAgents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hunav_msgs__srv__ComputeAgents_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__srv__ComputeAgents_Response *
hunav_msgs__srv__ComputeAgents_Response__create();

/// Destroy srv/ComputeAgents message.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Response__destroy(hunav_msgs__srv__ComputeAgents_Response * msg);

/// Check for srv/ComputeAgents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Response__are_equal(const hunav_msgs__srv__ComputeAgents_Response * lhs, const hunav_msgs__srv__ComputeAgents_Response * rhs);

/// Copy a srv/ComputeAgents message.
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
hunav_msgs__srv__ComputeAgents_Response__copy(
  const hunav_msgs__srv__ComputeAgents_Response * input,
  hunav_msgs__srv__ComputeAgents_Response * output);

/// Initialize array of srv/ComputeAgents messages.
/**
 * It allocates the memory for the number of elements and calls
 * hunav_msgs__srv__ComputeAgents_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Response__Sequence__init(hunav_msgs__srv__ComputeAgents_Response__Sequence * array, size_t size);

/// Finalize array of srv/ComputeAgents messages.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Response__Sequence__fini(hunav_msgs__srv__ComputeAgents_Response__Sequence * array);

/// Create array of srv/ComputeAgents messages.
/**
 * It allocates the memory for the array and calls
 * hunav_msgs__srv__ComputeAgents_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
hunav_msgs__srv__ComputeAgents_Response__Sequence *
hunav_msgs__srv__ComputeAgents_Response__Sequence__create(size_t size);

/// Destroy array of srv/ComputeAgents messages.
/**
 * It calls
 * hunav_msgs__srv__ComputeAgents_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
void
hunav_msgs__srv__ComputeAgents_Response__Sequence__destroy(hunav_msgs__srv__ComputeAgents_Response__Sequence * array);

/// Check for srv/ComputeAgents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunav_msgs
bool
hunav_msgs__srv__ComputeAgents_Response__Sequence__are_equal(const hunav_msgs__srv__ComputeAgents_Response__Sequence * lhs, const hunav_msgs__srv__ComputeAgents_Response__Sequence * rhs);

/// Copy an array of srv/ComputeAgents messages.
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
hunav_msgs__srv__ComputeAgents_Response__Sequence__copy(
  const hunav_msgs__srv__ComputeAgents_Response__Sequence * input,
  hunav_msgs__srv__ComputeAgents_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__FUNCTIONS_H_
