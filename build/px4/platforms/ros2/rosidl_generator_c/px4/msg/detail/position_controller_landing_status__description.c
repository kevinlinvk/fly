// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/position_controller_landing_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PositionControllerLandingStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0x92, 0x78, 0xe0, 0x91, 0x5a, 0xcf, 0x09,
      0xed, 0xed, 0xf2, 0xe7, 0x4e, 0xbf, 0x7d, 0x17,
      0xa8, 0xfa, 0x56, 0xfc, 0x98, 0x44, 0xdb, 0x19,
      0x58, 0x91, 0x3c, 0xf6, 0x50, 0x4c, 0x09, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PositionControllerLandingStatus__TYPE_NAME[] = "px4/msg/PositionControllerLandingStatus";

// Define type names, field names, and default values
static char px4__msg__PositionControllerLandingStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PositionControllerLandingStatus__FIELD_NAME__lateral_touchdown_offset[] = "lateral_touchdown_offset";
static char px4__msg__PositionControllerLandingStatus__FIELD_NAME__flaring[] = "flaring";
static char px4__msg__PositionControllerLandingStatus__FIELD_NAME__abort_status[] = "abort_status";

static rosidl_runtime_c__type_description__Field px4__msg__PositionControllerLandingStatus__FIELDS[] = {
  {
    {px4__msg__PositionControllerLandingStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerLandingStatus__FIELD_NAME__lateral_touchdown_offset, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerLandingStatus__FIELD_NAME__flaring, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PositionControllerLandingStatus__FIELD_NAME__abort_status, 12, 12},
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
px4__msg__PositionControllerLandingStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PositionControllerLandingStatus__TYPE_NAME, 39, 39},
      {px4__msg__PositionControllerLandingStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # [us] time since system start\n"
  "float32 lateral_touchdown_offset # [m] lateral touchdown position offset manually commanded during landing\n"
  "bool flaring # true if the aircraft is flaring\n"
  "\n"
  "# abort status is:\n"
  "# 0 if not aborted\n"
  "# >0 if aborted, with the singular abort criterion which triggered the landing abort enumerated by the following abort reasons\n"
  "uint8 abort_status\n"
  "\n"
  "# abort reasons\n"
  "# after the manual operator abort, corresponds to individual bits of param FW_LND_ABORT\n"
  "uint8 NOT_ABORTED = 0\n"
  "uint8 ABORTED_BY_OPERATOR = 1\n"
  "uint8 TERRAIN_NOT_FOUND = 2 # FW_LND_ABORT (1 << 0)\n"
  "uint8 TERRAIN_TIMEOUT = 3 # FW_LND_ABORT (1 << 1)\n"
  "uint8 UNKNOWN_ABORT_CRITERION = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PositionControllerLandingStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PositionControllerLandingStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 680, 680},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PositionControllerLandingStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PositionControllerLandingStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
