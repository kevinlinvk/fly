// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_steering_setpoint.h"


#ifndef PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverSteeringSetpoint in the package px4.
typedef struct px4__msg__RoverSteeringSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// [-1, 1] Positiv = Turn right, Negativ: Turn left (Ackermann: Steering angle, Differential/Mecanum: Speed difference between the left and right wheels)
  float normalized_steering_setpoint;
} px4__msg__RoverSteeringSetpoint;

// Struct for a sequence of px4__msg__RoverSteeringSetpoint.
typedef struct px4__msg__RoverSteeringSetpoint__Sequence
{
  px4__msg__RoverSteeringSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__RoverSteeringSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__STRUCT_H_
