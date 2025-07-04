// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PwmInput.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/pwm_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PwmInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x55, 0x7d, 0x4e, 0x10, 0x5b, 0x64, 0x29,
      0xf2, 0x0d, 0x93, 0x73, 0x43, 0x57, 0xe6, 0x2d,
      0x9c, 0xdb, 0xa4, 0x60, 0xdf, 0xca, 0xe6, 0xf4,
      0x8f, 0xf7, 0x03, 0x6f, 0xd4, 0xe6, 0x39, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PwmInput__TYPE_NAME[] = "px4/msg/PwmInput";

// Define type names, field names, and default values
static char px4__msg__PwmInput__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PwmInput__FIELD_NAME__error_count[] = "error_count";
static char px4__msg__PwmInput__FIELD_NAME__pulse_width[] = "pulse_width";
static char px4__msg__PwmInput__FIELD_NAME__period[] = "period";

static rosidl_runtime_c__type_description__Field px4__msg__PwmInput__FIELDS[] = {
  {
    {px4__msg__PwmInput__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PwmInput__FIELD_NAME__error_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PwmInput__FIELD_NAME__pulse_width, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PwmInput__FIELD_NAME__period, 6, 6},
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
px4__msg__PwmInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PwmInput__TYPE_NAME, 16, 16},
      {px4__msg__PwmInput__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp   # Time since system start (microseconds)\n"
  "uint64 error_count # Timer overcapture error flag (AUX5 or MAIN5)\n"
  "uint32 pulse_width # Pulse width, timer counts (microseconds)\n"
  "uint32 period      # Period, timer counts (microseconds)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PwmInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PwmInput__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 245, 245},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PwmInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PwmInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
