// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/camera_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__CameraStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x7b, 0x7e, 0xd6, 0x89, 0xb3, 0x6b, 0x63,
      0x86, 0x87, 0x11, 0x2e, 0x03, 0x09, 0xc8, 0x6f,
      0xce, 0x31, 0xb8, 0x70, 0x8c, 0x0f, 0xe3, 0xeb,
      0xe2, 0x9b, 0x9d, 0x48, 0x69, 0x33, 0xf8, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__CameraStatus__TYPE_NAME[] = "px4/msg/CameraStatus";

// Define type names, field names, and default values
static char px4__msg__CameraStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__CameraStatus__FIELD_NAME__active_sys_id[] = "active_sys_id";
static char px4__msg__CameraStatus__FIELD_NAME__active_comp_id[] = "active_comp_id";

static rosidl_runtime_c__type_description__Field px4__msg__CameraStatus__FIELDS[] = {
  {
    {px4__msg__CameraStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraStatus__FIELD_NAME__active_sys_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__CameraStatus__FIELD_NAME__active_comp_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__CameraStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__CameraStatus__TYPE_NAME, 20, 20},
      {px4__msg__CameraStatus__FIELDS, 3, 3},
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
  "\n"
  "uint8 active_sys_id\\t\\t# mavlink system id of the currently active camera\n"
  "uint8 active_comp_id \\t# mavlink component id of currently active camera";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__CameraStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__CameraStatus__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__CameraStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__CameraStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
