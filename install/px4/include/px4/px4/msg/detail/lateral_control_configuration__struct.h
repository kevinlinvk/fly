// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/LateralControlConfiguration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/lateral_control_configuration.h"


#ifndef PX4__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_H_
#define PX4__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_H_

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
  px4__msg__LateralControlConfiguration__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/LateralControlConfiguration in the package px4.
/**
  * Fixed Wing Lateral Control Configuration message
  * Used by the fw_lateral_longitudinal_control module to constrain FixedWingLateralSetpoint messages.
 */
typedef struct px4__msg__LateralControlConfiguration
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// currently maps to a maximum roll angle, accel_max = tan(roll_max) * GRAVITY
  float lateral_accel_max;
} px4__msg__LateralControlConfiguration;

// Struct for a sequence of px4__msg__LateralControlConfiguration.
typedef struct px4__msg__LateralControlConfiguration__Sequence
{
  px4__msg__LateralControlConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__LateralControlConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_H_
