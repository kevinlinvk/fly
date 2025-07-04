// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/HomePosition.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/home_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__HomePosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xf4, 0x79, 0x49, 0x54, 0x05, 0x61, 0x82,
      0x6a, 0xb3, 0xd9, 0x6a, 0x5c, 0xa0, 0xc5, 0x16,
      0x0e, 0x1d, 0xc2, 0x0b, 0x4c, 0xe0, 0xae, 0xfc,
      0x82, 0x1b, 0xc8, 0x34, 0x50, 0x7d, 0x94, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__HomePosition__TYPE_NAME[] = "px4/msg/HomePosition";

// Define type names, field names, and default values
static char px4__msg__HomePosition__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__HomePosition__FIELD_NAME__lat[] = "lat";
static char px4__msg__HomePosition__FIELD_NAME__lon[] = "lon";
static char px4__msg__HomePosition__FIELD_NAME__alt[] = "alt";
static char px4__msg__HomePosition__FIELD_NAME__x[] = "x";
static char px4__msg__HomePosition__FIELD_NAME__y[] = "y";
static char px4__msg__HomePosition__FIELD_NAME__z[] = "z";
static char px4__msg__HomePosition__FIELD_NAME__yaw[] = "yaw";
static char px4__msg__HomePosition__FIELD_NAME__valid_alt[] = "valid_alt";
static char px4__msg__HomePosition__FIELD_NAME__valid_hpos[] = "valid_hpos";
static char px4__msg__HomePosition__FIELD_NAME__valid_lpos[] = "valid_lpos";
static char px4__msg__HomePosition__FIELD_NAME__manual_home[] = "manual_home";
static char px4__msg__HomePosition__FIELD_NAME__update_count[] = "update_count";

static rosidl_runtime_c__type_description__Field px4__msg__HomePosition__FIELDS[] = {
  {
    {px4__msg__HomePosition__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__valid_alt, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__valid_hpos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__valid_lpos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__manual_home, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HomePosition__FIELD_NAME__update_count, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__HomePosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__HomePosition__TYPE_NAME, 20, 20},
      {px4__msg__HomePosition__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GPS home position in WGS84 coordinates.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float64 lat\\t\\t\\t\\t# Latitude in degrees\n"
  "float64 lon\\t\\t\\t\\t# Longitude in degrees\n"
  "float32 alt\\t\\t\\t\\t# Altitude in meters (AMSL)\n"
  "\n"
  "float32 x\\t\\t\\t\\t# X coordinate in meters\n"
  "float32 y\\t\\t\\t\\t# Y coordinate in meters\n"
  "float32 z\\t\\t\\t\\t# Z coordinate in meters\n"
  "\n"
  "float32 yaw\\t\\t\\t\\t# Yaw angle in radians\n"
  "\n"
  "bool valid_alt\\t\\t# true when the altitude has been set\n"
  "bool valid_hpos\\t\\t# true when the latitude and longitude have been set\n"
  "bool valid_lpos\\t\\t# true when the local position (xyz) has been set\n"
  "\n"
  "bool manual_home\\t# true when home position was set manually\n"
  "\n"
  "uint32 update_count \\t# update counter of the home position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__HomePosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__HomePosition__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 717, 717},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__HomePosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__HomePosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
