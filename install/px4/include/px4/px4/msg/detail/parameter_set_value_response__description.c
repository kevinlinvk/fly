// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ParameterSetValueResponse.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/parameter_set_value_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ParameterSetValueResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x61, 0x3f, 0x49, 0xc0, 0x46, 0x72, 0x45,
      0x1a, 0xd9, 0xeb, 0xac, 0x21, 0x32, 0xe2, 0x05,
      0x7b, 0xf3, 0x83, 0xff, 0x3d, 0x15, 0x04, 0x28,
      0x58, 0x69, 0x2f, 0x3c, 0x34, 0xd0, 0xa2, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ParameterSetValueResponse__TYPE_NAME[] = "px4/msg/ParameterSetValueResponse";

// Define type names, field names, and default values
static char px4__msg__ParameterSetValueResponse__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ParameterSetValueResponse__FIELD_NAME__request_timestamp[] = "request_timestamp";
static char px4__msg__ParameterSetValueResponse__FIELD_NAME__parameter_index[] = "parameter_index";

static rosidl_runtime_c__type_description__Field px4__msg__ParameterSetValueResponse__FIELDS[] = {
  {
    {px4__msg__ParameterSetValueResponse__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetValueResponse__FIELD_NAME__request_timestamp, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetValueResponse__FIELD_NAME__parameter_index, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ParameterSetValueResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ParameterSetValueResponse__TYPE_NAME, 33, 33},
      {px4__msg__ParameterSetValueResponse__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ParameterSetValueResponse : Response to a set value request by either primary or secondary\n"
  "\n"
  "uint64 timestamp\n"
  "uint64 request_timestamp\n"
  "uint16 parameter_index\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4\n"
  "\n"
  "# TOPICS parameter_set_value_response parameter_remote_set_value_response parameter_primary_set_value_response";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ParameterSetValueResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ParameterSetValueResponse__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 299, 299},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ParameterSetValueResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ParameterSetValueResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
