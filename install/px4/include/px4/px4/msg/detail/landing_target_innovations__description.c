// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LandingTargetInnovations.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/landing_target_innovations__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LandingTargetInnovations__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x91, 0x85, 0x30, 0xd7, 0x22, 0x5d, 0xa9,
      0x45, 0xd6, 0xa7, 0x36, 0xdd, 0x5b, 0xf6, 0xd8,
      0x8a, 0x44, 0x89, 0xe9, 0x69, 0xdc, 0x0c, 0xbc,
      0x15, 0xdc, 0x7a, 0xda, 0xb5, 0xfc, 0xc6, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LandingTargetInnovations__TYPE_NAME[] = "px4/msg/LandingTargetInnovations";

// Define type names, field names, and default values
static char px4__msg__LandingTargetInnovations__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LandingTargetInnovations__FIELD_NAME__innov_x[] = "innov_x";
static char px4__msg__LandingTargetInnovations__FIELD_NAME__innov_y[] = "innov_y";
static char px4__msg__LandingTargetInnovations__FIELD_NAME__innov_cov_x[] = "innov_cov_x";
static char px4__msg__LandingTargetInnovations__FIELD_NAME__innov_cov_y[] = "innov_cov_y";

static rosidl_runtime_c__type_description__Field px4__msg__LandingTargetInnovations__FIELDS[] = {
  {
    {px4__msg__LandingTargetInnovations__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingTargetInnovations__FIELD_NAME__innov_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingTargetInnovations__FIELD_NAME__innov_y, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingTargetInnovations__FIELD_NAME__innov_cov_x, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LandingTargetInnovations__FIELD_NAME__innov_cov_y, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__LandingTargetInnovations__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LandingTargetInnovations__TYPE_NAME, 32, 32},
      {px4__msg__LandingTargetInnovations__FIELDS, 5, 5},
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
  "# Innovation of landing target position estimator\n"
  "float32 innov_x\n"
  "float32 innov_y\n"
  "\n"
  "# Innovation covariance of landing target position estimator\n"
  "float32 innov_cov_x\n"
  "float32 innov_cov_y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LandingTargetInnovations__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LandingTargetInnovations__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 243, 243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LandingTargetInnovations__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LandingTargetInnovations__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
