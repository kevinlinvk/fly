// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DebugKeyValue.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/debug_key_value__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DebugKeyValue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x56, 0x57, 0x72, 0x05, 0xf1, 0xcb, 0xdd,
      0x58, 0x6d, 0x6a, 0xe1, 0xe6, 0xf7, 0x1c, 0xe2,
      0x6d, 0xc8, 0xd9, 0x48, 0xf6, 0x63, 0xfb, 0x04,
      0xd7, 0x84, 0x24, 0xcb, 0x8d, 0xbd, 0xe4, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DebugKeyValue__TYPE_NAME[] = "px4/msg/DebugKeyValue";

// Define type names, field names, and default values
static char px4__msg__DebugKeyValue__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DebugKeyValue__FIELD_NAME__key[] = "key";
static char px4__msg__DebugKeyValue__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field px4__msg__DebugKeyValue__FIELDS[] = {
  {
    {px4__msg__DebugKeyValue__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugKeyValue__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      10,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugKeyValue__FIELD_NAME__value, 5, 5},
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
px4__msg__DebugKeyValue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DebugKeyValue__TYPE_NAME, 21, 21},
      {px4__msg__DebugKeyValue__FIELDS, 3, 3},
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
  "char[10] key\\t\\t\\t# max. 10 characters as key / name\n"
  "float32 value\\t\\t\\t# the value to send as debug output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DebugKeyValue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DebugKeyValue__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 161, 161},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DebugKeyValue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DebugKeyValue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
