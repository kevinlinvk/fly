// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LogMessage.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/log_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LogMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0x8d, 0xae, 0xe8, 0x1e, 0xe2, 0xdb, 0xeb,
      0xb7, 0x29, 0xe4, 0x87, 0xc2, 0x97, 0x09, 0x38,
      0x34, 0x14, 0xc0, 0x97, 0xbf, 0x8c, 0x18, 0x6e,
      0x3c, 0x9b, 0xf5, 0xe6, 0xb7, 0x98, 0x56, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LogMessage__TYPE_NAME[] = "px4/msg/LogMessage";

// Define type names, field names, and default values
static char px4__msg__LogMessage__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LogMessage__FIELD_NAME__severity[] = "severity";
static char px4__msg__LogMessage__FIELD_NAME__text[] = "text";

static rosidl_runtime_c__type_description__Field px4__msg__LogMessage__FIELDS[] = {
  {
    {px4__msg__LogMessage__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LogMessage__FIELD_NAME__severity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LogMessage__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      127,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__LogMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LogMessage__TYPE_NAME, 18, 18},
      {px4__msg__LogMessage__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A logging message, output with PX4_WARN, PX4_ERR, PX4_INFO\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 severity # log level (same as in the linux kernel, starting with 0)\n"
  "char[127] text\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LogMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LogMessage__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 239, 239},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LogMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LogMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
