// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/Rpm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rpm.h"


#ifndef PX4__MSG__DETAIL__RPM__STRUCT_H_
#define PX4__MSG__DETAIL__RPM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Rpm in the package px4.
typedef struct px4__msg__Rpm
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// rpm values of 0.0 mean within a timeout there is no movement measured
  /// filtered revolutions per minute
  float rpm_estimate;
  float rpm_raw;
} px4__msg__Rpm;

// Struct for a sequence of px4__msg__Rpm.
typedef struct px4__msg__Rpm__Sequence
{
  px4__msg__Rpm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__Rpm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__RPM__STRUCT_H_
