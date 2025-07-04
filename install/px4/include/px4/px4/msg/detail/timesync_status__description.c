// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/timesync_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__TimesyncStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0xe1, 0x85, 0x6f, 0x37, 0x97, 0xdb, 0xe5,
      0x2e, 0xab, 0x44, 0x06, 0xe4, 0x3d, 0x85, 0xb0,
      0xca, 0x11, 0xa3, 0x15, 0xe6, 0xe7, 0x56, 0x14,
      0xba, 0x3e, 0x87, 0x76, 0xe9, 0x45, 0xc2, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__TimesyncStatus__TYPE_NAME[] = "px4/msg/TimesyncStatus";

// Define type names, field names, and default values
static char px4__msg__TimesyncStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__TimesyncStatus__FIELD_NAME__source_protocol[] = "source_protocol";
static char px4__msg__TimesyncStatus__FIELD_NAME__remote_timestamp[] = "remote_timestamp";
static char px4__msg__TimesyncStatus__FIELD_NAME__observed_offset[] = "observed_offset";
static char px4__msg__TimesyncStatus__FIELD_NAME__estimated_offset[] = "estimated_offset";
static char px4__msg__TimesyncStatus__FIELD_NAME__round_trip_time[] = "round_trip_time";

static rosidl_runtime_c__type_description__Field px4__msg__TimesyncStatus__FIELDS[] = {
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__source_protocol, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__remote_timestamp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__observed_offset, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__estimated_offset, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TimesyncStatus__FIELD_NAME__round_trip_time, 15, 15},
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
px4__msg__TimesyncStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__TimesyncStatus__TYPE_NAME, 22, 22},
      {px4__msg__TimesyncStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 SOURCE_PROTOCOL_UNKNOWN = 0\n"
  "uint8 SOURCE_PROTOCOL_MAVLINK = 1\n"
  "uint8 SOURCE_PROTOCOL_DDS     = 2\n"
  "uint8 source_protocol\\t\\t\\t# timesync source\n"
  "\n"
  "uint64 remote_timestamp\\t\\t\\t# remote system timestamp (microseconds)\n"
  "int64 observed_offset\\t\\t\\t# raw time offset directly observed from this timesync packet (microseconds)\n"
  "int64 estimated_offset\\t\\t\\t# smoothed time offset between companion system and PX4 (microseconds)\n"
  "uint32 round_trip_time\\t\\t\\t# round trip time of this timesync packet (microseconds)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__TimesyncStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__TimesyncStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 552, 552},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__TimesyncStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__TimesyncStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
