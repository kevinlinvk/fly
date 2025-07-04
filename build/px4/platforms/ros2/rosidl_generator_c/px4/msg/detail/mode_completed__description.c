// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ModeCompleted.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/mode_completed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ModeCompleted__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x5c, 0xb7, 0xf7, 0x2f, 0xa0, 0xe9, 0xb3,
      0x1d, 0x3a, 0xd9, 0x3e, 0x2f, 0x3f, 0x82, 0x89,
      0x81, 0x6c, 0x64, 0xff, 0x8b, 0xd8, 0x97, 0x53,
      0x7f, 0x4d, 0x93, 0x02, 0x7a, 0x0f, 0x74, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ModeCompleted__TYPE_NAME[] = "px4/msg/ModeCompleted";

// Define type names, field names, and default values
static char px4__msg__ModeCompleted__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ModeCompleted__FIELD_NAME__result[] = "result";
static char px4__msg__ModeCompleted__FIELD_NAME__nav_state[] = "nav_state";

static rosidl_runtime_c__type_description__Field px4__msg__ModeCompleted__FIELDS[] = {
  {
    {px4__msg__ModeCompleted__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ModeCompleted__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ModeCompleted__FIELD_NAME__nav_state, 9, 9},
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
px4__msg__ModeCompleted__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ModeCompleted__TYPE_NAME, 21, 21},
      {px4__msg__ModeCompleted__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Mode completion result, published by an active mode.\n"
  "# The possible values of nav_state are defined in the VehicleStatus msg.\n"
  "# Note that this is not always published (e.g. when a user switches modes or on\n"
  "# failsafe activation)\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp\\t\\t\\t\\t # time since system start (microseconds)\n"
  "\n"
  "\n"
  "uint8 RESULT_SUCCESS = 0\n"
  "# [1-99]: reserved\n"
  "uint8 RESULT_FAILURE_OTHER = 100 # Mode failed (generic error)\n"
  "\n"
  "uint8 result                     # One of RESULT_*\n"
  "\n"
  "uint8 nav_state                  # Source mode (values in VehicleStatus)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ModeCompleted__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ModeCompleted__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 557, 557},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ModeCompleted__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ModeCompleted__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
