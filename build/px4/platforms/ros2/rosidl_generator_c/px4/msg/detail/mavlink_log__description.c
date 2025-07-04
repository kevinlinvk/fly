// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/MavlinkLog.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/mavlink_log__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__MavlinkLog__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x45, 0x64, 0x1f, 0x41, 0xb7, 0x85, 0x00,
      0xbd, 0x93, 0xb7, 0xb8, 0xd7, 0xa0, 0xc5, 0xcd,
      0x10, 0xb5, 0x0c, 0xab, 0x3c, 0xfd, 0x4d, 0x4f,
      0x80, 0xae, 0xbc, 0x9f, 0x4c, 0x5f, 0x57, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__MavlinkLog__TYPE_NAME[] = "px4/msg/MavlinkLog";

// Define type names, field names, and default values
static char px4__msg__MavlinkLog__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__MavlinkLog__FIELD_NAME__text[] = "text";
static char px4__msg__MavlinkLog__FIELD_NAME__severity[] = "severity";

static rosidl_runtime_c__type_description__Field px4__msg__MavlinkLog__FIELDS[] = {
  {
    {px4__msg__MavlinkLog__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MavlinkLog__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      127,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MavlinkLog__FIELD_NAME__severity, 8, 8},
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
px4__msg__MavlinkLog__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__MavlinkLog__TYPE_NAME, 18, 18},
      {px4__msg__MavlinkLog__FIELDS, 3, 3},
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
  "\n"
  "char[127] text\n"
  "uint8 severity # log level (same as in the linux kernel, starting with 0)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__MavlinkLog__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__MavlinkLog__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 177, 177},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__MavlinkLog__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__MavlinkLog__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
