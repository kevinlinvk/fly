// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/differential_pressure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DifferentialPressure__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x05, 0x3f, 0xf9, 0xb1, 0x7b, 0x66, 0x5a,
      0xe3, 0x85, 0x42, 0x2c, 0x6a, 0x6e, 0xcf, 0x12,
      0x1a, 0x4c, 0x7b, 0x85, 0xba, 0x7e, 0xd0, 0x41,
      0x48, 0xce, 0x99, 0x17, 0x52, 0x42, 0xa6, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DifferentialPressure__TYPE_NAME[] = "px4/msg/DifferentialPressure";

// Define type names, field names, and default values
static char px4__msg__DifferentialPressure__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DifferentialPressure__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__DifferentialPressure__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__DifferentialPressure__FIELD_NAME__differential_pressure_pa[] = "differential_pressure_pa";
static char px4__msg__DifferentialPressure__FIELD_NAME__temperature[] = "temperature";
static char px4__msg__DifferentialPressure__FIELD_NAME__error_count[] = "error_count";

static rosidl_runtime_c__type_description__Field px4__msg__DifferentialPressure__FIELDS[] = {
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__differential_pressure_pa, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DifferentialPressure__FIELD_NAME__error_count, 11, 11},
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
px4__msg__DifferentialPressure__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DifferentialPressure__TYPE_NAME, 28, 28},
      {px4__msg__DifferentialPressure__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                     # time since system start (microseconds)\n"
  "uint64 timestamp_sample\n"
  "\n"
  "uint32 device_id                     # unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "float32 differential_pressure_pa     # differential pressure reading in Pascals (may be negative)\n"
  "\n"
  "float32 temperature                  # Temperature provided by sensor in degrees Celsius, NAN if unknown\n"
  "\n"
  "uint32 error_count                   # Number of errors detected by driver";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DifferentialPressure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DifferentialPressure__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 497, 497},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DifferentialPressure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DifferentialPressure__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
