// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/camera_capture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__CameraCapture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xa3, 0xe1, 0x82, 0x3b, 0x57, 0x61, 0xfa,
      0xd3, 0xca, 0x7d, 0xc2, 0xe5, 0x5a, 0xd0, 0xb9,
      0x78, 0x85, 0xb1, 0x59, 0xf2, 0x66, 0x4d, 0x03,
      0xd5, 0x59, 0xe5, 0xa7, 0x2b, 0xbd, 0xe2, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__CameraCapture__TYPE_NAME[] = "px4/msg/CameraCapture";

// Define type names, field names, and default values
static char px4__msg__CameraCapture__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__CameraCapture__FIELD_NAME__timestamp_utc[] = "timestamp_utc";
static char px4__msg__CameraCapture__FIELD_NAME__seq[] = "seq";
static char px4__msg__CameraCapture__FIELD_NAME__lat[] = "lat";
static char px4__msg__CameraCapture__FIELD_NAME__lon[] = "lon";
static char px4__msg__CameraCapture__FIELD_NAME__alt[] = "alt";
static char px4__msg__CameraCapture__FIELD_NAME__ground_distance[] = "ground_distance";
static char px4__msg__CameraCapture__FIELD_NAME__q[] = "q";
static char px4__msg__CameraCapture__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field px4__msg__CameraCapture__FIELDS[] = {
  {
    {px4__msg__CameraCapture__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__timestamp_utc, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__ground_distance, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraCapture__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__CameraCapture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__CameraCapture__TYPE_NAME, 21, 21},
      {px4__msg__CameraCapture__FIELDS, 9, 9},
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
  "uint64 timestamp_utc\\t\\t# Capture time in UTC / GPS time\n"
  "uint32 seq\\t\\t\\t\\t\\t# Image sequence number\n"
  "float64 lat\\t\\t\\t\\t\\t# Latitude in degrees (WGS84)\n"
  "float64 lon\\t\\t\\t\\t\\t# Longitude in degrees (WGS84)\n"
  "float32 alt\\t\\t\\t\\t\\t# Altitude (AMSL)\n"
  "float32 ground_distance\\t\\t\\t# Altitude above ground (meters)\n"
  "float32[4] q\\t\\t\\t\\t\\t# Attitude of the camera relative to NED earth-fixed frame when using a gimbal, otherwise vehicle attitude\n"
  "int8 result\\t\\t\\t\\t\\t# 1 for success, 0 for failure, -1 if camera does not provide feedback";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__CameraCapture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__CameraCapture__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 550, 550},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__CameraCapture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__CameraCapture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
