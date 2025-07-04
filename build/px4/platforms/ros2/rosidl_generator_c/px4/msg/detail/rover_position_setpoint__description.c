// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverPositionSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_position_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverPositionSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xb6, 0x2a, 0x7c, 0x8a, 0xc7, 0xd1, 0x77,
      0x93, 0x36, 0x9c, 0x82, 0xb1, 0x7b, 0x5b, 0x85,
      0x74, 0xec, 0x6d, 0x46, 0xc9, 0xdb, 0xcf, 0xa2,
      0xf7, 0x70, 0x2a, 0xd0, 0x1d, 0xa1, 0x8b, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverPositionSetpoint__TYPE_NAME[] = "px4/msg/RoverPositionSetpoint";

// Define type names, field names, and default values
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__position_ned[] = "position_ned";
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__start_ned[] = "start_ned";
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__cruising_speed[] = "cruising_speed";
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__arrival_speed[] = "arrival_speed";
static char px4__msg__RoverPositionSetpoint__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field px4__msg__RoverPositionSetpoint__FIELDS[] = {
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__position_ned, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__start_ned, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__cruising_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__arrival_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverPositionSetpoint__FIELD_NAME__yaw, 3, 3},
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
px4__msg__RoverPositionSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverPositionSetpoint__TYPE_NAME, 29, 29},
      {px4__msg__RoverPositionSetpoint__FIELDS, 6, 6},
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
  "float32[2] position_ned # 2-dimensional position setpoint in NED frame [m]\n"
  "float32[2] start_ned\\t# (Optional) 2-dimensional start position in NED frame used to define the line that the rover will track to position_ned [m] (Defaults to vehicle position)\n"
  "float32 cruising_speed  # (Optional) Specify rover speed [m/s] (Defaults to maximum speed)\n"
  "float32 arrival_speed   # (Optional) Specify arrival speed [m/s] (Defaults to zero)\n"
  "\n"
  "float32 yaw             # [rad] [-pi,pi] from North. Optional, NAN if not set. Mecanum only. (Defaults to vehicle yaw)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverPositionSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverPositionSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 606, 606},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverPositionSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverPositionSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
