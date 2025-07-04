// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RtlTimeEstimate.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rtl_time_estimate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RtlTimeEstimate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xec, 0xc8, 0xf4, 0xcf, 0x83, 0xc1, 0x0a,
      0x66, 0x3d, 0xb8, 0x7e, 0xa3, 0x13, 0xb1, 0xa7,
      0xac, 0x1b, 0xd7, 0x03, 0x0f, 0x08, 0x87, 0xfa,
      0x95, 0xff, 0xd7, 0xf8, 0xdb, 0x96, 0x5f, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RtlTimeEstimate__TYPE_NAME[] = "px4/msg/RtlTimeEstimate";

// Define type names, field names, and default values
static char px4__msg__RtlTimeEstimate__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RtlTimeEstimate__FIELD_NAME__valid[] = "valid";
static char px4__msg__RtlTimeEstimate__FIELD_NAME__time_estimate[] = "time_estimate";
static char px4__msg__RtlTimeEstimate__FIELD_NAME__safe_time_estimate[] = "safe_time_estimate";

static rosidl_runtime_c__type_description__Field px4__msg__RtlTimeEstimate__FIELDS[] = {
  {
    {px4__msg__RtlTimeEstimate__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlTimeEstimate__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlTimeEstimate__FIELD_NAME__time_estimate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RtlTimeEstimate__FIELD_NAME__safe_time_estimate, 18, 18},
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
px4__msg__RtlTimeEstimate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RtlTimeEstimate__TYPE_NAME, 23, 23},
      {px4__msg__RtlTimeEstimate__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "bool valid\\t\\t\\t# Flag indicating whether the time estiamtes are valid\n"
  "float32 time_estimate\\t\\t# [s] Estimated time for RTL\n"
  "float32 safe_time_estimate\\t# [s] Same as time_estimate, but with safety factor and safety margin included (factor*t + margin)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RtlTimeEstimate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RtlTimeEstimate__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 305, 305},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RtlTimeEstimate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RtlTimeEstimate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
