// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverRateStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_rate_status.h"


#ifndef PX4__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverRateStatus in the package px4.
typedef struct px4__msg__RoverRateStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Measured yaw rate
  float measured_yaw_rate;
  /// Yaw rate setpoint that is being tracked (Applied slew rates)
  float adjusted_yaw_rate_setpoint;
  /// Integral of the PID for the closed loop yaw rate controller
  float pid_yaw_rate_integral;
} px4__msg__RoverRateStatus;

// Struct for a sequence of px4__msg__RoverRateStatus.
typedef struct px4__msg__RoverRateStatus__Sequence
{
  px4__msg__RoverRateStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverRateStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_
