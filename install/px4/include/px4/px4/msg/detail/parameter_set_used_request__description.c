// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ParameterSetUsedRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/parameter_set_used_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ParameterSetUsedRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xc0, 0x3c, 0xbb, 0x07, 0x27, 0xa0, 0x0f,
      0x30, 0x72, 0xf5, 0x52, 0xe5, 0x24, 0xc9, 0xa2,
      0x3c, 0x87, 0x09, 0x89, 0x75, 0x4b, 0xca, 0xc9,
      0xe5, 0x81, 0xd6, 0x25, 0xff, 0xb1, 0x5b, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ParameterSetUsedRequest__TYPE_NAME[] = "px4/msg/ParameterSetUsedRequest";

// Define type names, field names, and default values
static char px4__msg__ParameterSetUsedRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ParameterSetUsedRequest__FIELD_NAME__parameter_index[] = "parameter_index";

static rosidl_runtime_c__type_description__Field px4__msg__ParameterSetUsedRequest__FIELDS[] = {
  {
    {px4__msg__ParameterSetUsedRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterSetUsedRequest__FIELD_NAME__parameter_index, 15, 15},
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
px4__msg__ParameterSetUsedRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ParameterSetUsedRequest__TYPE_NAME, 31, 31},
      {px4__msg__ParameterSetUsedRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ParameterSetUsedRequest : Used by a remote to update the used flag for a parameter on the primary\n"
  "\n"
  "uint64 timestamp\n"
  "uint16 parameter_index\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 64";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ParameterSetUsedRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ParameterSetUsedRequest__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ParameterSetUsedRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ParameterSetUsedRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
