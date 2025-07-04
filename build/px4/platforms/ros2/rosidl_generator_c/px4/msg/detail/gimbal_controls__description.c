// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GimbalControls.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gimbal_controls__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GimbalControls__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x00, 0x35, 0x78, 0x05, 0x49, 0xb1, 0x1b, 0xbc,
      0x03, 0xa5, 0xd0, 0xfd, 0x0c, 0x1c, 0x23, 0xa7,
      0xed, 0x9e, 0x6e, 0xfc, 0x41, 0xac, 0xd9, 0xe1,
      0x30, 0x49, 0xfa, 0xed, 0x92, 0x0d, 0x6f, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GimbalControls__TYPE_NAME[] = "px4/msg/GimbalControls";

// Define type names, field names, and default values
static char px4__msg__GimbalControls__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GimbalControls__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__GimbalControls__FIELD_NAME__control[] = "control";

static rosidl_runtime_c__type_description__Field px4__msg__GimbalControls__FIELDS[] = {
  {
    {px4__msg__GimbalControls__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalControls__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalControls__FIELD_NAME__control, 7, 7},
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
px4__msg__GimbalControls__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GimbalControls__TYPE_NAME, 22, 22},
      {px4__msg__GimbalControls__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "uint8 INDEX_ROLL = 0\n"
  "uint8 INDEX_PITCH = 1\n"
  "uint8 INDEX_YAW = 2\n"
  "\n"
  "uint64 timestamp_sample\\t    # the timestamp the data this control response is based on was sampled\n"
  "float32[3] control";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GimbalControls__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GimbalControls__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 242, 242},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GimbalControls__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GimbalControls__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
