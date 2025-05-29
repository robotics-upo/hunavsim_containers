// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunav_msgs:srv/ComputeAgent.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/srv/detail/compute_agent__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hunav_msgs__srv__ComputeAgent_Request__init(hunav_msgs__srv__ComputeAgent_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  return true;
}

void
hunav_msgs__srv__ComputeAgent_Request__fini(hunav_msgs__srv__ComputeAgent_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
}

bool
hunav_msgs__srv__ComputeAgent_Request__are_equal(const hunav_msgs__srv__ComputeAgent_Request * lhs, const hunav_msgs__srv__ComputeAgent_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
hunav_msgs__srv__ComputeAgent_Request__copy(
  const hunav_msgs__srv__ComputeAgent_Request * input,
  hunav_msgs__srv__ComputeAgent_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

hunav_msgs__srv__ComputeAgent_Request *
hunav_msgs__srv__ComputeAgent_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Request * msg = (hunav_msgs__srv__ComputeAgent_Request *)allocator.allocate(sizeof(hunav_msgs__srv__ComputeAgent_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__srv__ComputeAgent_Request));
  bool success = hunav_msgs__srv__ComputeAgent_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__srv__ComputeAgent_Request__destroy(hunav_msgs__srv__ComputeAgent_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__srv__ComputeAgent_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__srv__ComputeAgent_Request__Sequence__init(hunav_msgs__srv__ComputeAgent_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Request * data = NULL;

  if (size) {
    data = (hunav_msgs__srv__ComputeAgent_Request *)allocator.zero_allocate(size, sizeof(hunav_msgs__srv__ComputeAgent_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__srv__ComputeAgent_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__srv__ComputeAgent_Request__fini(&data[i - 1]);
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
hunav_msgs__srv__ComputeAgent_Request__Sequence__fini(hunav_msgs__srv__ComputeAgent_Request__Sequence * array)
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
      hunav_msgs__srv__ComputeAgent_Request__fini(&array->data[i]);
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

hunav_msgs__srv__ComputeAgent_Request__Sequence *
hunav_msgs__srv__ComputeAgent_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Request__Sequence * array = (hunav_msgs__srv__ComputeAgent_Request__Sequence *)allocator.allocate(sizeof(hunav_msgs__srv__ComputeAgent_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__srv__ComputeAgent_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__srv__ComputeAgent_Request__Sequence__destroy(hunav_msgs__srv__ComputeAgent_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__srv__ComputeAgent_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__srv__ComputeAgent_Request__Sequence__are_equal(const hunav_msgs__srv__ComputeAgent_Request__Sequence * lhs, const hunav_msgs__srv__ComputeAgent_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__srv__ComputeAgent_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__srv__ComputeAgent_Request__Sequence__copy(
  const hunav_msgs__srv__ComputeAgent_Request__Sequence * input,
  hunav_msgs__srv__ComputeAgent_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__srv__ComputeAgent_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__srv__ComputeAgent_Request * data =
      (hunav_msgs__srv__ComputeAgent_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__srv__ComputeAgent_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__srv__ComputeAgent_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__srv__ComputeAgent_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `updated_agent`
#include "hunav_msgs/msg/detail/agent__functions.h"

bool
hunav_msgs__srv__ComputeAgent_Response__init(hunav_msgs__srv__ComputeAgent_Response * msg)
{
  if (!msg) {
    return false;
  }
  // updated_agent
  if (!hunav_msgs__msg__Agent__init(&msg->updated_agent)) {
    hunav_msgs__srv__ComputeAgent_Response__fini(msg);
    return false;
  }
  return true;
}

void
hunav_msgs__srv__ComputeAgent_Response__fini(hunav_msgs__srv__ComputeAgent_Response * msg)
{
  if (!msg) {
    return;
  }
  // updated_agent
  hunav_msgs__msg__Agent__fini(&msg->updated_agent);
}

bool
hunav_msgs__srv__ComputeAgent_Response__are_equal(const hunav_msgs__srv__ComputeAgent_Response * lhs, const hunav_msgs__srv__ComputeAgent_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // updated_agent
  if (!hunav_msgs__msg__Agent__are_equal(
      &(lhs->updated_agent), &(rhs->updated_agent)))
  {
    return false;
  }
  return true;
}

bool
hunav_msgs__srv__ComputeAgent_Response__copy(
  const hunav_msgs__srv__ComputeAgent_Response * input,
  hunav_msgs__srv__ComputeAgent_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // updated_agent
  if (!hunav_msgs__msg__Agent__copy(
      &(input->updated_agent), &(output->updated_agent)))
  {
    return false;
  }
  return true;
}

hunav_msgs__srv__ComputeAgent_Response *
hunav_msgs__srv__ComputeAgent_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Response * msg = (hunav_msgs__srv__ComputeAgent_Response *)allocator.allocate(sizeof(hunav_msgs__srv__ComputeAgent_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__srv__ComputeAgent_Response));
  bool success = hunav_msgs__srv__ComputeAgent_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__srv__ComputeAgent_Response__destroy(hunav_msgs__srv__ComputeAgent_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__srv__ComputeAgent_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__srv__ComputeAgent_Response__Sequence__init(hunav_msgs__srv__ComputeAgent_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Response * data = NULL;

  if (size) {
    data = (hunav_msgs__srv__ComputeAgent_Response *)allocator.zero_allocate(size, sizeof(hunav_msgs__srv__ComputeAgent_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__srv__ComputeAgent_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__srv__ComputeAgent_Response__fini(&data[i - 1]);
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
hunav_msgs__srv__ComputeAgent_Response__Sequence__fini(hunav_msgs__srv__ComputeAgent_Response__Sequence * array)
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
      hunav_msgs__srv__ComputeAgent_Response__fini(&array->data[i]);
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

hunav_msgs__srv__ComputeAgent_Response__Sequence *
hunav_msgs__srv__ComputeAgent_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__ComputeAgent_Response__Sequence * array = (hunav_msgs__srv__ComputeAgent_Response__Sequence *)allocator.allocate(sizeof(hunav_msgs__srv__ComputeAgent_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__srv__ComputeAgent_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__srv__ComputeAgent_Response__Sequence__destroy(hunav_msgs__srv__ComputeAgent_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__srv__ComputeAgent_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__srv__ComputeAgent_Response__Sequence__are_equal(const hunav_msgs__srv__ComputeAgent_Response__Sequence * lhs, const hunav_msgs__srv__ComputeAgent_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__srv__ComputeAgent_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__srv__ComputeAgent_Response__Sequence__copy(
  const hunav_msgs__srv__ComputeAgent_Response__Sequence * input,
  hunav_msgs__srv__ComputeAgent_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__srv__ComputeAgent_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__srv__ComputeAgent_Response * data =
      (hunav_msgs__srv__ComputeAgent_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__srv__ComputeAgent_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__srv__ComputeAgent_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__srv__ComputeAgent_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
