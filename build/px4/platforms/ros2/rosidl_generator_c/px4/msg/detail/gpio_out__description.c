// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GpioOut.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gpio_out__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GpioOut__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x6f, 0xb2, 0xb9, 0xc3, 0x32, 0x8f, 0x1a,
      0xfb, 0xaf, 0x74, 0x0c, 0x96, 0x24, 0x97, 0x09,
      0x4c, 0x05, 0x8c, 0xd4, 0xa7, 0xec, 0x20, 0xfd,
      0x3d, 0xde, 0x5e, 0x04, 0xfe, 0x74, 0x84, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GpioOut__TYPE_NAME[] = "px4/msg/GpioOut";

// Define type names, field names, and default values
static char px4__msg__GpioOut__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GpioOut__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__GpioOut__FIELD_NAME__mask[] = "mask";
static char px4__msg__GpioOut__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field px4__msg__GpioOut__FIELDS[] = {
  {
    {px4__msg__GpioOut__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioOut__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioOut__FIELD_NAME__mask, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioOut__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__GpioOut__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GpioOut__TYPE_NAME, 15, 15},
      {px4__msg__GpioOut__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GPIO mask and state\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "uint32 device_id\\t\\t\\t# Device id\n"
  "\n"
  "uint32 mask\\t\\t\\t\\t# pin mask\n"
  "uint32 state\\t\\t\\t\\t# pin state mask";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GpioOut__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GpioOut__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 174, 174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GpioOut__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GpioOut__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
