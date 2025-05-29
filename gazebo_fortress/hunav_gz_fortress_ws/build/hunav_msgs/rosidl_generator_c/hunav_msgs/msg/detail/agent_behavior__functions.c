// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/msg/detail/agent_behavior__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hunav_msgs__msg__AgentBehavior__init(hunav_msgs__msg__AgentBehavior * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // state
  // configuration
  // duration
  // once
  // vel
  // dist
  // social_force_factor
  // goal_force_factor
  // obstacle_force_factor
  // other_force_factor
  return true;
}

void
hunav_msgs__msg__AgentBehavior__fini(hunav_msgs__msg__AgentBehavior * msg)
{
  if (!msg) {
    return;
  }
  // type
  // state
  // configuration
  // duration
  // once
  // vel
  // dist
  // social_force_factor
  // goal_force_factor
  // obstacle_force_factor
  // other_force_factor
}

bool
hunav_msgs__msg__AgentBehavior__are_equal(const hunav_msgs__msg__AgentBehavior * lhs, const hunav_msgs__msg__AgentBehavior * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // configuration
  if (lhs->configuration != rhs->configuration) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // once
  if (lhs->once != rhs->once) {
    return false;
  }
  // vel
  if (lhs->vel != rhs->vel) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  // social_force_factor
  if (lhs->social_force_factor != rhs->social_force_factor) {
    return false;
  }
  // goal_force_factor
  if (lhs->goal_force_factor != rhs->goal_force_factor) {
    return false;
  }
  // obstacle_force_factor
  if (lhs->obstacle_force_factor != rhs->obstacle_force_factor) {
    return false;
  }
  // other_force_factor
  if (lhs->other_force_factor != rhs->other_force_factor) {
    return false;
  }
  return true;
}

bool
hunav_msgs__msg__AgentBehavior__copy(
  const hunav_msgs__msg__AgentBehavior * input,
  hunav_msgs__msg__AgentBehavior * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // state
  output->state = input->state;
  // configuration
  output->configuration = input->configuration;
  // duration
  output->duration = input->duration;
  // once
  output->once = input->once;
  // vel
  output->vel = input->vel;
  // dist
  output->dist = input->dist;
  // social_force_factor
  output->social_force_factor = input->social_force_factor;
  // goal_force_factor
  output->goal_force_factor = input->goal_force_factor;
  // obstacle_force_factor
  output->obstacle_force_factor = input->obstacle_force_factor;
  // other_force_factor
  output->other_force_factor = input->other_force_factor;
  return true;
}

hunav_msgs__msg__AgentBehavior *
hunav_msgs__msg__AgentBehavior__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__AgentBehavior * msg = (hunav_msgs__msg__AgentBehavior *)allocator.allocate(sizeof(hunav_msgs__msg__AgentBehavior), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__msg__AgentBehavior));
  bool success = hunav_msgs__msg__AgentBehavior__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__msg__AgentBehavior__destroy(hunav_msgs__msg__AgentBehavior * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__msg__AgentBehavior__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__msg__AgentBehavior__Sequence__init(hunav_msgs__msg__AgentBehavior__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__AgentBehavior * data = NULL;

  if (size) {
    data = (hunav_msgs__msg__AgentBehavior *)allocator.zero_allocate(size, sizeof(hunav_msgs__msg__AgentBehavior), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__msg__AgentBehavior__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__msg__AgentBehavior__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hunav_msgs__msg__AgentBehavior__Sequence__fini(hunav_msgs__msg__AgentBehavior__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hunav_msgs__msg__AgentBehavior__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hunav_msgs__msg__AgentBehavior__Sequence *
hunav_msgs__msg__AgentBehavior__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__AgentBehavior__Sequence * array = (hunav_msgs__msg__AgentBehavior__Sequence *)allocator.allocate(sizeof(hunav_msgs__msg__AgentBehavior__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__msg__AgentBehavior__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__msg__AgentBehavior__Sequence__destroy(hunav_msgs__msg__AgentBehavior__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__msg__AgentBehavior__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__msg__AgentBehavior__Sequence__are_equal(const hunav_msgs__msg__AgentBehavior__Sequence * lhs, const hunav_msgs__msg__AgentBehavior__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__msg__AgentBehavior__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__msg__AgentBehavior__Sequence__copy(
  const hunav_msgs__msg__AgentBehavior__Sequence * input,
  hunav_msgs__msg__AgentBehavior__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__msg__AgentBehavior);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__msg__AgentBehavior * data =
      (hunav_msgs__msg__AgentBehavior *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__msg__AgentBehavior__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__msg__AgentBehavior__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__msg__AgentBehavior__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
