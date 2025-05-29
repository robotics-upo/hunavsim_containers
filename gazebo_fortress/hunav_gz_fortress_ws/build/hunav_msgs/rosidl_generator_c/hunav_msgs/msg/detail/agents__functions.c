// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunav_msgs:msg/Agents.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/msg/detail/agents__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `agents`
#include "hunav_msgs/msg/detail/agent__functions.h"

bool
hunav_msgs__msg__Agents__init(hunav_msgs__msg__Agents * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hunav_msgs__msg__Agents__fini(msg);
    return false;
  }
  // agents
  if (!hunav_msgs__msg__Agent__Sequence__init(&msg->agents, 0)) {
    hunav_msgs__msg__Agents__fini(msg);
    return false;
  }
  return true;
}

void
hunav_msgs__msg__Agents__fini(hunav_msgs__msg__Agents * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // agents
  hunav_msgs__msg__Agent__Sequence__fini(&msg->agents);
}

bool
hunav_msgs__msg__Agents__are_equal(const hunav_msgs__msg__Agents * lhs, const hunav_msgs__msg__Agents * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // agents
  if (!hunav_msgs__msg__Agent__Sequence__are_equal(
      &(lhs->agents), &(rhs->agents)))
  {
    return false;
  }
  return true;
}

bool
hunav_msgs__msg__Agents__copy(
  const hunav_msgs__msg__Agents * input,
  hunav_msgs__msg__Agents * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // agents
  if (!hunav_msgs__msg__Agent__Sequence__copy(
      &(input->agents), &(output->agents)))
  {
    return false;
  }
  return true;
}

hunav_msgs__msg__Agents *
hunav_msgs__msg__Agents__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agents * msg = (hunav_msgs__msg__Agents *)allocator.allocate(sizeof(hunav_msgs__msg__Agents), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__msg__Agents));
  bool success = hunav_msgs__msg__Agents__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__msg__Agents__destroy(hunav_msgs__msg__Agents * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__msg__Agents__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__msg__Agents__Sequence__init(hunav_msgs__msg__Agents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agents * data = NULL;

  if (size) {
    data = (hunav_msgs__msg__Agents *)allocator.zero_allocate(size, sizeof(hunav_msgs__msg__Agents), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__msg__Agents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__msg__Agents__fini(&data[i - 1]);
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
hunav_msgs__msg__Agents__Sequence__fini(hunav_msgs__msg__Agents__Sequence * array)
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
      hunav_msgs__msg__Agents__fini(&array->data[i]);
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

hunav_msgs__msg__Agents__Sequence *
hunav_msgs__msg__Agents__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agents__Sequence * array = (hunav_msgs__msg__Agents__Sequence *)allocator.allocate(sizeof(hunav_msgs__msg__Agents__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__msg__Agents__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__msg__Agents__Sequence__destroy(hunav_msgs__msg__Agents__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__msg__Agents__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__msg__Agents__Sequence__are_equal(const hunav_msgs__msg__Agents__Sequence * lhs, const hunav_msgs__msg__Agents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__msg__Agents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__msg__Agents__Sequence__copy(
  const hunav_msgs__msg__Agents__Sequence * input,
  hunav_msgs__msg__Agents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__msg__Agents);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__msg__Agents * data =
      (hunav_msgs__msg__Agents *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__msg__Agents__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__msg__Agents__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__msg__Agents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
