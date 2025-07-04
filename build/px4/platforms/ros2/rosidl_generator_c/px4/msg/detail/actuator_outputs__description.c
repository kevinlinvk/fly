// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ActuatorOutputs.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/actuator_outputs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ActuatorOutputs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x10, 0x74, 0xe3, 0xd6, 0x40, 0xa4, 0xb5,
      0xaf, 0x03, 0x68, 0x09, 0x33, 0x40, 0x83, 0x2c,
      0x9d, 0x7d, 0xfb, 0x70, 0x53, 0xbf, 0x2a, 0x1d,
      0xbf, 0x73, 0xb5, 0x22, 0xe8, 0x5f, 0x8d, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ActuatorOutputs__TYPE_NAME[] = "px4/msg/ActuatorOutputs";

// Define type names, field names, and default values
static char px4__msg__ActuatorOutputs__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ActuatorOutputs__FIELD_NAME__noutputs[] = "noutputs";
static char px4__msg__ActuatorOutputs__FIELD_NAME__output[] = "output";

static rosidl_runtime_c__type_description__Field px4__msg__ActuatorOutputs__FIELDS[] = {
  {
    {px4__msg__ActuatorOutputs__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorOutputs__FIELD_NAME__noutputs, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorOutputs__FIELD_NAME__output, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__ActuatorOutputs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ActuatorOutputs__TYPE_NAME, 23, 23},
      {px4__msg__ActuatorOutputs__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t\\t# time since system start (microseconds)\n"
  "uint8 NUM_ACTUATOR_OUTPUTS\\t\\t= 16\n"
  "uint8 NUM_ACTUATOR_OUTPUT_GROUPS\\t= 4\\t# for sanity checking\n"
  "uint32 noutputs\\t\\t\\t\\t# valid outputs\n"
  "float32[16] output\\t\\t\\t\\t# output data, in natural output units\n"
  "\n"
  "# actuator_outputs_sim is used for SITL, HITL & SIH (with an output range of [-1, 1])\n"
  "# TOPICS actuator_outputs actuator_outputs_sim actuator_outputs_debug";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ActuatorOutputs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ActuatorOutputs__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 406, 406},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ActuatorOutputs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ActuatorOutputs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
