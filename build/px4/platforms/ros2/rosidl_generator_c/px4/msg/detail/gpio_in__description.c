// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GpioIn.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gpio_in__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GpioIn__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x4c, 0x04, 0xdc, 0xd9, 0x04, 0x4e, 0xf8,
      0xb5, 0x31, 0xb3, 0x7f, 0xe5, 0x10, 0xf4, 0xc5,
      0xce, 0x2b, 0xaa, 0x13, 0xc1, 0x36, 0xe4, 0x13,
      0x7f, 0x05, 0xbe, 0x76, 0xe3, 0x60, 0x28, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GpioIn__TYPE_NAME[] = "px4/msg/GpioIn";

// Define type names, field names, and default values
static char px4__msg__GpioIn__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GpioIn__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__GpioIn__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field px4__msg__GpioIn__FIELDS[] = {
  {
    {px4__msg__GpioIn__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioIn__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GpioIn__FIELD_NAME__state, 5, 5},
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
px4__msg__GpioIn__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GpioIn__TYPE_NAME, 14, 14},
      {px4__msg__GpioIn__FIELDS, 3, 3},
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
  "uint32 state\\t\\t\\t\\t# pin state mask";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GpioIn__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GpioIn__TYPE_NAME, 14, 14},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GpioIn__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GpioIn__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
