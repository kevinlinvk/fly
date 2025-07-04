// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverThrottleSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_throttle_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverThrottleSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xcc, 0xd5, 0x13, 0x62, 0x45, 0x6e, 0x0d,
      0x40, 0xde, 0x0e, 0x9a, 0x75, 0x44, 0xc8, 0xf3,
      0xf4, 0x72, 0x9e, 0x2b, 0xe1, 0x11, 0xcf, 0x1b,
      0x08, 0x13, 0x0e, 0x73, 0x2c, 0x2d, 0x34, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverThrottleSetpoint__TYPE_NAME[] = "px4/msg/RoverThrottleSetpoint";

// Define type names, field names, and default values
static char px4__msg__RoverThrottleSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverThrottleSetpoint__FIELD_NAME__throttle_body_x[] = "throttle_body_x";
static char px4__msg__RoverThrottleSetpoint__FIELD_NAME__throttle_body_y[] = "throttle_body_y";

static rosidl_runtime_c__type_description__Field px4__msg__RoverThrottleSetpoint__FIELDS[] = {
  {
    {px4__msg__RoverThrottleSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverThrottleSetpoint__FIELD_NAME__throttle_body_x, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverThrottleSetpoint__FIELD_NAME__throttle_body_y, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__RoverThrottleSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverThrottleSetpoint__TYPE_NAME, 29, 29},
      {px4__msg__RoverThrottleSetpoint__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 timestamp        # time since system start (microseconds)\n"
  "\n"
  "float32 throttle_body_x # throttle setpoint along body X axis [-1, 1] (Positiv = forwards, Negativ = backwards)\n"
  "float32 throttle_body_y # throttle setpoint along body Y axis [-1, 1] (Mecanum only, Positiv = right, Negativ = left)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverThrottleSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverThrottleSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 297, 297},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverThrottleSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverThrottleSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
