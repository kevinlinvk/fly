// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorAccelFifo.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_accel_fifo__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorAccelFifo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0x7a, 0x80, 0x08, 0x66, 0xd0, 0x72, 0x41,
      0x23, 0xd7, 0xf9, 0x8f, 0xd9, 0x5b, 0x2a, 0x53,
      0x24, 0xb2, 0x44, 0xd9, 0xd9, 0x9b, 0xa9, 0x03,
      0x7e, 0xc7, 0x8a, 0x7c, 0x77, 0x58, 0x9e, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorAccelFifo__TYPE_NAME[] = "px4/msg/SensorAccelFifo";

// Define type names, field names, and default values
static char px4__msg__SensorAccelFifo__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorAccelFifo__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorAccelFifo__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorAccelFifo__FIELD_NAME__dt[] = "dt";
static char px4__msg__SensorAccelFifo__FIELD_NAME__scale[] = "scale";
static char px4__msg__SensorAccelFifo__FIELD_NAME__samples[] = "samples";
static char px4__msg__SensorAccelFifo__FIELD_NAME__x[] = "x";
static char px4__msg__SensorAccelFifo__FIELD_NAME__y[] = "y";
static char px4__msg__SensorAccelFifo__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field px4__msg__SensorAccelFifo__FIELDS[] = {
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__dt, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__samples, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAccelFifo__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__SensorAccelFifo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorAccelFifo__TYPE_NAME, 23, 23},
      {px4__msg__SensorAccelFifo__FIELDS, 9, 9},
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
  "float32 dt                # delta time between samples (microseconds)\n"
  "float32 scale\n"
  "\n"
  "uint8 samples             # number of valid samples\n"
  "\n"
  "int16[32] x               # acceleration in the FRD board frame X-axis in m/s^2\n"
  "int16[32] y               # acceleration in the FRD board frame Y-axis in m/s^2\n"
  "int16[32] z               # acceleration in the FRD board frame Z-axis in m/s^2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorAccelFifo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorAccelFifo__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 573, 573},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorAccelFifo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorAccelFifo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
