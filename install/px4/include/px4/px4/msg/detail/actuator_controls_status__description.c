// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ActuatorControlsStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/actuator_controls_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ActuatorControlsStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xa8, 0xd6, 0x72, 0xf3, 0x31, 0x7c, 0xd6,
      0x1a, 0x6a, 0x83, 0x87, 0xd9, 0x7e, 0x3a, 0x00,
      0x1f, 0x36, 0x09, 0xdd, 0x8d, 0x2c, 0x23, 0xa1,
      0xbb, 0xd8, 0x0d, 0xb0, 0xb2, 0xc8, 0xf8, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ActuatorControlsStatus__TYPE_NAME[] = "px4/msg/ActuatorControlsStatus";

// Define type names, field names, and default values
static char px4__msg__ActuatorControlsStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ActuatorControlsStatus__FIELD_NAME__control_power[] = "control_power";

static rosidl_runtime_c__type_description__Field px4__msg__ActuatorControlsStatus__FIELDS[] = {
  {
    {px4__msg__ActuatorControlsStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorControlsStatus__FIELD_NAME__control_power, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ActuatorControlsStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ActuatorControlsStatus__TYPE_NAME, 30, 30},
      {px4__msg__ActuatorControlsStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32[3] control_power\n"
  "\n"
  "# TOPICS actuator_controls_status_0 actuator_controls_status_1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ActuatorControlsStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ActuatorControlsStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ActuatorControlsStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ActuatorControlsStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
