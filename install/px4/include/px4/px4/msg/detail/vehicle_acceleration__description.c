// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleAcceleration.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_acceleration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleAcceleration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x64, 0x4a, 0x03, 0xf2, 0xb9, 0xfc, 0x57,
      0x02, 0x76, 0x35, 0xe8, 0x63, 0x33, 0x54, 0xee,
      0x34, 0x04, 0x4d, 0xc2, 0xf7, 0xae, 0x00, 0x3f,
      0x91, 0x84, 0x1e, 0xd7, 0x85, 0x5b, 0x7a, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleAcceleration__TYPE_NAME[] = "px4/msg/VehicleAcceleration";

// Define type names, field names, and default values
static char px4__msg__VehicleAcceleration__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleAcceleration__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleAcceleration__FIELD_NAME__xyz[] = "xyz";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleAcceleration__FIELDS[] = {
  {
    {px4__msg__VehicleAcceleration__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAcceleration__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAcceleration__FIELD_NAME__xyz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__VehicleAcceleration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleAcceleration__TYPE_NAME, 27, 27},
      {px4__msg__VehicleAcceleration__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint64 timestamp_sample\\t\\t# the timestamp of the raw data (microseconds)\n"
  "\n"
  "float32[3] xyz\\t\\t\\t# Bias corrected acceleration (including gravity) in the FRD body frame XYZ-axis in m/s^2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleAcceleration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleAcceleration__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 241, 241},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleAcceleration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleAcceleration__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
