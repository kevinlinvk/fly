// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Wind.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/wind__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Wind__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x1d, 0xa4, 0xbb, 0x51, 0xb3, 0x2f, 0xbc,
      0x51, 0x4b, 0xd7, 0x05, 0x09, 0xd8, 0x5e, 0x7c,
      0xf1, 0x8e, 0x68, 0xff, 0xa0, 0x9e, 0xb1, 0x4d,
      0x70, 0xf8, 0x20, 0xd9, 0x35, 0xcf, 0x02, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Wind__TYPE_NAME[] = "px4/msg/Wind";

// Define type names, field names, and default values
static char px4__msg__Wind__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Wind__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__Wind__FIELD_NAME__windspeed_north[] = "windspeed_north";
static char px4__msg__Wind__FIELD_NAME__windspeed_east[] = "windspeed_east";
static char px4__msg__Wind__FIELD_NAME__variance_north[] = "variance_north";
static char px4__msg__Wind__FIELD_NAME__variance_east[] = "variance_east";
static char px4__msg__Wind__FIELD_NAME__tas_innov[] = "tas_innov";
static char px4__msg__Wind__FIELD_NAME__tas_innov_var[] = "tas_innov_var";
static char px4__msg__Wind__FIELD_NAME__beta_innov[] = "beta_innov";
static char px4__msg__Wind__FIELD_NAME__beta_innov_var[] = "beta_innov_var";

static rosidl_runtime_c__type_description__Field px4__msg__Wind__FIELDS[] = {
  {
    {px4__msg__Wind__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__windspeed_north, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__windspeed_east, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__variance_north, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__variance_east, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__tas_innov, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__tas_innov_var, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__beta_innov, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Wind__FIELD_NAME__beta_innov_var, 14, 14},
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
px4__msg__Wind__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Wind__TYPE_NAME, 12, 12},
      {px4__msg__Wind__FIELDS, 10, 10},
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
  "float32 windspeed_north\\t\\t# Wind component in north / X direction (m/sec)\n"
  "float32 windspeed_east\\t\\t# Wind component in east / Y direction (m/sec)\n"
  "\n"
  "float32 variance_north\\t\\t# Wind estimate error variance in north / X direction (m/sec)**2 - set to zero (no uncertainty) if not estimated\n"
  "float32 variance_east\\t\\t# Wind estimate error variance in east / Y direction (m/sec)**2 - set to zero (no uncertainty) if not estimated\n"
  "\n"
  "float32 tas_innov \\t\\t# True airspeed innovation\n"
  "float32 tas_innov_var \\t\\t# True airspeed innovation variance\n"
  "\n"
  "float32 beta_innov \\t\\t# Sideslip measurement innovation\n"
  "float32 beta_innov_var \\t\\t# Sideslip measurement innovation variance\n"
  "\n"
  "# TOPICS wind estimator_wind";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Wind__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Wind__TYPE_NAME, 12, 12},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 818, 818},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Wind__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Wind__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
