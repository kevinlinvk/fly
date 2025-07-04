// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/pure_pursuit_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PurePursuitStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x97, 0xfd, 0xf3, 0x14, 0xeb, 0xb4, 0xb8,
      0x39, 0x61, 0xa4, 0xf2, 0x04, 0x6b, 0x02, 0x6d,
      0xf0, 0x69, 0x6a, 0x4b, 0xd1, 0xe1, 0x24, 0x94,
      0x47, 0xa1, 0xb2, 0xd4, 0xa4, 0xf4, 0x2b, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PurePursuitStatus__TYPE_NAME[] = "px4/msg/PurePursuitStatus";

// Define type names, field names, and default values
static char px4__msg__PurePursuitStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PurePursuitStatus__FIELD_NAME__lookahead_distance[] = "lookahead_distance";
static char px4__msg__PurePursuitStatus__FIELD_NAME__target_bearing[] = "target_bearing";
static char px4__msg__PurePursuitStatus__FIELD_NAME__crosstrack_error[] = "crosstrack_error";
static char px4__msg__PurePursuitStatus__FIELD_NAME__distance_to_waypoint[] = "distance_to_waypoint";
static char px4__msg__PurePursuitStatus__FIELD_NAME__bearing_to_waypoint[] = "bearing_to_waypoint";

static rosidl_runtime_c__type_description__Field px4__msg__PurePursuitStatus__FIELDS[] = {
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__lookahead_distance, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__target_bearing, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__crosstrack_error, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__distance_to_waypoint, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PurePursuitStatus__FIELD_NAME__bearing_to_waypoint, 19, 19},
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
px4__msg__PurePursuitStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PurePursuitStatus__TYPE_NAME, 25, 25},
      {px4__msg__PurePursuitStatus__FIELDS, 6, 6},
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
  "float32 lookahead_distance   # [m] Lookahead distance of pure the pursuit controller\n"
  "float32 target_bearing       # [rad] Target bearing calculated by the pure pursuit controller\n"
  "float32 crosstrack_error     # [m] Shortest distance from the vehicle to the path (Positiv: Vehicle is on the right hand side with respect to the oriented path vector, Negativ: Left of the path)\n"
  "float32 distance_to_waypoint # [m] Distance from the vehicle to the current waypoint\n"
  "float32 bearing_to_waypoint  # [rad] Bearing towards current waypoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PurePursuitStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PurePursuitStatus__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 588, 588},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PurePursuitStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PurePursuitStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
