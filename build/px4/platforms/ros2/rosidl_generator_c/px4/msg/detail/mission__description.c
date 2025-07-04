// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Mission.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/mission__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Mission__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x32, 0x1a, 0x0e, 0x44, 0xc0, 0x7c, 0xb8,
      0x12, 0x0f, 0x43, 0x91, 0x05, 0x67, 0xcb, 0xb9,
      0x6b, 0x7b, 0x2b, 0x80, 0x3f, 0xc3, 0x46, 0xa1,
      0x50, 0x4e, 0xc2, 0x56, 0x9e, 0x4a, 0x0f, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Mission__TYPE_NAME[] = "px4/msg/Mission";

// Define type names, field names, and default values
static char px4__msg__Mission__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Mission__FIELD_NAME__mission_dataman_id[] = "mission_dataman_id";
static char px4__msg__Mission__FIELD_NAME__fence_dataman_id[] = "fence_dataman_id";
static char px4__msg__Mission__FIELD_NAME__safepoint_dataman_id[] = "safepoint_dataman_id";
static char px4__msg__Mission__FIELD_NAME__count[] = "count";
static char px4__msg__Mission__FIELD_NAME__current_seq[] = "current_seq";
static char px4__msg__Mission__FIELD_NAME__land_start_index[] = "land_start_index";
static char px4__msg__Mission__FIELD_NAME__land_index[] = "land_index";
static char px4__msg__Mission__FIELD_NAME__mission_id[] = "mission_id";
static char px4__msg__Mission__FIELD_NAME__geofence_id[] = "geofence_id";
static char px4__msg__Mission__FIELD_NAME__safe_points_id[] = "safe_points_id";

static rosidl_runtime_c__type_description__Field px4__msg__Mission__FIELDS[] = {
  {
    {px4__msg__Mission__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__mission_dataman_id, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__fence_dataman_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__safepoint_dataman_id, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__current_seq, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__land_start_index, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__land_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__mission_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__geofence_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Mission__FIELD_NAME__safe_points_id, 14, 14},
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
px4__msg__Mission__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Mission__TYPE_NAME, 15, 15},
      {px4__msg__Mission__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "uint8 mission_dataman_id\\t# default 0, there are two offboard storage places in the dataman: 0 or 1\n"
  "uint8 fence_dataman_id\\t\\t# default 0, there are two offboard storage places in the dataman: 0 or 1\n"
  "uint8 safepoint_dataman_id\\t# default 0, there are two offboard storage places in the dataman: 0 or 1\n"
  "\n"
  "uint16 count\\t\\t# count of the missions stored in the dataman\n"
  "int32 current_seq\\t# default -1, start at the one changed latest\n"
  "\n"
  "int32 land_start_index  # Index of the land start marker, if unavailable index of the land item, -1 otherwise\n"
  "int32 land_index \\t# Index of the land item, -1 otherwise\n"
  "\n"
  "uint32 mission_id # indicates updates to the mission, reload from dataman if changed\n"
  "uint32 geofence_id # indicates updates to the geofence, reload from dataman if changed\n"
  "uint32 safe_points_id # indicates updates to the safe points, reload from dataman if changed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Mission__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Mission__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 915, 915},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Mission__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Mission__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
