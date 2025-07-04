// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/battery_info.h"


#ifndef PX4__MSG__DETAIL__BATTERY_INFO__STRUCT_H_
#define PX4__MSG__DETAIL__BATTERY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BatteryInfo in the package px4.
/**
  * Battery information
  *
  * Static or near-invariant battery information.
  * Should be streamed at low rate.
 */
typedef struct px4__msg__BatteryInfo
{
  /// Time since system start
  uint64_t timestamp;
  /// Must match the id in the battery_status message for the same battery
  uint8_t id;
  /// Serial number of the battery pack in ASCII characters, 0 terminated
  uint8_t serial_number[32];
} px4__msg__BatteryInfo;

// Struct for a sequence of px4__msg__BatteryInfo.
typedef struct px4__msg__BatteryInfo__Sequence
{
  px4__msg__BatteryInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__BatteryInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__BATTERY_INFO__STRUCT_H_
