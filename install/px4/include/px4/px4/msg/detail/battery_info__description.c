// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/battery_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__BatteryInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xec, 0x58, 0xa9, 0x35, 0xae, 0xde, 0xd2,
      0xb1, 0x12, 0x39, 0xc9, 0x94, 0xdb, 0x93, 0xe9,
      0xbe, 0x33, 0x6c, 0xc8, 0x3a, 0xc0, 0x89, 0xd5,
      0x50, 0xd1, 0xb9, 0x92, 0x70, 0x4b, 0x73, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__BatteryInfo__TYPE_NAME[] = "px4/msg/BatteryInfo";

// Define type names, field names, and default values
static char px4__msg__BatteryInfo__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__BatteryInfo__FIELD_NAME__id[] = "id";
static char px4__msg__BatteryInfo__FIELD_NAME__serial_number[] = "serial_number";

static rosidl_runtime_c__type_description__Field px4__msg__BatteryInfo__FIELDS[] = {
  {
    {px4__msg__BatteryInfo__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__BatteryInfo__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__BatteryInfo__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__BatteryInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__BatteryInfo__TYPE_NAME, 19, 19},
      {px4__msg__BatteryInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Battery information\n"
  "#\n"
  "# Static or near-invariant battery information.\n"
  "# Should be streamed at low rate.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint8 id # Must match the id in the battery_status message for the same battery\n"
  "char[32] serial_number # [@invalid 0 All bytes] Serial number of the battery pack in ASCII characters, 0 terminated";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__BatteryInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__BatteryInfo__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 352, 352},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__BatteryInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__BatteryInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
