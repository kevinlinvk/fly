// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_attitude_setpoint.h"


#ifndef PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4__msg__VehicleAttitudeSetpoint__MESSAGE_VERSION = 1ul
};

/// Struct defined in msg/VehicleAttitudeSetpoint in the package px4.
typedef struct px4__msg__VehicleAttitudeSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// rad/s (commanded by user)
  float yaw_sp_move_rate;
  /// For quaternion-based attitude control
  /// Desired quaternion for quaternion control
  float q_d[4];
  /// For clarification: For multicopters thrust_body[0] and thrust[1] are usually 0 and thrust[2] is the negative throttle demand.
  /// For fixed wings thrust_x is the throttle demand and thrust_y, thrust_z will usually be zero.
  /// Normalized thrust command in body FRD frame [-1,1]
  float thrust_body[3];
} px4__msg__VehicleAttitudeSetpoint;

// Struct for a sequence of px4__msg__VehicleAttitudeSetpoint.
typedef struct px4__msg__VehicleAttitudeSetpoint__Sequence
{
  px4__msg__VehicleAttitudeSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__VehicleAttitudeSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
