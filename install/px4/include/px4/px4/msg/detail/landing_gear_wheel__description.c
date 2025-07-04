// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LandingGearWheel.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/landing_gear_wheel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LandingGearWheel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x8d, 0x16, 0x93, 0x8a, 0x22, 0x73, 0xb5,
      0x6a, 0x1a, 0xc3, 0xd5, 0xab, 0x2a, 0x5d, 0x1c,
      0x3d, 0x23, 0xc9, 0x5c, 0x4a, 0x10, 0x15, 0x85,
      0x36, 0x26, 0x18, 0x07, 0xad, 0x3e, 0x78, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LandingGearWheel__TYPE_NAME[] = "px4/msg/LandingGearWheel";

// Define type names, field names, and default values
static char px4__msg__LandingGearWheel__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LandingGearWheel__FIELD_NAME__normalized_wheel_setpoint[] = "normalized_wheel_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__LandingGearWheel__FIELDS[] = {
  {
    {px4__msg__LandingGearWheel__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingGearWheel__FIELD_NAME__normalized_wheel_setpoint, 25, 25},
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
px4__msg__LandingGearWheel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LandingGearWheel__TYPE_NAME, 24, 24},
      {px4__msg__LandingGearWheel__FIELDS, 2, 2},
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
  "float32 normalized_wheel_setpoint\\t# negative is turning left, positive turning right [-1, 1]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LandingGearWheel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LandingGearWheel__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 152, 152},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LandingGearWheel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LandingGearWheel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
