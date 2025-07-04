// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/AdcReport.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/adc_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__AdcReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x36, 0xa1, 0x03, 0xe7, 0x48, 0x46, 0x43,
      0x04, 0xb7, 0x53, 0x09, 0x5f, 0xdb, 0x14, 0x3f,
      0x6f, 0x12, 0xc0, 0x9c, 0x09, 0xcb, 0xaf, 0xc7,
      0x5b, 0x5f, 0x55, 0x3c, 0xde, 0xa7, 0x89, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__AdcReport__TYPE_NAME[] = "px4/msg/AdcReport";

// Define type names, field names, and default values
static char px4__msg__AdcReport__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__AdcReport__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__AdcReport__FIELD_NAME__channel_id[] = "channel_id";
static char px4__msg__AdcReport__FIELD_NAME__raw_data[] = "raw_data";
static char px4__msg__AdcReport__FIELD_NAME__resolution[] = "resolution";
static char px4__msg__AdcReport__FIELD_NAME__v_ref[] = "v_ref";

static rosidl_runtime_c__type_description__Field px4__msg__AdcReport__FIELDS[] = {
  {
    {px4__msg__AdcReport__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AdcReport__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AdcReport__FIELD_NAME__channel_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AdcReport__FIELD_NAME__raw_data, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AdcReport__FIELD_NAME__resolution, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AdcReport__FIELD_NAME__v_ref, 5, 5},
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
px4__msg__AdcReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__AdcReport__TYPE_NAME, 17, 17},
      {px4__msg__AdcReport__FIELDS, 6, 6},
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
  "uint32 device_id\\t\\t# unique device ID for the sensor that does not change between power cycles\n"
  "int16[12] channel_id\\t\\t# ADC channel IDs, negative for non-existent, TODO: should be kept same as array index\n"
  "int32[12] raw_data\\t\\t# ADC channel raw value, accept negative value, valid if channel ID is positive\n"
  "uint32 resolution\\t\\t# ADC channel resolution\n"
  "float32 v_ref\\t\\t\\t# ADC channel voltage reference, use to calculate LSB voltage(lsb=scale/resolution)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__AdcReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__AdcReport__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 506, 506},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__AdcReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__AdcReport__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
