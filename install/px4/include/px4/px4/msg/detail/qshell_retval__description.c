// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/QshellRetval.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/qshell_retval__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__QshellRetval__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x52, 0x60, 0x2a, 0x26, 0x76, 0x69, 0x66,
      0xbd, 0xfe, 0x74, 0xa9, 0xa3, 0x13, 0xfc, 0x49,
      0x92, 0xc5, 0x14, 0x79, 0xa5, 0xaa, 0x5e, 0xc7,
      0xe5, 0xdb, 0x7c, 0x1b, 0x36, 0xac, 0x33, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__QshellRetval__TYPE_NAME[] = "px4/msg/QshellRetval";

// Define type names, field names, and default values
static char px4__msg__QshellRetval__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__QshellRetval__FIELD_NAME__return_value[] = "return_value";
static char px4__msg__QshellRetval__FIELD_NAME__return_sequence[] = "return_sequence";

static rosidl_runtime_c__type_description__Field px4__msg__QshellRetval__FIELDS[] = {
  {
    {px4__msg__QshellRetval__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__QshellRetval__FIELD_NAME__return_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__QshellRetval__FIELD_NAME__return_sequence, 15, 15},
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
px4__msg__QshellRetval__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__QshellRetval__TYPE_NAME, 20, 20},
      {px4__msg__QshellRetval__FIELDS, 3, 3},
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
  "int32 return_value\n"
  "uint32 return_sequence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__QshellRetval__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__QshellRetval__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 101, 101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__QshellRetval__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__QshellRetval__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
