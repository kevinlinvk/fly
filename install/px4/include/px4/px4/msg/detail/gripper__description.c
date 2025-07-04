// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Gripper.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gripper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Gripper__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x63, 0x2e, 0xb4, 0x6a, 0x2b, 0x27, 0x58,
      0xaa, 0x8e, 0xa5, 0x1c, 0xe9, 0xfb, 0xf2, 0x6f,
      0x92, 0x70, 0xf3, 0x61, 0xfc, 0x8e, 0x3a, 0xb9,
      0xec, 0x9f, 0x12, 0x02, 0xfd, 0x0f, 0xc4, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Gripper__TYPE_NAME[] = "px4/msg/Gripper";

// Define type names, field names, and default values
static char px4__msg__Gripper__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Gripper__FIELD_NAME__command[] = "command";

static rosidl_runtime_c__type_description__Field px4__msg__Gripper__FIELDS[] = {
  {
    {px4__msg__Gripper__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Gripper__FIELD_NAME__command, 7, 7},
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
px4__msg__Gripper__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Gripper__TYPE_NAME, 15, 15},
      {px4__msg__Gripper__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "## Used to command an actuation in the gripper, which is mapped to a specific output in the control allocation module\n"
  "\n"
  "uint64 timestamp\n"
  "\n"
  "int8 command\\t\\t# Commanded state for the gripper\n"
  "int8 COMMAND_GRAB = 0\n"
  "int8 COMMAND_RELEASE = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Gripper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Gripper__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 232, 232},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Gripper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Gripper__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
