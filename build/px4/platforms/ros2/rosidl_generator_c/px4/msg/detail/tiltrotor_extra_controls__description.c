// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/TiltrotorExtraControls.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/tiltrotor_extra_controls__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__TiltrotorExtraControls__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0xb4, 0xca, 0x86, 0xf1, 0x60, 0x34, 0xc8,
      0x31, 0x0d, 0x46, 0x3d, 0x39, 0x45, 0xf0, 0x0e,
      0x59, 0x79, 0x1e, 0x54, 0xba, 0xa2, 0x4c, 0x1c,
      0x43, 0xa5, 0x50, 0x29, 0x64, 0x17, 0x89, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__TiltrotorExtraControls__TYPE_NAME[] = "px4/msg/TiltrotorExtraControls";

// Define type names, field names, and default values
static char px4__msg__TiltrotorExtraControls__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__TiltrotorExtraControls__FIELD_NAME__collective_tilt_normalized_setpoint[] = "collective_tilt_normalized_setpoint";
static char px4__msg__TiltrotorExtraControls__FIELD_NAME__collective_thrust_normalized_setpoint[] = "collective_thrust_normalized_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__TiltrotorExtraControls__FIELDS[] = {
  {
    {px4__msg__TiltrotorExtraControls__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TiltrotorExtraControls__FIELD_NAME__collective_tilt_normalized_setpoint, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TiltrotorExtraControls__FIELD_NAME__collective_thrust_normalized_setpoint, 37, 37},
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
px4__msg__TiltrotorExtraControls__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__TiltrotorExtraControls__TYPE_NAME, 30, 30},
      {px4__msg__TiltrotorExtraControls__FIELDS, 3, 3},
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
  "float32 collective_tilt_normalized_setpoint\\t# Collective tilt angle of motors of tiltrotor, 0: vertical, 1: horizontal [0, 1]\n"
  "float32 collective_thrust_normalized_setpoint \\t# Collective thrust setpoint [0, 1]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__TiltrotorExtraControls__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__TiltrotorExtraControls__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 268, 268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__TiltrotorExtraControls__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__TiltrotorExtraControls__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
