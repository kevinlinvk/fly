// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4:msg/Airspeed.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/airspeed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4__msg__Airspeed__init(px4__msg__Airspeed * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // indicated_airspeed_m_s
  // true_airspeed_m_s
  // confidence
  return true;
}

void
px4__msg__Airspeed__fini(px4__msg__Airspeed * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // indicated_airspeed_m_s
  // true_airspeed_m_s
  // confidence
}

bool
px4__msg__Airspeed__are_equal(const px4__msg__Airspeed * lhs, const px4__msg__Airspeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // indicated_airspeed_m_s
  if (lhs->indicated_airspeed_m_s != rhs->indicated_airspeed_m_s) {
    return false;
  }
  // true_airspeed_m_s
  if (lhs->true_airspeed_m_s != rhs->true_airspeed_m_s) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
px4__msg__Airspeed__copy(
  const px4__msg__Airspeed * input,
  px4__msg__Airspeed * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // indicated_airspeed_m_s
  output->indicated_airspeed_m_s = input->indicated_airspeed_m_s;
  // true_airspeed_m_s
  output->true_airspeed_m_s = input->true_airspeed_m_s;
  // confidence
  output->confidence = input->confidence;
  return true;
}

px4__msg__Airspeed *
px4__msg__Airspeed__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__Airspeed * msg = (px4__msg__Airspeed *)allocator.allocate(sizeof(px4__msg__Airspeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4__msg__Airspeed));
  bool success = px4__msg__Airspeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4__msg__Airspeed__destroy(px4__msg__Airspeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4__msg__Airspeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4__msg__Airspeed__Sequence__init(px4__msg__Airspeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__Airspeed * data = NULL;

  if (size) {
    data = (px4__msg__Airspeed *)allocator.zero_allocate(size, sizeof(px4__msg__Airspeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4__msg__Airspeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4__msg__Airspeed__fini(&data[i - 1]);
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
px4__msg__Airspeed__Sequence__fini(px4__msg__Airspeed__Sequence * array)
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
      px4__msg__Airspeed__fini(&array->data[i]);
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

px4__msg__Airspeed__Sequence *
px4__msg__Airspeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4__msg__Airspeed__Sequence * array = (px4__msg__Airspeed__Sequence *)allocator.allocate(sizeof(px4__msg__Airspeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4__msg__Airspeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4__msg__Airspeed__Sequence__destroy(px4__msg__Airspeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4__msg__Airspeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4__msg__Airspeed__Sequence__are_equal(const px4__msg__Airspeed__Sequence * lhs, const px4__msg__Airspeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4__msg__Airspeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4__msg__Airspeed__Sequence__copy(
  const px4__msg__Airspeed__Sequence * input,
  px4__msg__Airspeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4__msg__Airspeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4__msg__Airspeed * data =
      (px4__msg__Airspeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4__msg__Airspeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4__msg__Airspeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4__msg__Airspeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
