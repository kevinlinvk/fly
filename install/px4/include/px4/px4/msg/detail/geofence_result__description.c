// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GeofenceResult.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/geofence_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GeofenceResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x01, 0x82, 0x38, 0x8c, 0x81, 0x08, 0x59,
      0x7a, 0x94, 0xa8, 0x97, 0xce, 0x50, 0x38, 0x6e,
      0xc5, 0xaf, 0x80, 0x21, 0x0f, 0x06, 0x17, 0x94,
      0x3e, 0xcb, 0xa3, 0xb8, 0x52, 0xd0, 0xaf, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GeofenceResult__TYPE_NAME[] = "px4/msg/GeofenceResult";

// Define type names, field names, and default values
static char px4__msg__GeofenceResult__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GeofenceResult__FIELD_NAME__geofence_max_dist_triggered[] = "geofence_max_dist_triggered";
static char px4__msg__GeofenceResult__FIELD_NAME__geofence_max_alt_triggered[] = "geofence_max_alt_triggered";
static char px4__msg__GeofenceResult__FIELD_NAME__geofence_custom_fence_triggered[] = "geofence_custom_fence_triggered";
static char px4__msg__GeofenceResult__FIELD_NAME__geofence_action[] = "geofence_action";

static rosidl_runtime_c__type_description__Field px4__msg__GeofenceResult__FIELDS[] = {
  {
    {px4__msg__GeofenceResult__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceResult__FIELD_NAME__geofence_max_dist_triggered, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceResult__FIELD_NAME__geofence_max_alt_triggered, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceResult__FIELD_NAME__geofence_custom_fence_triggered, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceResult__FIELD_NAME__geofence_action, 15, 15},
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
px4__msg__GeofenceResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GeofenceResult__TYPE_NAME, 22, 22},
      {px4__msg__GeofenceResult__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                        # time since system start (microseconds)\n"
  "uint8 GF_ACTION_NONE = 0                # no action on geofence violation\n"
  "uint8 GF_ACTION_WARN = 1                # critical mavlink message\n"
  "uint8 GF_ACTION_LOITER = 2              # switch to AUTO|LOITER\n"
  "uint8 GF_ACTION_RTL = 3                 # switch to AUTO|RTL\n"
  "uint8 GF_ACTION_TERMINATE = 4           # flight termination\n"
  "uint8 GF_ACTION_LAND = 5                # switch to AUTO|LAND\n"
  "\n"
  "bool geofence_max_dist_triggered\\t# true the check for max distance from Home is triggered\n"
  "bool geofence_max_alt_triggered\\t\\t# true the check for max altitude above Home is triggered\n"
  "bool geofence_custom_fence_triggered\\t# true the check for custom inclusion/exclusion geofence(s) is triggered\n"
  "\n"
  "uint8 geofence_action           \\t# action to take when the geofence is breached";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GeofenceResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GeofenceResult__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 843, 843},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GeofenceResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GeofenceResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
