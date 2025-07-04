// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/navigator_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__NavigatorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x04, 0x1f, 0x4d, 0x1e, 0x43, 0x09, 0x5e,
      0xb2, 0x62, 0xc5, 0x2c, 0xf8, 0xc5, 0xd1, 0x2c,
      0x0a, 0xae, 0xc8, 0x41, 0xb0, 0x86, 0x59, 0x49,
      0x9c, 0xd2, 0xe2, 0x80, 0x58, 0x23, 0xeb, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__NavigatorStatus__TYPE_NAME[] = "px4/msg/NavigatorStatus";

// Define type names, field names, and default values
static char px4__msg__NavigatorStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__NavigatorStatus__FIELD_NAME__nav_state[] = "nav_state";
static char px4__msg__NavigatorStatus__FIELD_NAME__failure[] = "failure";

static rosidl_runtime_c__type_description__Field px4__msg__NavigatorStatus__FIELDS[] = {
  {
    {px4__msg__NavigatorStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__NavigatorStatus__FIELD_NAME__nav_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__NavigatorStatus__FIELD_NAME__failure, 7, 7},
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
px4__msg__NavigatorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__NavigatorStatus__TYPE_NAME, 23, 23},
      {px4__msg__NavigatorStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Current status of a Navigator mode\n"
  "# The possible values of nav_state are defined in the VehicleStatus msg.\n"
  "uint64 timestamp  # time since system start (microseconds)\n"
  "\n"
  "uint8 nav_state   # Source mode (values in VehicleStatus)\n"
  "uint8 failure     # Navigator failure enum\n"
  "\n"
  "uint8 FAILURE_NONE = 0\n"
  "uint8 FAILURE_HAGL = 1 # Target altitude exceeds maximum height above ground";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__NavigatorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__NavigatorStatus__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 372, 372},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__NavigatorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__NavigatorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
