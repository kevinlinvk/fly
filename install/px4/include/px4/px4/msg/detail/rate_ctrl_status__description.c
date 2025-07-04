// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rate_ctrl_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RateCtrlStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0xf0, 0xe5, 0x9e, 0x42, 0x04, 0xa2, 0xda,
      0xb0, 0x4b, 0x7a, 0x3c, 0x5d, 0xcd, 0xf1, 0x53,
      0xa2, 0x93, 0x30, 0x9b, 0xdf, 0x5b, 0xff, 0xda,
      0x48, 0x05, 0xcb, 0x9f, 0xa0, 0xb5, 0xf0, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RateCtrlStatus__TYPE_NAME[] = "px4/msg/RateCtrlStatus";

// Define type names, field names, and default values
static char px4__msg__RateCtrlStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RateCtrlStatus__FIELD_NAME__rollspeed_integ[] = "rollspeed_integ";
static char px4__msg__RateCtrlStatus__FIELD_NAME__pitchspeed_integ[] = "pitchspeed_integ";
static char px4__msg__RateCtrlStatus__FIELD_NAME__yawspeed_integ[] = "yawspeed_integ";

static rosidl_runtime_c__type_description__Field px4__msg__RateCtrlStatus__FIELDS[] = {
  {
    {px4__msg__RateCtrlStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RateCtrlStatus__FIELD_NAME__rollspeed_integ, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RateCtrlStatus__FIELD_NAME__pitchspeed_integ, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RateCtrlStatus__FIELD_NAME__yawspeed_integ, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__RateCtrlStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RateCtrlStatus__TYPE_NAME, 22, 22},
      {px4__msg__RateCtrlStatus__FIELDS, 4, 4},
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
  "# rate controller integrator status\n"
  "float32 rollspeed_integ\n"
  "float32 pitchspeed_integ\n"
  "float32 yawspeed_integ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RateCtrlStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RateCtrlStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 168, 168},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RateCtrlStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RateCtrlStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
