// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorHygrometer.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_hygrometer__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorHygrometer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xf2, 0x96, 0xcb, 0x1e, 0x28, 0x54, 0x4f,
      0xcd, 0xa1, 0x33, 0x43, 0x99, 0xc2, 0x97, 0x42,
      0x26, 0xe5, 0xb0, 0x88, 0x33, 0x32, 0x24, 0x5d,
      0xa2, 0xd7, 0x76, 0xf4, 0xb8, 0x6d, 0x00, 0x50,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorHygrometer__TYPE_NAME[] = "px4/msg/SensorHygrometer";

// Define type names, field names, and default values
static char px4__msg__SensorHygrometer__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorHygrometer__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorHygrometer__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorHygrometer__FIELD_NAME__temperature[] = "temperature";
static char px4__msg__SensorHygrometer__FIELD_NAME__humidity[] = "humidity";

static rosidl_runtime_c__type_description__Field px4__msg__SensorHygrometer__FIELDS[] = {
  {
    {px4__msg__SensorHygrometer__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorHygrometer__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorHygrometer__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorHygrometer__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorHygrometer__FIELD_NAME__humidity, 8, 8},
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
px4__msg__SensorHygrometer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorHygrometer__TYPE_NAME, 24, 24},
      {px4__msg__SensorHygrometer__FIELDS, 5, 5},
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
  "float32  temperature      # Temperature provided by sensor (Celsius)\n"
  "\n"
  "float32 humidity          # Humidity provided by sensor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorHygrometer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorHygrometer__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 321, 321},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorHygrometer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorHygrometer__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
