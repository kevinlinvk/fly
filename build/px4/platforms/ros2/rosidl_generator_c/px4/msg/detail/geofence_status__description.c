// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GeofenceStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/geofence_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GeofenceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0xa1, 0xda, 0x84, 0x10, 0x2b, 0x99, 0x9a,
      0xd9, 0x07, 0x38, 0xfa, 0x10, 0xb5, 0x4e, 0x3d,
      0x58, 0x10, 0x67, 0x63, 0xeb, 0x26, 0x45, 0xf0,
      0xc8, 0x33, 0xca, 0xd8, 0x5a, 0x29, 0xf1, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GeofenceStatus__TYPE_NAME[] = "px4/msg/GeofenceStatus";

// Define type names, field names, and default values
static char px4__msg__GeofenceStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GeofenceStatus__FIELD_NAME__geofence_id[] = "geofence_id";
static char px4__msg__GeofenceStatus__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field px4__msg__GeofenceStatus__FIELDS[] = {
  {
    {px4__msg__GeofenceStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceStatus__FIELD_NAME__geofence_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GeofenceStatus__FIELD_NAME__status, 6, 6},
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
px4__msg__GeofenceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GeofenceStatus__TYPE_NAME, 22, 22},
      {px4__msg__GeofenceStatus__FIELDS, 3, 3},
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
  "\n"
  "uint32 geofence_id \\t\\t\\t# loaded geofence id\n"
  "uint8 status \\t\\t\\t\\t# Current geofence status\n"
  "\n"
  "uint8 GF_STATUS_LOADING = 0\n"
  "uint8 GF_STATUS_READY = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GeofenceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GeofenceStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 223, 223},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GeofenceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GeofenceStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
