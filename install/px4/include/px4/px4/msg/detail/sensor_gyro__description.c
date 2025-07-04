// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorGyro.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_gyro__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorGyro__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0xc2, 0x39, 0x7c, 0x5a, 0xb0, 0x76, 0xee,
      0xba, 0x30, 0x49, 0x7b, 0xcf, 0xad, 0x8a, 0xbc,
      0x85, 0xf0, 0x68, 0xe1, 0xf1, 0x7e, 0xa1, 0x12,
      0xc1, 0x67, 0xc7, 0xb1, 0x86, 0xa4, 0x4d, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorGyro__TYPE_NAME[] = "px4/msg/SensorGyro";

// Define type names, field names, and default values
static char px4__msg__SensorGyro__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorGyro__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorGyro__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorGyro__FIELD_NAME__x[] = "x";
static char px4__msg__SensorGyro__FIELD_NAME__y[] = "y";
static char px4__msg__SensorGyro__FIELD_NAME__z[] = "z";
static char px4__msg__SensorGyro__FIELD_NAME__temperature[] = "temperature";
static char px4__msg__SensorGyro__FIELD_NAME__error_count[] = "error_count";
static char px4__msg__SensorGyro__FIELD_NAME__clip_counter[] = "clip_counter";
static char px4__msg__SensorGyro__FIELD_NAME__samples[] = "samples";

static rosidl_runtime_c__type_description__Field px4__msg__SensorGyro__FIELDS[] = {
  {
    {px4__msg__SensorGyro__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__error_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__clip_counter, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyro__FIELD_NAME__samples, 7, 7},
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
px4__msg__SensorGyro__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorGyro__TYPE_NAME, 18, 18},
      {px4__msg__SensorGyro__FIELDS, 10, 10},
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
  "float32 x                 # angular velocity in the FRD board frame X-axis in rad/s\n"
  "float32 y                 # angular velocity in the FRD board frame Y-axis in rad/s\n"
  "float32 z                 # angular velocity in the FRD board frame Z-axis in rad/s\n"
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
px4__msg__SensorGyro__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorGyro__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 704, 704},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorGyro__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorGyro__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
