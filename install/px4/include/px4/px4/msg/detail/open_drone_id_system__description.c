// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/open_drone_id_system__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__OpenDroneIdSystem__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xa4, 0x86, 0x5b, 0x20, 0xba, 0xfe, 0xab,
      0x61, 0x38, 0xed, 0x14, 0x9e, 0x01, 0xa7, 0x94,
      0xe7, 0xc0, 0x14, 0xf1, 0xc2, 0xbf, 0xb0, 0x98,
      0x91, 0x18, 0xa0, 0xf2, 0x3e, 0x70, 0x2f, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__OpenDroneIdSystem__TYPE_NAME[] = "px4/msg/OpenDroneIdSystem";

// Define type names, field names, and default values
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__id_or_mac[] = "id_or_mac";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_location_type[] = "operator_location_type";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__classification_type[] = "classification_type";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_latitude[] = "operator_latitude";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_longitude[] = "operator_longitude";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__area_count[] = "area_count";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__area_radius[] = "area_radius";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__area_ceiling[] = "area_ceiling";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__area_floor[] = "area_floor";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__category_eu[] = "category_eu";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__class_eu[] = "class_eu";
static char px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_altitude_geo[] = "operator_altitude_geo";

static rosidl_runtime_c__type_description__Field px4__msg__OpenDroneIdSystem__FIELDS[] = {
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__id_or_mac, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      20,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_location_type, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__classification_type, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_latitude, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_longitude, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__area_count, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__area_radius, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__area_ceiling, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__area_floor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__category_eu, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__class_eu, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OpenDroneIdSystem__FIELD_NAME__operator_altitude_geo, 21, 21},
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
px4__msg__OpenDroneIdSystem__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__OpenDroneIdSystem__TYPE_NAME, 25, 25},
      {px4__msg__OpenDroneIdSystem__FIELDS, 13, 13},
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
  "uint8 operator_location_type\n"
  "uint8 classification_type\n"
  "int32 operator_latitude\n"
  "int32 operator_longitude\n"
  "uint16 area_count\n"
  "uint16 area_radius\n"
  "float32 area_ceiling\n"
  "float32 area_floor\n"
  "uint8 category_eu\n"
  "uint8 class_eu\n"
  "float32 operator_altitude_geo";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__OpenDroneIdSystem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__OpenDroneIdSystem__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 281, 281},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__OpenDroneIdSystem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__OpenDroneIdSystem__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
