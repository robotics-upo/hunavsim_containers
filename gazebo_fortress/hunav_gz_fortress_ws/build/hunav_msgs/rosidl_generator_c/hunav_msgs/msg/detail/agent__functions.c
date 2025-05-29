// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunav_msgs:msg/Agent.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/msg/detail/agent__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `goals`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `behavior`
#include "hunav_msgs/msg/detail/agent_behavior__functions.h"
// Member `closest_obs`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
hunav_msgs__msg__Agent__init(hunav_msgs__msg__Agent * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // skin
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  // group_id
  // position
  if (!geometry_msgs__msg__Pose__init(&msg->position)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  // yaw
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  // desired_velocity
  // radius
  // linear_vel
  // angular_vel
  // behavior
  if (!hunav_msgs__msg__AgentBehavior__init(&msg->behavior)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  // goals
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->goals, 0)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  // cyclic_goals
  // goal_radius
  // closest_obs
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->closest_obs, 0)) {
    hunav_msgs__msg__Agent__fini(msg);
    return false;
  }
  return true;
}

void
hunav_msgs__msg__Agent__fini(hunav_msgs__msg__Agent * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // skin
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // group_id
  // position
  geometry_msgs__msg__Pose__fini(&msg->position);
  // yaw
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // desired_velocity
  // radius
  // linear_vel
  // angular_vel
  // behavior
  hunav_msgs__msg__AgentBehavior__fini(&msg->behavior);
  // goals
  geometry_msgs__msg__Pose__Sequence__fini(&msg->goals);
  // cyclic_goals
  // goal_radius
  // closest_obs
  geometry_msgs__msg__Point__Sequence__fini(&msg->closest_obs);
}

bool
hunav_msgs__msg__Agent__are_equal(const hunav_msgs__msg__Agent * lhs, const hunav_msgs__msg__Agent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // skin
  if (lhs->skin != rhs->skin) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // group_id
  if (lhs->group_id != rhs->group_id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // desired_velocity
  if (lhs->desired_velocity != rhs->desired_velocity) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // linear_vel
  if (lhs->linear_vel != rhs->linear_vel) {
    return false;
  }
  // angular_vel
  if (lhs->angular_vel != rhs->angular_vel) {
    return false;
  }
  // behavior
  if (!hunav_msgs__msg__AgentBehavior__are_equal(
      &(lhs->behavior), &(rhs->behavior)))
  {
    return false;
  }
  // goals
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->goals), &(rhs->goals)))
  {
    return false;
  }
  // cyclic_goals
  if (lhs->cyclic_goals != rhs->cyclic_goals) {
    return false;
  }
  // goal_radius
  if (lhs->goal_radius != rhs->goal_radius) {
    return false;
  }
  // closest_obs
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->closest_obs), &(rhs->closest_obs)))
  {
    return false;
  }
  return true;
}

bool
hunav_msgs__msg__Agent__copy(
  const hunav_msgs__msg__Agent * input,
  hunav_msgs__msg__Agent * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // skin
  output->skin = input->skin;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // group_id
  output->group_id = input->group_id;
  // position
  if (!geometry_msgs__msg__Pose__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // desired_velocity
  output->desired_velocity = input->desired_velocity;
  // radius
  output->radius = input->radius;
  // linear_vel
  output->linear_vel = input->linear_vel;
  // angular_vel
  output->angular_vel = input->angular_vel;
  // behavior
  if (!hunav_msgs__msg__AgentBehavior__copy(
      &(input->behavior), &(output->behavior)))
  {
    return false;
  }
  // goals
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->goals), &(output->goals)))
  {
    return false;
  }
  // cyclic_goals
  output->cyclic_goals = input->cyclic_goals;
  // goal_radius
  output->goal_radius = input->goal_radius;
  // closest_obs
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->closest_obs), &(output->closest_obs)))
  {
    return false;
  }
  return true;
}

hunav_msgs__msg__Agent *
hunav_msgs__msg__Agent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agent * msg = (hunav_msgs__msg__Agent *)allocator.allocate(sizeof(hunav_msgs__msg__Agent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__msg__Agent));
  bool success = hunav_msgs__msg__Agent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__msg__Agent__destroy(hunav_msgs__msg__Agent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__msg__Agent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__msg__Agent__Sequence__init(hunav_msgs__msg__Agent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agent * data = NULL;

  if (size) {
    data = (hunav_msgs__msg__Agent *)allocator.zero_allocate(size, sizeof(hunav_msgs__msg__Agent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__msg__Agent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__msg__Agent__fini(&data[i - 1]);
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
hunav_msgs__msg__Agent__Sequence__fini(hunav_msgs__msg__Agent__Sequence * array)
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
      hunav_msgs__msg__Agent__fini(&array->data[i]);
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

hunav_msgs__msg__Agent__Sequence *
hunav_msgs__msg__Agent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__msg__Agent__Sequence * array = (hunav_msgs__msg__Agent__Sequence *)allocator.allocate(sizeof(hunav_msgs__msg__Agent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__msg__Agent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__msg__Agent__Sequence__destroy(hunav_msgs__msg__Agent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__msg__Agent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__msg__Agent__Sequence__are_equal(const hunav_msgs__msg__Agent__Sequence * lhs, const hunav_msgs__msg__Agent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__msg__Agent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__msg__Agent__Sequence__copy(
  const hunav_msgs__msg__Agent__Sequence * input,
  hunav_msgs__msg__Agent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__msg__Agent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__msg__Agent * data =
      (hunav_msgs__msg__Agent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__msg__Agent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__msg__Agent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__msg__Agent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
