// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/OrbTestMedium.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/orb_test_medium__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__OrbTestMedium__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xf4, 0x61, 0xdd, 0x07, 0x62, 0x5a, 0x8f,
      0xca, 0xe1, 0xb1, 0xee, 0x68, 0x35, 0xe6, 0x68,
      0x9a, 0x7e, 0xba, 0xd4, 0x07, 0x48, 0x46, 0x71,
      0x16, 0x48, 0x9f, 0x71, 0xb5, 0xfb, 0xaf, 0x30,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__OrbTestMedium__TYPE_NAME[] = "px4/msg/OrbTestMedium";

// Define type names, field names, and default values
static char px4__msg__OrbTestMedium__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__OrbTestMedium__FIELD_NAME__val[] = "val";
static char px4__msg__OrbTestMedium__FIELD_NAME__junk[] = "junk";

static rosidl_runtime_c__type_description__Field px4__msg__OrbTestMedium__FIELDS[] = {
  {
    {px4__msg__OrbTestMedium__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OrbTestMedium__FIELD_NAME__val, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OrbTestMedium__FIELD_NAME__junk, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      64,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__OrbTestMedium__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__OrbTestMedium__TYPE_NAME, 21, 21},
      {px4__msg__OrbTestMedium__FIELDS, 3, 3},
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
  "int32 val\n"
  "\n"
  "uint8[64] junk\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16\n"
  "\n"
  "# TOPICS orb_test_medium orb_test_medium_multi orb_test_medium_wrap_around orb_test_medium_queue orb_test_medium_queue_poll";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__OrbTestMedium__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__OrbTestMedium__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 240, 240},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__OrbTestMedium__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__OrbTestMedium__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
