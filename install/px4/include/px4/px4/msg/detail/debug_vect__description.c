// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DebugVect.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/debug_vect__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DebugVect__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x96, 0xa6, 0xe3, 0xdf, 0xfb, 0x71, 0x26,
      0x71, 0x28, 0x68, 0x8d, 0x7f, 0x02, 0xed, 0x6b,
      0x04, 0x23, 0xf0, 0xdd, 0x1c, 0x54, 0x8e, 0xd7,
      0xcf, 0x59, 0x9f, 0x98, 0xfa, 0x99, 0xc7, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DebugVect__TYPE_NAME[] = "px4/msg/DebugVect";

// Define type names, field names, and default values
static char px4__msg__DebugVect__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DebugVect__FIELD_NAME__name[] = "name";
static char px4__msg__DebugVect__FIELD_NAME__x[] = "x";
static char px4__msg__DebugVect__FIELD_NAME__y[] = "y";
static char px4__msg__DebugVect__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field px4__msg__DebugVect__FIELDS[] = {
  {
    {px4__msg__DebugVect__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugVect__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      10,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugVect__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugVect__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DebugVect__FIELD_NAME__z, 1, 1},
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
px4__msg__DebugVect__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DebugVect__TYPE_NAME, 17, 17},
      {px4__msg__DebugVect__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "char[10] name           # max. 10 characters as key / name\n"
  "float32 x               # x value\n"
  "float32 y               # y value\n"
  "float32 z               # z value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DebugVect__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DebugVect__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 219, 219},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DebugVect__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DebugVect__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
