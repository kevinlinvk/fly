// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorAirflow.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_airflow__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorAirflow__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0xf1, 0x9c, 0xe6, 0x98, 0x69, 0xd6, 0x7d,
      0x6e, 0x8b, 0x7f, 0x0d, 0x4c, 0xf9, 0x26, 0x4a,
      0xc9, 0x32, 0x7d, 0x5c, 0x22, 0x88, 0xd9, 0x28,
      0xc4, 0xe0, 0x96, 0x11, 0xc1, 0x30, 0x7b, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorAirflow__TYPE_NAME[] = "px4/msg/SensorAirflow";

// Define type names, field names, and default values
static char px4__msg__SensorAirflow__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorAirflow__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorAirflow__FIELD_NAME__speed[] = "speed";
static char px4__msg__SensorAirflow__FIELD_NAME__direction[] = "direction";
static char px4__msg__SensorAirflow__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field px4__msg__SensorAirflow__FIELDS[] = {
  {
    {px4__msg__SensorAirflow__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAirflow__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAirflow__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAirflow__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorAirflow__FIELD_NAME__status, 6, 6},
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
px4__msg__SensorAirflow__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorAirflow__TYPE_NAME, 21, 21},
      {px4__msg__SensorAirflow__FIELDS, 5, 5},
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
  "uint32 device_id                # unique device ID for the sensor that does not change between power cycles\n"
  "float32 speed\\t\\t\\t# the speed being reported by the wind / airflow sensor\n"
  "float32 direction\\t\\t# the direction being reported by the wind / airflow sensor\n"
  "uint8 status\\t\\t\\t# Status code from the sensor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorAirflow__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorAirflow__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 363, 363},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorAirflow__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorAirflow__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
