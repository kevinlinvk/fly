// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/yaw_estimator_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__YawEstimatorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x26, 0xda, 0x97, 0x59, 0xbf, 0xf0, 0x71,
      0x8c, 0x29, 0xd5, 0xa2, 0x6a, 0x96, 0xeb, 0x27,
      0xf1, 0xb4, 0xd0, 0x3e, 0x0a, 0xd3, 0x86, 0x47,
      0x80, 0x6b, 0xe3, 0xa0, 0x76, 0xfb, 0xc7, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__YawEstimatorStatus__TYPE_NAME[] = "px4/msg/YawEstimatorStatus";

// Define type names, field names, and default values
static char px4__msg__YawEstimatorStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_composite[] = "yaw_composite";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_variance[] = "yaw_variance";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_composite_valid[] = "yaw_composite_valid";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__yaw[] = "yaw";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__innov_vn[] = "innov_vn";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__innov_ve[] = "innov_ve";
static char px4__msg__YawEstimatorStatus__FIELD_NAME__weight[] = "weight";

static rosidl_runtime_c__type_description__Field px4__msg__YawEstimatorStatus__FIELDS[] = {
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_composite, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_variance, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__yaw_composite_valid, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__innov_vn, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__innov_ve, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__YawEstimatorStatus__FIELD_NAME__weight, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__YawEstimatorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__YawEstimatorStatus__TYPE_NAME, 26, 26},
      {px4__msg__YawEstimatorStatus__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "uint64 timestamp_sample         # the timestamp of the raw data (microseconds)\n"
  "\n"
  "float32 yaw_composite\\t# composite yaw from GSF (rad)\n"
  "float32 yaw_variance\\t# composite yaw variance from GSF (rad^2)\n"
  "bool yaw_composite_valid\n"
  "\n"
  "float32[5] yaw\\t\\t# yaw estimate for each model in the filter bank (rad)\n"
  "float32[5] innov_vn\\t# North velocity innovation for each model in the filter bank (m/s)\n"
  "float32[5] innov_ve\\t# East velocity innovation for each model in the filter bank (m/s)\n"
  "float32[5] weight\\t# weighting for each model in the filter bank";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__YawEstimatorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__YawEstimatorStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 591, 591},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__YawEstimatorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__YawEstimatorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
