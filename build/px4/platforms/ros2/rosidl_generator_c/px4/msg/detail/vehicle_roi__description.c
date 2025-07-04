// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_roi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleRoi__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x1f, 0x81, 0xab, 0x5b, 0x14, 0x7e, 0x71,
      0x07, 0xe9, 0xd4, 0xcf, 0xbf, 0xa5, 0xcb, 0x11,
      0x87, 0x70, 0x75, 0xe0, 0xfd, 0x1d, 0xb6, 0xc2,
      0x91, 0xb1, 0x64, 0x47, 0xac, 0x12, 0xb8, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleRoi__TYPE_NAME[] = "px4/msg/VehicleRoi";

// Define type names, field names, and default values
static char px4__msg__VehicleRoi__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleRoi__FIELD_NAME__mode[] = "mode";
static char px4__msg__VehicleRoi__FIELD_NAME__lat[] = "lat";
static char px4__msg__VehicleRoi__FIELD_NAME__lon[] = "lon";
static char px4__msg__VehicleRoi__FIELD_NAME__alt[] = "alt";
static char px4__msg__VehicleRoi__FIELD_NAME__roll_offset[] = "roll_offset";
static char px4__msg__VehicleRoi__FIELD_NAME__pitch_offset[] = "pitch_offset";
static char px4__msg__VehicleRoi__FIELD_NAME__yaw_offset[] = "yaw_offset";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleRoi__FIELDS[] = {
  {
    {px4__msg__VehicleRoi__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__roll_offset, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__pitch_offset, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleRoi__FIELD_NAME__yaw_offset, 10, 10},
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
px4__msg__VehicleRoi__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleRoi__TYPE_NAME, 18, 18},
      {px4__msg__VehicleRoi__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle Region Of Interest (ROI)\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 ROI_NONE = 0\\t\\t\\t# No region of interest\n"
  "uint8 ROI_WPNEXT = 1\\t\\t\\t# Point toward next MISSION with optional offset\n"
  "uint8 ROI_WPINDEX = 2\\t\\t\\t# Point toward given MISSION\n"
  "uint8 ROI_LOCATION = 3\\t\\t\\t# Point toward fixed location\n"
  "uint8 ROI_TARGET = 4\\t\\t\\t# Point toward target\n"
  "uint8 ROI_ENUM_END = 5\n"
  "\n"
  "uint8 mode          # ROI mode (see above)\n"
  "\n"
  "float64 lat\\t\\t\\t    # Latitude to point to\n"
  "float64 lon\\t\\t\\t    # Longitude to point to\n"
  "float32 alt\\t\\t\\t    # Altitude to point to\n"
  "\n"
  "# additional angle offsets to next waypoint (only used with ROI_WPNEXT)\n"
  "float32 roll_offset\\t\\t# angle offset in rad\n"
  "float32 pitch_offset\\t\\t# angle offset in rad\n"
  "float32 yaw_offset\\t\\t# angle offset in rad";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleRoi__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleRoi__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 761, 761},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleRoi__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleRoi__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
