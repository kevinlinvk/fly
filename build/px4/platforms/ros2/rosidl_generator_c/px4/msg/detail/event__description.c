// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Event.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0x88, 0x55, 0xc1, 0xf8, 0xb6, 0x5a, 0x4a,
      0xeb, 0xfd, 0xe8, 0xc5, 0x63, 0x73, 0x8d, 0x33,
      0x29, 0xb2, 0x7e, 0xc6, 0x8e, 0x0e, 0xb9, 0xc3,
      0x87, 0x78, 0x45, 0x5b, 0x61, 0x6d, 0xcb, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Event__TYPE_NAME[] = "px4/msg/Event";

// Define type names, field names, and default values
static char px4__msg__Event__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Event__FIELD_NAME__id[] = "id";
static char px4__msg__Event__FIELD_NAME__event_sequence[] = "event_sequence";
static char px4__msg__Event__FIELD_NAME__arguments[] = "arguments";
static char px4__msg__Event__FIELD_NAME__log_levels[] = "log_levels";

static rosidl_runtime_c__type_description__Field px4__msg__Event__FIELDS[] = {
  {
    {px4__msg__Event__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Event__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Event__FIELD_NAME__event_sequence, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Event__FIELD_NAME__arguments, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Event__FIELD_NAME__log_levels, 10, 10},
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
px4__msg__Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Event__TYPE_NAME, 13, 13},
      {px4__msg__Event__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Events interface\n"
  "uint32 MESSAGE_VERSION = 1\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint32 id                   # Event ID\n"
  "uint16 event_sequence       # Event sequence number\n"
  "uint8[25] arguments         # (optional) arguments, depend on event id\n"
  "\n"
  "uint8 log_levels            # Log levels: 4 bits MSB: internal, 4 bits LSB: external\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Event__TYPE_NAME, 13, 13},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 385, 385},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Event__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
