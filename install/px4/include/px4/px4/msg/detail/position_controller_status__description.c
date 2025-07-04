// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/position_controller_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PositionControllerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x6d, 0xad, 0x6d, 0x24, 0x72, 0xc4, 0xfb,
      0xda, 0xd0, 0xfe, 0x31, 0x5f, 0x5b, 0x46, 0x3c,
      0x70, 0x94, 0x67, 0x89, 0x17, 0x5e, 0xe7, 0xee,
      0xc2, 0xbb, 0xa5, 0xc0, 0xa4, 0x0b, 0x9d, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PositionControllerStatus__TYPE_NAME[] = "px4/msg/PositionControllerStatus";

// Define type names, field names, and default values
static char px4__msg__PositionControllerStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PositionControllerStatus__FIELD_NAME__nav_roll[] = "nav_roll";
static char px4__msg__PositionControllerStatus__FIELD_NAME__nav_pitch[] = "nav_pitch";
static char px4__msg__PositionControllerStatus__FIELD_NAME__nav_bearing[] = "nav_bearing";
static char px4__msg__PositionControllerStatus__FIELD_NAME__target_bearing[] = "target_bearing";
static char px4__msg__PositionControllerStatus__FIELD_NAME__xtrack_error[] = "xtrack_error";
static char px4__msg__PositionControllerStatus__FIELD_NAME__wp_dist[] = "wp_dist";
static char px4__msg__PositionControllerStatus__FIELD_NAME__acceptance_radius[] = "acceptance_radius";
static char px4__msg__PositionControllerStatus__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field px4__msg__PositionControllerStatus__FIELDS[] = {
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__nav_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__nav_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__nav_bearing, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__target_bearing, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__xtrack_error, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__wp_dist, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__acceptance_radius, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerStatus__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__PositionControllerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PositionControllerStatus__TYPE_NAME, 32, 32},
      {px4__msg__PositionControllerStatus__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32 nav_roll\\t\\t# Roll setpoint [rad]\n"
  "float32 nav_pitch\\t\\t# Pitch setpoint [rad]\n"
  "float32 nav_bearing \\t\\t# Bearing angle[rad]\n"
  "float32 target_bearing\\t\\t# Bearing angle from aircraft to current target [rad]\n"
  "float32 xtrack_error\\t\\t# Signed track error [m]\n"
  "float32 wp_dist\\t\\t\\t# Distance to active (next) waypoint [m]\n"
  "float32 acceptance_radius\\t# Current horizontal acceptance radius [m]\n"
  "uint8 type\\t\\t\\t# Current (applied) position setpoint type (see PositionSetpoint.msg)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PositionControllerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PositionControllerStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 521, 521},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PositionControllerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PositionControllerStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
