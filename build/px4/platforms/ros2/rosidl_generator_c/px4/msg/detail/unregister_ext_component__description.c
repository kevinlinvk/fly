// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/unregister_ext_component__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__UnregisterExtComponent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x64, 0x88, 0x61, 0x25, 0xcc, 0xec, 0x23,
      0xd8, 0x1b, 0xab, 0x2f, 0xdf, 0xf1, 0x40, 0x4d,
      0xc1, 0x80, 0x2f, 0xa6, 0xa3, 0xcb, 0x05, 0x95,
      0x7b, 0x2e, 0xaa, 0xc0, 0x9d, 0x4e, 0x34, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__UnregisterExtComponent__TYPE_NAME[] = "px4/msg/UnregisterExtComponent";

// Define type names, field names, and default values
static char px4__msg__UnregisterExtComponent__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__UnregisterExtComponent__FIELD_NAME__name[] = "name";
static char px4__msg__UnregisterExtComponent__FIELD_NAME__arming_check_id[] = "arming_check_id";
static char px4__msg__UnregisterExtComponent__FIELD_NAME__mode_id[] = "mode_id";
static char px4__msg__UnregisterExtComponent__FIELD_NAME__mode_executor_id[] = "mode_executor_id";

static rosidl_runtime_c__type_description__Field px4__msg__UnregisterExtComponent__FIELDS[] = {
  {
    {px4__msg__UnregisterExtComponent__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UnregisterExtComponent__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UnregisterExtComponent__FIELD_NAME__arming_check_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UnregisterExtComponent__FIELD_NAME__mode_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__UnregisterExtComponent__FIELD_NAME__mode_executor_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__UnregisterExtComponent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__UnregisterExtComponent__TYPE_NAME, 30, 30},
      {px4__msg__UnregisterExtComponent__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "char[25] name                      # either the mode name, or component name\n"
  "\n"
  "int8 arming_check_id      # arming check registration ID (-1 if not registered)\n"
  "int8 mode_id              # assigned mode ID (-1 if not registered)\n"
  "int8 mode_executor_id     # assigned mode executor ID (-1 if not registered)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__UnregisterExtComponent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__UnregisterExtComponent__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 390, 390},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__UnregisterExtComponent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__UnregisterExtComponent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
