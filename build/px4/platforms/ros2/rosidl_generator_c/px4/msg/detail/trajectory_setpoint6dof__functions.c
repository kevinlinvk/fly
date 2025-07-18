// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4:msg/TrajectorySetpoint6dof.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/trajectory_setpoint6dof__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4__msg__TrajectorySetpoint6dof__init(px4__msg__TrajectorySetpoint6dof * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // position
  // velocity
  // acceleration
  // jerk
  // quaternion
  // angular_velocity
  return true;
}

void
px4__msg__TrajectorySetpoint6dof__fini(px4__msg__TrajectorySetpoint6dof * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // position
  // velocity
  // acceleration
  // jerk
  // quaternion
  // angular_velocity
}

bool
px4__msg__TrajectorySetpoint6dof__are_equal(const px4__msg__TrajectorySetpoint6dof * lhs, const px4__msg__TrajectorySetpoint6dof * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acceleration[i] != rhs->acceleration[i]) {
      return false;
    }
  }
  // jerk
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->jerk[i] != rhs->jerk[i]) {
      return false;
    }
  }
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quaternion[i] != rhs->quaternion[i]) {
      return false;
    }
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_velocity[i] != rhs->angular_velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
px4__msg__TrajectorySetpoint6dof__copy(
  const px4__msg__TrajectorySetpoint6dof * input,
  px4__msg__TrajectorySetpoint6dof * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    output->acceleration[i] = input->acceleration[i];
  }
  // jerk
  for (size_t i = 0; i < 3; ++i) {
    output->jerk[i] = input->jerk[i];
  }
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    output->quaternion[i] = input->quaternion[i];
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->angular_velocity[i] = input->angular_velocity[i];
  }
  return true;
}

px4__msg__TrajectorySetpoint6dof *
px4__msg__TrajectorySetpoint6dof__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__TrajectorySetpoint6dof * msg = (px4__msg__TrajectorySetpoint6dof *)allocator.allocate(sizeof(px4__msg__TrajectorySetpoint6dof), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4__msg__TrajectorySetpoint6dof));
  bool success = px4__msg__TrajectorySetpoint6dof__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4__msg__TrajectorySetpoint6dof__destroy(px4__msg__TrajectorySetpoint6dof * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4__msg__TrajectorySetpoint6dof__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4__msg__TrajectorySetpoint6dof__Sequence__init(px4__msg__TrajectorySetpoint6dof__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__TrajectorySetpoint6dof * data = NULL;

  if (size) {
    data = (px4__msg__TrajectorySetpoint6dof *)allocator.zero_allocate(size, sizeof(px4__msg__TrajectorySetpoint6dof), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4__msg__TrajectorySetpoint6dof__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4__msg__TrajectorySetpoint6dof__fini(&data[i - 1]);
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
px4__msg__TrajectorySetpoint6dof__Sequence__fini(px4__msg__TrajectorySetpoint6dof__Sequence * array)
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
      px4__msg__TrajectorySetpoint6dof__fini(&array->data[i]);
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

px4__msg__TrajectorySetpoint6dof__Sequence *
px4__msg__TrajectorySetpoint6dof__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__TrajectorySetpoint6dof__Sequence * array = (px4__msg__TrajectorySetpoint6dof__Sequence *)allocator.allocate(sizeof(px4__msg__TrajectorySetpoint6dof__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4__msg__TrajectorySetpoint6dof__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4__msg__TrajectorySetpoint6dof__Sequence__destroy(px4__msg__TrajectorySetpoint6dof__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4__msg__TrajectorySetpoint6dof__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4__msg__TrajectorySetpoint6dof__Sequence__are_equal(const px4__msg__TrajectorySetpoint6dof__Sequence * lhs, const px4__msg__TrajectorySetpoint6dof__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4__msg__TrajectorySetpoint6dof__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4__msg__TrajectorySetpoint6dof__Sequence__copy(
  const px4__msg__TrajectorySetpoint6dof__Sequence * input,
  px4__msg__TrajectorySetpoint6dof__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4__msg__TrajectorySetpoint6dof);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4__msg__TrajectorySetpoint6dof * data =
      (px4__msg__TrajectorySetpoint6dof *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4__msg__TrajectorySetpoint6dof__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4__msg__TrajectorySetpoint6dof__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4__msg__TrajectorySetpoint6dof__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
