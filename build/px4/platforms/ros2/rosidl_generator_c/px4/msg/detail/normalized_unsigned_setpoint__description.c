// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/NormalizedUnsignedSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/normalized_unsigned_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__NormalizedUnsignedSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xc7, 0x5b, 0xf1, 0xea, 0x72, 0x9c, 0x37,
      0x05, 0x04, 0xf8, 0x2b, 0xed, 0x52, 0xf2, 0x7c,
      0xfd, 0xff, 0xf1, 0x77, 0x2c, 0x9b, 0x23, 0x3e,
      0xdd, 0x47, 0x84, 0x4f, 0x4d, 0xbb, 0x94, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__NormalizedUnsignedSetpoint__TYPE_NAME[] = "px4/msg/NormalizedUnsignedSetpoint";

// Define type names, field names, and default values
static char px4__msg__NormalizedUnsignedSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__NormalizedUnsignedSetpoint__FIELD_NAME__normalized_setpoint[] = "normalized_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__NormalizedUnsignedSetpoint__FIELDS[] = {
  {
    {px4__msg__NormalizedUnsignedSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__NormalizedUnsignedSetpoint__FIELD_NAME__normalized_setpoint, 19, 19},
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
px4__msg__NormalizedUnsignedSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__NormalizedUnsignedSetpoint__TYPE_NAME, 34, 34},
      {px4__msg__NormalizedUnsignedSetpoint__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp        \\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32 normalized_setpoint          \\t# [0, 1]\n"
  "\n"
  "# TOPICS flaps_setpoint spoilers_setpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__NormalizedUnsignedSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__NormalizedUnsignedSetpoint__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 158, 158},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__NormalizedUnsignedSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__NormalizedUnsignedSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
