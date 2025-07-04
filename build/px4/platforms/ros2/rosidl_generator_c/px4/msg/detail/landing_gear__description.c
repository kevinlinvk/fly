// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LandingGear.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/landing_gear__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LandingGear__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x72, 0x2a, 0x67, 0x66, 0xda, 0x1a, 0x9f,
      0x01, 0x42, 0x6b, 0x50, 0x10, 0x41, 0x4a, 0xe0,
      0xa8, 0xc6, 0x2e, 0x16, 0x60, 0x6c, 0xa5, 0x93,
      0x97, 0x54, 0x2f, 0x73, 0x14, 0xf1, 0x21, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LandingGear__TYPE_NAME[] = "px4/msg/LandingGear";

// Define type names, field names, and default values
static char px4__msg__LandingGear__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LandingGear__FIELD_NAME__landing_gear[] = "landing_gear";

static rosidl_runtime_c__type_description__Field px4__msg__LandingGear__FIELDS[] = {
  {
    {px4__msg__LandingGear__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingGear__FIELD_NAME__landing_gear, 12, 12},
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
px4__msg__LandingGear__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LandingGear__TYPE_NAME, 19, 19},
      {px4__msg__LandingGear__FIELDS, 2, 2},
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
  "int8 GEAR_UP = 1 # landing gear up\n"
  "int8 GEAR_DOWN = -1 # landing gear down\n"
  "int8 GEAR_KEEP = 0 # keep the current state\n"
  "\n"
  "int8 landing_gear";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LandingGear__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LandingGear__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 197, 197},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LandingGear__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LandingGear__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
