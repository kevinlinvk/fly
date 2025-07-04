// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorAccel.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_accel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorAccel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xa2, 0x00, 0xf5, 0xc0, 0x20, 0x45, 0xc3,
      0xb4, 0xb6, 0x2f, 0xab, 0xef, 0x8e, 0xe9, 0xce,
      0x6f, 0x14, 0x73, 0xb6, 0x34, 0x4c, 0xe0, 0x46,
      0xd1, 0xec, 0x81, 0xda, 0x13, 0x9e, 0x85, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorAccel__TYPE_NAME[] = "px4/msg/SensorAccel";

// Define type names, field names, and default values
static char px4__msg__SensorAccel__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorAccel__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorAccel__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorAccel__FIELD_NAME__x[] = "x";
static char px4__msg__SensorAccel__FIELD_NAME__y[] = "y";
static char px4__msg__SensorAccel__FIELD_NAME__z[] = "z";
static char px4__msg__SensorAccel__FIELD_NAME__temperature[] = "temperature";
static char px4__msg__SensorAccel__FIELD_NAME__error_count[] = "error_count";
static char px4__msg__SensorAccel__FIELD_NAME__clip_counter[] = "clip_counter";
static char px4__msg__SensorAccel__FIELD_NAME__samples[] = "samples";

static rosidl_runtime_c__type_description__Field px4__msg__SensorAccel__FIELDS[] = {
  {
    {px4__msg__SensorAccel__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__error_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__clip_counter, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccel__FIELD_NAME__samples, 7, 7},
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
px4__msg__SensorAccel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorAccel__TYPE_NAME, 19, 19},
      {px4__msg__SensorAccel__FIELDS, 10, 10},
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
  "float32 x                 # acceleration in the FRD board frame X-axis in m/s^2\n"
  "float32 y                 # acceleration in the FRD board frame Y-axis in m/s^2\n"
  "float32 z                 # acceleration in the FRD board frame Z-axis in m/s^2\n"
  "\n"
  "float32 temperature       # temperature in degrees Celsius\n"
  "\n"
  "uint32 error_count\n"
  "\n"
  "uint8[3] clip_counter     # clip count per axis in the sample period\n"
  "\n"
  "uint8 samples             # number of raw samples that went into this message\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorAccel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorAccel__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 692, 692},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorAccel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorAccel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
