// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/fixed_wing_runway_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FixedWingRunwayControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xb3, 0xc8, 0x80, 0x53, 0xbc, 0x05, 0x68,
      0xa4, 0x21, 0x04, 0xbd, 0x65, 0xa4, 0x78, 0x97,
      0xca, 0xfb, 0xa9, 0xa6, 0xc5, 0xb2, 0xfa, 0x20,
      0x51, 0x64, 0x42, 0xd1, 0xd4, 0xb4, 0xeb, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FixedWingRunwayControl__TYPE_NAME[] = "px4/msg/FixedWingRunwayControl";

// Define type names, field names, and default values
static char px4__msg__FixedWingRunwayControl__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_enabled[] = "wheel_steering_enabled";
static char px4__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_nudging_rate[] = "wheel_steering_nudging_rate";

static rosidl_runtime_c__type_description__Field px4__msg__FixedWingRunwayControl__FIELDS[] = {
  {
    {px4__msg__FixedWingRunwayControl__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_enabled, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_nudging_rate, 27, 27},
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
px4__msg__FixedWingRunwayControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FixedWingRunwayControl__TYPE_NAME, 30, 30},
      {px4__msg__FixedWingRunwayControl__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Auxiliary control fields for fixed-wing runway takeoff/landing\n"
  "\n"
  "# Passes information from the FixedWingModeManager to the FixedWingAttitudeController\n"
  "\n"
  "uint64 timestamp # [us] time since system start\n"
  "\n"
  "bool wheel_steering_enabled\\t\\t# Flag that enables the wheel steering.\n"
  "float32 wheel_steering_nudging_rate\\t# [norm] [@range -1, 1] [FRD] Manual wheel nudging, added to controller output. NAN is interpreted as 0.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FixedWingRunwayControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FixedWingRunwayControl__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 412, 412},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FixedWingRunwayControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FixedWingRunwayControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
