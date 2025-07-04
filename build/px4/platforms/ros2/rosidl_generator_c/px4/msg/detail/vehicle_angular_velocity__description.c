// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleAngularVelocity.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_angular_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleAngularVelocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x01, 0xde, 0xbc, 0xd5, 0x73, 0xb3, 0x5b,
      0x3c, 0xf3, 0x3e, 0xfd, 0xa3, 0x62, 0xf0, 0x1b,
      0x6f, 0xc3, 0x2d, 0xa4, 0xde, 0x18, 0xc5, 0xbe,
      0x27, 0xcd, 0x8f, 0x85, 0xad, 0x65, 0x49, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleAngularVelocity__TYPE_NAME[] = "px4/msg/VehicleAngularVelocity";

// Define type names, field names, and default values
static char px4__msg__VehicleAngularVelocity__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleAngularVelocity__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleAngularVelocity__FIELD_NAME__xyz[] = "xyz";
static char px4__msg__VehicleAngularVelocity__FIELD_NAME__xyz_derivative[] = "xyz_derivative";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleAngularVelocity__FIELDS[] = {
  {
    {px4__msg__VehicleAngularVelocity__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAngularVelocity__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAngularVelocity__FIELD_NAME__xyz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAngularVelocity__FIELD_NAME__xyz_derivative, 14, 14},
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
px4__msg__VehicleAngularVelocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleAngularVelocity__TYPE_NAME, 30, 30},
      {px4__msg__VehicleAngularVelocity__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp          # time since system start (microseconds)\n"
  "uint64 timestamp_sample   # timestamp of the data sample on which this message is based (microseconds)\n"
  "\n"
  "float32[3] xyz\\t\\t  # Bias corrected angular velocity about the FRD body frame XYZ-axis in rad/s\n"
  "\n"
  "float32[3] xyz_derivative # angular acceleration about the FRD body frame XYZ-axis in rad/s^2\n"
  "\n"
  "# TOPICS vehicle_angular_velocity vehicle_angular_velocity_groundtruth";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleAngularVelocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleAngularVelocity__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 461, 461},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleAngularVelocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleAngularVelocity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
