// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverRateSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_rate_setpoint.h"


#ifndef PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverRateSetpoint in the package px4.
typedef struct px4__msg__RoverRateSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Expressed in NED frame
  float yaw_rate_setpoint;
} px4__msg__RoverRateSetpoint;

// Struct for a sequence of px4__msg__RoverRateSetpoint.
typedef struct px4__msg__RoverRateSetpoint__Sequence
{
  px4__msg__RoverRateSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverRateSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_
