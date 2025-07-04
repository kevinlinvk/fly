// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/airspeed_validated.h"


#ifndef PX4__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
#define PX4__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_

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
  px4__msg__AirspeedValidated__MESSAGE_VERSION = 1ul
};

/// Constant 'DISABLED'.
enum
{
  px4__msg__AirspeedValidated__DISABLED = -1
};

/// Constant 'GROUND_MINUS_WIND'.
enum
{
  px4__msg__AirspeedValidated__GROUND_MINUS_WIND = 0
};

/// Constant 'SENSOR_1'.
enum
{
  px4__msg__AirspeedValidated__SENSOR_1 = 1
};

/// Constant 'SENSOR_2'.
enum
{
  px4__msg__AirspeedValidated__SENSOR_2 = 2
};

/// Constant 'SENSOR_3'.
enum
{
  px4__msg__AirspeedValidated__SENSOR_3 = 3
};

/// Constant 'SYNTHETIC'.
enum
{
  px4__msg__AirspeedValidated__SYNTHETIC = 4
};

/// Struct defined in msg/AirspeedValidated in the package px4.
typedef struct px4__msg__AirspeedValidated
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Indicated airspeed (IAS), set to NAN if invalid
  float indicated_airspeed_m_s;
  /// Calibrated airspeed (CAS), set to NAN if invalid
  float calibrated_airspeed_m_s;
  /// True airspeed (TAS), set to NAN if invalid
  float true_airspeed_m_s;
  /// Source of currently published airspeed values
  int8_t airspeed_source;
  /// debug states
  /// CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid
  float calibrated_ground_minus_wind_m_s;
  /// synthetic airspeed in m/s, set to NAN if invalid
  float calibraded_airspeed_synth_m_s;
  /// filtered indicated airspeed derivative
  float airspeed_derivative_filtered;
  /// filtered fixed-wing throttle
  float throttle_filtered;
  /// filtered pitch
  float pitch_filtered;
} px4__msg__AirspeedValidated;

// Struct for a sequence of px4__msg__AirspeedValidated.
typedef struct px4__msg__AirspeedValidated__Sequence
{
  px4__msg__AirspeedValidated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__AirspeedValidated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
