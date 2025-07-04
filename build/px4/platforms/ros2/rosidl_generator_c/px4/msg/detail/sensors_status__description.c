// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensors_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorsStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0x4a, 0x8f, 0xa4, 0x4e, 0xde, 0x46, 0x28,
      0x07, 0x0a, 0x01, 0xc8, 0x6b, 0x04, 0x24, 0xad,
      0x95, 0xef, 0x61, 0x52, 0x8f, 0x8a, 0xfc, 0xdf,
      0x48, 0x67, 0x5f, 0xa4, 0x22, 0x02, 0x6f, 0x1d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorsStatus__TYPE_NAME[] = "px4/msg/SensorsStatus";

// Define type names, field names, and default values
static char px4__msg__SensorsStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorsStatus__FIELD_NAME__device_id_primary[] = "device_id_primary";
static char px4__msg__SensorsStatus__FIELD_NAME__device_ids[] = "device_ids";
static char px4__msg__SensorsStatus__FIELD_NAME__inconsistency[] = "inconsistency";
static char px4__msg__SensorsStatus__FIELD_NAME__healthy[] = "healthy";
static char px4__msg__SensorsStatus__FIELD_NAME__priority[] = "priority";
static char px4__msg__SensorsStatus__FIELD_NAME__enabled[] = "enabled";
static char px4__msg__SensorsStatus__FIELD_NAME__external[] = "external";

static rosidl_runtime_c__type_description__Field px4__msg__SensorsStatus__FIELDS[] = {
  {
    {px4__msg__SensorsStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__device_id_primary, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__device_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__inconsistency, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__healthy, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorsStatus__FIELD_NAME__external, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__SensorsStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorsStatus__TYPE_NAME, 21, 21},
      {px4__msg__SensorsStatus__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# Sensor check metrics. This will be zero for a sensor that's primary or unpopulated.\n"
  "#\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint32 device_id_primary       # current primary device id for reference\n"
  "\n"
  "uint32[4] device_ids\n"
  "float32[4] inconsistency       # magnitude of difference between sensor instance and mean\n"
  "bool[4] healthy                # sensor healthy\n"
  "uint8[4] priority\n"
  "bool[4] enabled\n"
  "bool[4] external\n"
  "\n"
  "# TOPICS sensors_status_baro sensors_status_mag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorsStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorsStatus__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 482, 482},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorsStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorsStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
