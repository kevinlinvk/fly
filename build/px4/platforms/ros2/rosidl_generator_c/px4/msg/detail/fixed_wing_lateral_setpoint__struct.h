// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/FixedWingLateralSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/fixed_wing_lateral_setpoint.h"


#ifndef PX4__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__STRUCT_H_
#define PX4__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__STRUCT_H_

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
  px4__msg__FixedWingLateralSetpoint__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/FixedWingLateralSetpoint in the package px4.
/**
  * Fixed Wing Lateral Setpoint message
  * Used by the fw_lateral_longitudinal_control module
  * At least one of course, airspeed_direction, or lateral_acceleration must be finite.
 */
typedef struct px4__msg__FixedWingLateralSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// [@range -pi, pi] Desired direction of travel over ground w.r.t (true) North. NAN if not controlled directly.
  float course;
  /// [@range -pi, pi] Desired horizontal angle of airspeed vector w.r.t. (true) North. Same as vehicle heading if in the absence of sideslip. NAN if not controlled directly, takes precedence over course if finite.
  float airspeed_direction;
  /// [m/s^2] [FRD] Lateral acceleration setpoint. NAN if not controlled directly, used as feedforward if either course setpoint or airspeed_direction is finite.
  float lateral_acceleration;
} px4__msg__FixedWingLateralSetpoint;

// Struct for a sequence of px4__msg__FixedWingLateralSetpoint.
typedef struct px4__msg__FixedWingLateralSetpoint__Sequence
{
  px4__msg__FixedWingLateralSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__FixedWingLateralSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__STRUCT_H_
