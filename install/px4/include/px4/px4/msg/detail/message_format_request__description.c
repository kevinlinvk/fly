// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/MessageFormatRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/message_format_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__MessageFormatRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x66, 0xcd, 0x80, 0xfb, 0x0f, 0x8f, 0x7a,
      0x2b, 0xed, 0x9e, 0x68, 0xa6, 0x13, 0x2c, 0x17,
      0x6f, 0x0b, 0xc9, 0xa3, 0x78, 0xe5, 0xea, 0xb2,
      0xfa, 0x4d, 0xb4, 0xf9, 0x19, 0xb8, 0x58, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__MessageFormatRequest__TYPE_NAME[] = "px4/msg/MessageFormatRequest";

// Define type names, field names, and default values
static char px4__msg__MessageFormatRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__MessageFormatRequest__FIELD_NAME__protocol_version[] = "protocol_version";
static char px4__msg__MessageFormatRequest__FIELD_NAME__topic_name[] = "topic_name";

static rosidl_runtime_c__type_description__Field px4__msg__MessageFormatRequest__FIELDS[] = {
  {
    {px4__msg__MessageFormatRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MessageFormatRequest__FIELD_NAME__protocol_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__MessageFormatRequest__FIELD_NAME__topic_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      50,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__MessageFormatRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__MessageFormatRequest__TYPE_NAME, 28, 28},
      {px4__msg__MessageFormatRequest__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "# Request to PX4 to get the hash of a message, to check for message compatibility\n"
  "\n"
  "uint16 LATEST_PROTOCOL_VERSION = 1 # Current version of this protocol. Increase this whenever the MessageFormatRequest or MessageFormatResponse changes.\n"
  "\n"
  "uint16 protocol_version           # Must be set to LATEST_PROTOCOL_VERSION. Do not change this field, it must be the first field after the timestamp\n"
  "\n"
  "char[50] topic_name  # E.g. /fmu/in/vehicle_command";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__MessageFormatRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__MessageFormatRequest__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 498, 498},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__MessageFormatRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__MessageFormatRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
