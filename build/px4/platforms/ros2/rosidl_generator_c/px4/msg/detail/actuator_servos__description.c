// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ActuatorServos.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/actuator_servos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ActuatorServos__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x04, 0xa6, 0x4a, 0x87, 0x6c, 0xf9, 0x20,
      0x86, 0xd0, 0x4a, 0xd5, 0xaa, 0x21, 0x70, 0xb0,
      0xdb, 0x77, 0xaf, 0x73, 0xda, 0x1a, 0x2e, 0x81,
      0x94, 0x08, 0x4c, 0xbd, 0xb0, 0x14, 0x50, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ActuatorServos__TYPE_NAME[] = "px4/msg/ActuatorServos";

// Define type names, field names, and default values
static char px4__msg__ActuatorServos__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ActuatorServos__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__ActuatorServos__FIELD_NAME__control[] = "control";

static rosidl_runtime_c__type_description__Field px4__msg__ActuatorServos__FIELDS[] = {
  {
    {px4__msg__ActuatorServos__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorServos__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorServos__FIELD_NAME__control, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ActuatorServos__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ActuatorServos__TYPE_NAME, 22, 22},
      {px4__msg__ActuatorServos__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Servo control message\n"
  "#\n"
  "# Normalised output setpoint for up to 8 servos.\n"
  "# Published by the vehicle's allocation and consumed by the actuator output drivers.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Sampling timestamp of the data this control response is based on\n"
  "\n"
  "uint8 NUM_CONTROLS = 8\n"
  "float32[8] control # [@range -1, 1] Normalized output. 1 means maximum positive position. -1 maximum negative position (if not supported by the output, <0 maps to NaN). NaN maps to disarmed.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ActuatorServos__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ActuatorServos__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 548, 548},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ActuatorServos__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ActuatorServos__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
