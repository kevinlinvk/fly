// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/can_interface_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__CanInterfaceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0x95, 0x8c, 0x87, 0xf2, 0x09, 0x24, 0x28,
      0xb4, 0x7a, 0x45, 0xde, 0xe1, 0x3a, 0x68, 0xd0,
      0xf4, 0xac, 0xc3, 0x84, 0x0b, 0xa3, 0xca, 0x99,
      0xf5, 0x6a, 0xc4, 0xcd, 0x81, 0x33, 0xc2, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__CanInterfaceStatus__TYPE_NAME[] = "px4/msg/CanInterfaceStatus";

// Define type names, field names, and default values
static char px4__msg__CanInterfaceStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__CanInterfaceStatus__FIELD_NAME__interface[] = "interface";
static char px4__msg__CanInterfaceStatus__FIELD_NAME__io_errors[] = "io_errors";
static char px4__msg__CanInterfaceStatus__FIELD_NAME__frames_tx[] = "frames_tx";
static char px4__msg__CanInterfaceStatus__FIELD_NAME__frames_rx[] = "frames_rx";

static rosidl_runtime_c__type_description__Field px4__msg__CanInterfaceStatus__FIELDS[] = {
  {
    {px4__msg__CanInterfaceStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CanInterfaceStatus__FIELD_NAME__interface, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CanInterfaceStatus__FIELD_NAME__io_errors, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CanInterfaceStatus__FIELD_NAME__frames_tx, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CanInterfaceStatus__FIELD_NAME__frames_rx, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__CanInterfaceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__CanInterfaceStatus__TYPE_NAME, 26, 26},
      {px4__msg__CanInterfaceStatus__FIELDS, 5, 5},
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
  "uint8 interface\n"
  "\n"
  "uint64 io_errors\n"
  "uint64 frames_tx\n"
  "uint64 frames_rx";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__CanInterfaceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__CanInterfaceStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 127, 127},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__CanInterfaceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__CanInterfaceStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
