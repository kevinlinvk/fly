// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverAttitudeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_attitude_status.h"


#ifndef PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverAttitudeStatus in the package px4.
typedef struct px4__msg__RoverAttitudeStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Measured yaw rate
  float measured_yaw;
  /// Yaw setpoint that is being tracked (Applied slew rates)
  float adjusted_yaw_setpoint;
} px4__msg__RoverAttitudeStatus;

// Struct for a sequence of px4__msg__RoverAttitudeStatus.
typedef struct px4__msg__RoverAttitudeStatus__Sequence
{
  px4__msg__RoverAttitudeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverAttitudeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__STRUCT_H_
