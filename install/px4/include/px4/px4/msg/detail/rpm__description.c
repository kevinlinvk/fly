// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/Rpm.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rpm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__Rpm__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xe2, 0xc6, 0x0e, 0x6b, 0x18, 0xc7, 0xa0,
      0x22, 0x31, 0xcc, 0x67, 0x7f, 0xb6, 0x47, 0x8c,
      0x5f, 0xe9, 0x8c, 0x23, 0x20, 0x3d, 0xbc, 0x0f,
      0xc0, 0xcd, 0x79, 0xcc, 0xad, 0x6d, 0xaf, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__Rpm__TYPE_NAME[] = "px4/msg/Rpm";

// Define type names, field names, and default values
static char px4__msg__Rpm__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__Rpm__FIELD_NAME__rpm_estimate[] = "rpm_estimate";
static char px4__msg__Rpm__FIELD_NAME__rpm_raw[] = "rpm_raw";

static rosidl_runtime_c__type_description__Field px4__msg__Rpm__FIELDS[] = {
  {
    {px4__msg__Rpm__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Rpm__FIELD_NAME__rpm_estimate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__Rpm__FIELD_NAME__rpm_raw, 7, 7},
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
px4__msg__Rpm__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__Rpm__TYPE_NAME, 11, 11},
      {px4__msg__Rpm__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "# rpm values of 0.0 mean within a timeout there is no movement measured\n"
  "float32 rpm_estimate # filtered revolutions per minute\n"
  "float32 rpm_raw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__Rpm__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__Rpm__TYPE_NAME, 11, 11},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 202, 202},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__Rpm__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__Rpm__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
