// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ActuatorServosTrim.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/actuator_servos_trim__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ActuatorServosTrim__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x15, 0x7c, 0x84, 0xa5, 0xa4, 0x93, 0x09,
      0x32, 0xb4, 0x2a, 0x58, 0x2b, 0xb7, 0x94, 0x5e,
      0x9b, 0x60, 0x90, 0x02, 0x68, 0x30, 0x88, 0xbd,
      0x42, 0x8b, 0x4c, 0xb6, 0x11, 0xec, 0xdf, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ActuatorServosTrim__TYPE_NAME[] = "px4/msg/ActuatorServosTrim";

// Define type names, field names, and default values
static char px4__msg__ActuatorServosTrim__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ActuatorServosTrim__FIELD_NAME__trim[] = "trim";

static rosidl_runtime_c__type_description__Field px4__msg__ActuatorServosTrim__FIELDS[] = {
  {
    {px4__msg__ActuatorServosTrim__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorServosTrim__FIELD_NAME__trim, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ActuatorServosTrim__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ActuatorServosTrim__TYPE_NAME, 26, 26},
      {px4__msg__ActuatorServosTrim__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Servo trims, added as offset to servo outputs\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 NUM_CONTROLS = 8\n"
  "float32[8] trim    # range: [-1, 1]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ActuatorServosTrim__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ActuatorServosTrim__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 168, 168},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ActuatorServosTrim__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ActuatorServosTrim__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
