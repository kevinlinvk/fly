// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LateralControlConfiguration.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/lateral_control_configuration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LateralControlConfiguration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x8f, 0xd3, 0x7a, 0xfb, 0x99, 0x9b, 0xa2,
      0x06, 0xdf, 0x0e, 0x45, 0xd9, 0xb3, 0xc8, 0x2d,
      0x88, 0xb3, 0x96, 0x0b, 0x75, 0x89, 0x7e, 0x5e,
      0xc7, 0xf2, 0x70, 0x78, 0x49, 0x5f, 0x02, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LateralControlConfiguration__TYPE_NAME[] = "px4/msg/LateralControlConfiguration";

// Define type names, field names, and default values
static char px4__msg__LateralControlConfiguration__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LateralControlConfiguration__FIELD_NAME__lateral_accel_max[] = "lateral_accel_max";

static rosidl_runtime_c__type_description__Field px4__msg__LateralControlConfiguration__FIELDS[] = {
  {
    {px4__msg__LateralControlConfiguration__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LateralControlConfiguration__FIELD_NAME__lateral_accel_max, 17, 17},
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
px4__msg__LateralControlConfiguration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LateralControlConfiguration__TYPE_NAME, 35, 35},
      {px4__msg__LateralControlConfiguration__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Fixed Wing Lateral Control Configuration message\n"
  "# Used by the fw_lateral_longitudinal_control module to constrain FixedWingLateralSetpoint messages.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp          # time since system start (microseconds)\n"
  "\n"
  "float32 lateral_accel_max # [m/s^2] currently maps to a maximum roll angle, accel_max = tan(roll_max) * GRAVITY";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LateralControlConfiguration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LateralControlConfiguration__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 361, 361},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LateralControlConfiguration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LateralControlConfiguration__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
