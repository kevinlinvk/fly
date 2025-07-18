// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverRateSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_rate_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverRateSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x2a, 0xc5, 0x3b, 0x0e, 0x18, 0x96, 0xf2,
      0xb9, 0x7d, 0xa1, 0xd4, 0x0d, 0x06, 0xbf, 0x76,
      0x3b, 0x67, 0x5d, 0xf2, 0x49, 0x5d, 0x45, 0xa8,
      0xc1, 0xc2, 0xa3, 0x74, 0xfa, 0x54, 0x67, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverRateSetpoint__TYPE_NAME[] = "px4/msg/RoverRateSetpoint";

// Define type names, field names, and default values
static char px4__msg__RoverRateSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverRateSetpoint__FIELD_NAME__yaw_rate_setpoint[] = "yaw_rate_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__RoverRateSetpoint__FIELDS[] = {
  {
    {px4__msg__RoverRateSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverRateSetpoint__FIELD_NAME__yaw_rate_setpoint, 17, 17},
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
px4__msg__RoverRateSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverRateSetpoint__TYPE_NAME, 25, 25},
      {px4__msg__RoverRateSetpoint__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "float32 yaw_rate_setpoint # [rad/s] Expressed in NED frame";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverRateSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverRateSetpoint__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverRateSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverRateSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
