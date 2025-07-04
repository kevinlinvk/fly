// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/EstimatorBias3d.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/estimator_bias3d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__EstimatorBias3d__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xb2, 0x49, 0x9c, 0x95, 0xab, 0xda, 0x5b,
      0x49, 0xe6, 0xce, 0xb8, 0x61, 0x17, 0x8f, 0x69,
      0x1f, 0xf2, 0x67, 0x71, 0xce, 0x24, 0x15, 0x5a,
      0x35, 0x67, 0x1b, 0xe3, 0x68, 0x08, 0x4c, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__EstimatorBias3d__TYPE_NAME[] = "px4/msg/EstimatorBias3d";

// Define type names, field names, and default values
static char px4__msg__EstimatorBias3d__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__EstimatorBias3d__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__EstimatorBias3d__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__EstimatorBias3d__FIELD_NAME__bias[] = "bias";
static char px4__msg__EstimatorBias3d__FIELD_NAME__bias_var[] = "bias_var";
static char px4__msg__EstimatorBias3d__FIELD_NAME__innov[] = "innov";
static char px4__msg__EstimatorBias3d__FIELD_NAME__innov_var[] = "innov_var";
static char px4__msg__EstimatorBias3d__FIELD_NAME__innov_test_ratio[] = "innov_test_ratio";

static rosidl_runtime_c__type_description__Field px4__msg__EstimatorBias3d__FIELDS[] = {
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__bias, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__bias_var, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__innov, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__innov_var, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorBias3d__FIELD_NAME__innov_test_ratio, 16, 16},
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
px4__msg__EstimatorBias3d__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__EstimatorBias3d__TYPE_NAME, 23, 23},
      {px4__msg__EstimatorBias3d__FIELDS, 8, 8},
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
  "uint64 timestamp_sample         # the timestamp of the raw data (microseconds)\n"
  "\n"
  "uint32 device_id                # unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "float32[3] bias                 # estimated barometric altitude bias (m)\n"
  "float32[3] bias_var             # estimated barometric altitude bias variance (m^2)\n"
  "\n"
  "float32[3] innov                # innovation of the last measurement fusion (m)\n"
  "float32[3] innov_var            # innovation variance of the last measurement fusion (m^2)\n"
  "float32[3] innov_test_ratio     # normalized innovation squared test ratio\n"
  "\n"
  "# TOPICS estimator_bias3d\n"
  "# TOPICS estimator_ev_pos_bias";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__EstimatorBias3d__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__EstimatorBias3d__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 724, 724},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__EstimatorBias3d__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__EstimatorBias3d__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
