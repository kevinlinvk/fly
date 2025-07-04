// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ParameterResetRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/parameter_reset_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ParameterResetRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0xf4, 0x49, 0x83, 0xc4, 0x51, 0xf2, 0xf4,
      0x43, 0x1a, 0xaf, 0xc2, 0xdc, 0x38, 0xe3, 0xed,
      0xcf, 0xc5, 0x4c, 0x46, 0x3b, 0x74, 0x99, 0xd3,
      0x4d, 0x9a, 0xb6, 0xd7, 0xd4, 0x6e, 0x9f, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ParameterResetRequest__TYPE_NAME[] = "px4/msg/ParameterResetRequest";

// Define type names, field names, and default values
static char px4__msg__ParameterResetRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ParameterResetRequest__FIELD_NAME__parameter_index[] = "parameter_index";
static char px4__msg__ParameterResetRequest__FIELD_NAME__reset_all[] = "reset_all";

static rosidl_runtime_c__type_description__Field px4__msg__ParameterResetRequest__FIELDS[] = {
  {
    {px4__msg__ParameterResetRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterResetRequest__FIELD_NAME__parameter_index, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ParameterResetRequest__FIELD_NAME__reset_all, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ParameterResetRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ParameterResetRequest__TYPE_NAME, 29, 29},
      {px4__msg__ParameterResetRequest__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ParameterResetRequest : Used by the primary to reset one or all parameter value(s) on the remote\n"
  "\n"
  "uint64 timestamp\n"
  "uint16 parameter_index\n"
  "\n"
  "bool reset_all              # If this is true then ignore parameter_index\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ParameterResetRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ParameterResetRequest__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 243, 243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ParameterResetRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ParameterResetRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
