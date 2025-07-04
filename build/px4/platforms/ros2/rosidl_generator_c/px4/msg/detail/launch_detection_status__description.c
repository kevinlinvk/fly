// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LaunchDetectionStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/launch_detection_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LaunchDetectionStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xca, 0x2a, 0xe5, 0x9a, 0x91, 0xd7, 0x53,
      0xf8, 0x68, 0x30, 0xd6, 0xe7, 0xbc, 0x7f, 0x34,
      0x98, 0x8e, 0x79, 0xdc, 0xcd, 0x4c, 0xe5, 0xa7,
      0x4c, 0x75, 0x69, 0x43, 0x4c, 0xac, 0xf2, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LaunchDetectionStatus__TYPE_NAME[] = "px4/msg/LaunchDetectionStatus";

// Define type names, field names, and default values
static char px4__msg__LaunchDetectionStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LaunchDetectionStatus__FIELD_NAME__launch_detection_state[] = "launch_detection_state";

static rosidl_runtime_c__type_description__Field px4__msg__LaunchDetectionStatus__FIELDS[] = {
  {
    {px4__msg__LaunchDetectionStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LaunchDetectionStatus__FIELD_NAME__launch_detection_state, 22, 22},
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
px4__msg__LaunchDetectionStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LaunchDetectionStatus__TYPE_NAME, 29, 29},
      {px4__msg__LaunchDetectionStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Status of the launch detection state machine (fixed-wing only)\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint8 STATE_WAITING_FOR_LAUNCH \\t\\t\\t= 0 # waiting for launch\n"
  "uint8 STATE_LAUNCH_DETECTED_DISABLED_MOTOR \\t= 1 # launch detected, but keep motor(s) disabled (e.g. because it can't spin freely while on catapult)\n"
  "uint8 STATE_FLYING \\t\\t\\t\\t= 2 # launch detected, use normal takeoff/flying configuration\n"
  "\n"
  "uint8 launch_detection_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LaunchDetectionStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LaunchDetectionStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 448, 448},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LaunchDetectionStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LaunchDetectionStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
