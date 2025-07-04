// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/power_monitor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PowerMonitor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x9c, 0xeb, 0x3b, 0x22, 0x0a, 0x2e, 0x44,
      0x50, 0x93, 0x56, 0x75, 0x27, 0xf2, 0xef, 0x96,
      0xeb, 0x2a, 0x46, 0x34, 0x8a, 0xed, 0xbf, 0x94,
      0xd3, 0xa0, 0x21, 0x14, 0x11, 0x67, 0x48, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PowerMonitor__TYPE_NAME[] = "px4/msg/PowerMonitor";

// Define type names, field names, and default values
static char px4__msg__PowerMonitor__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PowerMonitor__FIELD_NAME__voltage_v[] = "voltage_v";
static char px4__msg__PowerMonitor__FIELD_NAME__current_a[] = "current_a";
static char px4__msg__PowerMonitor__FIELD_NAME__power_w[] = "power_w";
static char px4__msg__PowerMonitor__FIELD_NAME__rconf[] = "rconf";
static char px4__msg__PowerMonitor__FIELD_NAME__rsv[] = "rsv";
static char px4__msg__PowerMonitor__FIELD_NAME__rbv[] = "rbv";
static char px4__msg__PowerMonitor__FIELD_NAME__rp[] = "rp";
static char px4__msg__PowerMonitor__FIELD_NAME__rc[] = "rc";
static char px4__msg__PowerMonitor__FIELD_NAME__rcal[] = "rcal";
static char px4__msg__PowerMonitor__FIELD_NAME__me[] = "me";
static char px4__msg__PowerMonitor__FIELD_NAME__al[] = "al";

static rosidl_runtime_c__type_description__Field px4__msg__PowerMonitor__FIELDS[] = {
  {
    {px4__msg__PowerMonitor__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__voltage_v, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__current_a, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__power_w, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rconf, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rsv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rbv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rc, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__rcal, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__me, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerMonitor__FIELD_NAME__al, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__PowerMonitor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PowerMonitor__TYPE_NAME, 20, 20},
      {px4__msg__PowerMonitor__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# power monitor message\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# Time since system start (microseconds)\n"
  "\n"
  "float32 voltage_v\\t\\t\\t# Voltage in volts, 0 if unknown\n"
  "float32 current_a\\t\\t    # Current in amperes, -1 if unknown\n"
  "float32 power_w\\t\\t        # power in watts, -1 if unknown\n"
  "int16 rconf\n"
  "int16 rsv\n"
  "int16 rbv\n"
  "int16 rp\n"
  "int16 rc\n"
  "int16 rcal\n"
  "int16 me\n"
  "int16 al";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PowerMonitor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PowerMonitor__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 334, 334},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PowerMonitor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PowerMonitor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
