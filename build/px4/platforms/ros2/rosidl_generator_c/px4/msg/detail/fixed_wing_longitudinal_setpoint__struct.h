// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/fixed_wing_longitudinal_setpoint.h"


#ifndef PX4__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_

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
  px4__msg__FixedWingLongitudinalSetpoint__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/FixedWingLongitudinalSetpoint in the package px4.
/**
  * Fixed Wing Longitudinal Setpoint message
  * Used by the fw_lateral_longitudinal_control module
  * If pitch_direct and throttle_direct are not both finite, then the controller relies on altitude/height_rate and equivalent_airspeed to control vertical motion.
  * If both altitude and height_rate are NAN, the controller maintains the current altitude.
 */
typedef struct px4__msg__FixedWingLongitudinalSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Altitude setpoint AMSL, not controlled directly if NAN or if height_rate is finite
  float altitude;
  /// [m/s] [ENU] Scalar height rate setpoint. NAN if not controlled directly
  float height_rate;
  /// [@range 0, inf] Scalar equivalent airspeed setpoint. NAN if system default should be used
  float equivalent_airspeed;
  /// [rad] [@range -pi, pi] [FRD] NAN if not controlled, overrides total energy controller
  float pitch_direct;
  /// [@range 0,1] NAN if not controlled, overrides total energy controller
  float throttle_direct;
} px4__msg__FixedWingLongitudinalSetpoint;

// Struct for a sequence of px4__msg__FixedWingLongitudinalSetpoint.
typedef struct px4__msg__FixedWingLongitudinalSetpoint__Sequence
{
  px4__msg__FixedWingLongitudinalSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__FixedWingLongitudinalSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_
