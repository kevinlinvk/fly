// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/HoverThrustEstimate.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/hover_thrust_estimate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__HoverThrustEstimate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x08, 0x0f, 0x10, 0x39, 0x20, 0x24, 0x81,
      0x74, 0x80, 0x8a, 0x7b, 0xd9, 0x4e, 0x83, 0x95,
      0x46, 0xdc, 0xf1, 0xb1, 0x18, 0x8b, 0x1b, 0x66,
      0x93, 0xd8, 0xe1, 0xb2, 0x17, 0xcb, 0x80, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__HoverThrustEstimate__TYPE_NAME[] = "px4/msg/HoverThrustEstimate";

// Define type names, field names, and default values
static char px4__msg__HoverThrustEstimate__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__hover_thrust[] = "hover_thrust";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__hover_thrust_var[] = "hover_thrust_var";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov[] = "accel_innov";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov_var[] = "accel_innov_var";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov_test_ratio[] = "accel_innov_test_ratio";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__accel_noise_var[] = "accel_noise_var";
static char px4__msg__HoverThrustEstimate__FIELD_NAME__valid[] = "valid";

static rosidl_runtime_c__type_description__Field px4__msg__HoverThrustEstimate__FIELDS[] = {
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__hover_thrust, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__hover_thrust_var, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov_var, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__accel_innov_test_ratio, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__accel_noise_var, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__HoverThrustEstimate__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__HoverThrustEstimate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__HoverThrustEstimate__TYPE_NAME, 27, 27},
      {px4__msg__HoverThrustEstimate__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                # time since system start (microseconds)\n"
  "uint64 timestamp_sample         # time of corresponding sensor data last used for this estimate\n"
  "\n"
  "float32 hover_thrust\\t\\t# estimated hover thrust [0.1, 0.9]\n"
  "float32 hover_thrust_var\\t# estimated hover thrust variance\n"
  "\n"
  "float32 accel_innov\\t\\t# innovation of the last acceleration fusion\n"
  "float32 accel_innov_var\\t\\t# innovation variance of the last acceleration fusion\n"
  "float32 accel_innov_test_ratio\\t# normalized innovation squared test ratio\n"
  "\n"
  "float32 accel_noise_var\\t\\t# vertical acceleration noise variance estimated form innovation residual\n"
  "\n"
  "bool valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__HoverThrustEstimate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__HoverThrustEstimate__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 619, 619},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__HoverThrustEstimate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__HoverThrustEstimate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
