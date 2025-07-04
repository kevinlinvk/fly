// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorMag.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_mag__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorMag__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0xd6, 0x97, 0xd2, 0x41, 0x04, 0xbe, 0x3f,
      0xa0, 0x96, 0x5c, 0xb3, 0xe2, 0xe7, 0x60, 0x73,
      0x4f, 0x3e, 0x5d, 0xbb, 0x86, 0x77, 0xc2, 0x1e,
      0x7d, 0xc4, 0xfa, 0x18, 0x80, 0x7c, 0x49, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorMag__TYPE_NAME[] = "px4/msg/SensorMag";

// Define type names, field names, and default values
static char px4__msg__SensorMag__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorMag__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorMag__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorMag__FIELD_NAME__x[] = "x";
static char px4__msg__SensorMag__FIELD_NAME__y[] = "y";
static char px4__msg__SensorMag__FIELD_NAME__z[] = "z";
static char px4__msg__SensorMag__FIELD_NAME__temperature[] = "temperature";
static char px4__msg__SensorMag__FIELD_NAME__error_count[] = "error_count";

static rosidl_runtime_c__type_description__Field px4__msg__SensorMag__FIELDS[] = {
  {
    {px4__msg__SensorMag__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorMag__FIELD_NAME__error_count, 11, 11},
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
px4__msg__SensorMag__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorMag__TYPE_NAME, 17, 17},
      {px4__msg__SensorMag__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp          # time since system start (microseconds)\n"
  "uint64 timestamp_sample\n"
  "\n"
  "uint32 device_id          # unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "float32 x                 # magnetic field in the FRD board frame X-axis in Gauss\n"
  "float32 y                 # magnetic field in the FRD board frame Y-axis in Gauss\n"
  "float32 z                 # magnetic field in the FRD board frame Z-axis in Gauss\n"
  "\n"
  "float32 temperature       # temperature in degrees Celsius\n"
  "\n"
  "uint32 error_count\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorMag__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorMag__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 549, 549},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorMag__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorMag__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
