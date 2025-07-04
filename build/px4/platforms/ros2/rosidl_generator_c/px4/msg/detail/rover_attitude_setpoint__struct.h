// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverAttitudeSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_attitude_setpoint.h"


#ifndef PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverAttitudeSetpoint in the package px4.
typedef struct px4__msg__RoverAttitudeSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Expressed in NED frame
  float yaw_setpoint;
} px4__msg__RoverAttitudeSetpoint;

// Struct for a sequence of px4__msg__RoverAttitudeSetpoint.
typedef struct px4__msg__RoverAttitudeSetpoint__Sequence
{
  px4__msg__RoverAttitudeSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverAttitudeSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_
