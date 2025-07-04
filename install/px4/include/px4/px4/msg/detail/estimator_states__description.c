// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/estimator_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__EstimatorStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xd9, 0xe5, 0xdf, 0x44, 0x00, 0x8b, 0x38,
      0x49, 0x5b, 0x06, 0xf0, 0x1a, 0xf5, 0x49, 0xfd,
      0xa5, 0x68, 0xa7, 0x7f, 0xc0, 0xc4, 0x09, 0x74,
      0x16, 0xaa, 0x94, 0xcf, 0xa5, 0xc9, 0x18, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__EstimatorStates__TYPE_NAME[] = "px4/msg/EstimatorStates";

// Define type names, field names, and default values
static char px4__msg__EstimatorStates__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__EstimatorStates__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__EstimatorStates__FIELD_NAME__states[] = "states";
static char px4__msg__EstimatorStates__FIELD_NAME__n_states[] = "n_states";
static char px4__msg__EstimatorStates__FIELD_NAME__covariances[] = "covariances";

static rosidl_runtime_c__type_description__Field px4__msg__EstimatorStates__FIELDS[] = {
  {
    {px4__msg__EstimatorStates__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorStates__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorStates__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorStates__FIELD_NAME__n_states, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorStates__FIELD_NAME__covariances, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      24,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__EstimatorStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__EstimatorStates__TYPE_NAME, 23, 23},
      {px4__msg__EstimatorStates__FIELDS, 5, 5},
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
  "float32[25] states\\t\\t# Internal filter states\n"
  "uint8 n_states\\t\\t# Number of states effectively used\n"
  "\n"
  "float32[24] covariances\\t# Diagonal Elements of Covariance Matrix";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__EstimatorStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__EstimatorStates__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 302, 302},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__EstimatorStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__EstimatorStates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
