// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ParameterSetValueRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/parameter_set_value_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ParameterSetValueRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x8a, 0x59, 0x17, 0x4d, 0xbf, 0xaf, 0x55,
      0x9f, 0x96, 0x39, 0xbd, 0xd4, 0x57, 0xd6, 0x9e,
      0x61, 0xf4, 0xf7, 0xed, 0x22, 0x2b, 0x03, 0x6f,
      0x8e, 0x66, 0xe6, 0x2f, 0xac, 0xf2, 0x6d, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ParameterSetValueRequest__TYPE_NAME[] = "px4/msg/ParameterSetValueRequest";

// Define type names, field names, and default values
static char px4__msg__ParameterSetValueRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ParameterSetValueRequest__FIELD_NAME__parameter_index[] = "parameter_index";
static char px4__msg__ParameterSetValueRequest__FIELD_NAME__int_value[] = "int_value";
static char px4__msg__ParameterSetValueRequest__FIELD_NAME__float_value[] = "float_value";

static rosidl_runtime_c__type_description__Field px4__msg__ParameterSetValueRequest__FIELDS[] = {
  {
    {px4__msg__ParameterSetValueRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetValueRequest__FIELD_NAME__parameter_index, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetValueRequest__FIELD_NAME__int_value, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetValueRequest__FIELD_NAME__float_value, 11, 11},
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
px4__msg__ParameterSetValueRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ParameterSetValueRequest__TYPE_NAME, 32, 32},
      {px4__msg__ParameterSetValueRequest__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ParameterSetValueRequest : Used by a remote or primary to update the value for a parameter at the other end\n"
  "\n"
  "uint64 timestamp\n"
  "uint16 parameter_index\n"
  "\n"
  "int32 int_value             # Optional value for an integer parameter\n"
  "float32 float_value         # Optional value for a float parameter\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 32\n"
  "\n"
  "# TOPICS parameter_set_value_request parameter_remote_set_value_request parameter_primary_set_value_request";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ParameterSetValueRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ParameterSetValueRequest__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 427, 427},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ParameterSetValueRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ParameterSetValueRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
