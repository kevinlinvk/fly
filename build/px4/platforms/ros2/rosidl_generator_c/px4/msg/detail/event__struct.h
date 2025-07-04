// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/event.h"


#ifndef PX4__MSG__DETAIL__EVENT__STRUCT_H_
#define PX4__MSG__DETAIL__EVENT__STRUCT_H_

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
  px4__msg__Event__MESSAGE_VERSION = 1ul
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4__msg__Event__ORB_QUEUE_LENGTH = 16
};

/// Struct defined in msg/Event in the package px4.
/**
  * Events interface
 */
typedef struct px4__msg__Event
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Event ID
  uint32_t id;
  /// Event sequence number
  uint16_t event_sequence;
  /// (optional) arguments, depend on event id
  uint8_t arguments[25];
  /// Log levels: 4 bits MSB: internal, 4 bits LSB: external
  uint8_t log_levels;
} px4__msg__Event;

// Struct for a sequence of px4__msg__Event.
typedef struct px4__msg__Event__Sequence
{
  px4__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__EVENT__STRUCT_H_
