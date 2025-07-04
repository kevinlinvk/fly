// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/OpenDroneIdSelfId.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/open_drone_id_self_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__OpenDroneIdSelfId__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xf1, 0x73, 0x21, 0x54, 0x50, 0x70, 0x00,
      0x45, 0x7f, 0x3b, 0xe8, 0x0f, 0x53, 0x8f, 0xc2,
      0xb3, 0xc1, 0xa5, 0x1c, 0x3f, 0x50, 0xd2, 0x06,
      0xcb, 0x08, 0xc3, 0x1e, 0x1b, 0x20, 0x4e, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__OpenDroneIdSelfId__TYPE_NAME[] = "px4/msg/OpenDroneIdSelfId";

// Define type names, field names, and default values
static char px4__msg__OpenDroneIdSelfId__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__OpenDroneIdSelfId__FIELD_NAME__id_or_mac[] = "id_or_mac";
static char px4__msg__OpenDroneIdSelfId__FIELD_NAME__description_type[] = "description_type";
static char px4__msg__OpenDroneIdSelfId__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field px4__msg__OpenDroneIdSelfId__FIELDS[] = {
  {
    {px4__msg__OpenDroneIdSelfId__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSelfId__FIELD_NAME__id_or_mac, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      20,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSelfId__FIELD_NAME__description_type, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSelfId__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      23,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__OpenDroneIdSelfId__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__OpenDroneIdSelfId__TYPE_NAME, 25, 25},
      {px4__msg__OpenDroneIdSelfId__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\n"
  "uint8[20] id_or_mac\n"
  "uint8 description_type\n"
  "char[23] description";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__OpenDroneIdSelfId__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__OpenDroneIdSelfId__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__OpenDroneIdSelfId__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__OpenDroneIdSelfId__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
