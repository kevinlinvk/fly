// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DatamanRequest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/dataman_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DatamanRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xda, 0x52, 0x72, 0x23, 0x79, 0xe6, 0x4f,
      0x73, 0x1d, 0x71, 0xf8, 0x5d, 0xfc, 0x52, 0xb4,
      0x43, 0x9b, 0x0c, 0xca, 0xc8, 0x91, 0x50, 0x08,
      0x84, 0x97, 0x2d, 0x16, 0x34, 0xf0, 0x8f, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DatamanRequest__TYPE_NAME[] = "px4/msg/DatamanRequest";

// Define type names, field names, and default values
static char px4__msg__DatamanRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DatamanRequest__FIELD_NAME__client_id[] = "client_id";
static char px4__msg__DatamanRequest__FIELD_NAME__request_type[] = "request_type";
static char px4__msg__DatamanRequest__FIELD_NAME__item[] = "item";
static char px4__msg__DatamanRequest__FIELD_NAME__index[] = "index";
static char px4__msg__DatamanRequest__FIELD_NAME__data[] = "data";
static char px4__msg__DatamanRequest__FIELD_NAME__data_length[] = "data_length";

static rosidl_runtime_c__type_description__Field px4__msg__DatamanRequest__FIELDS[] = {
  {
    {px4__msg__DatamanRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__client_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__request_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__item, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      56,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DatamanRequest__FIELD_NAME__data_length, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__DatamanRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DatamanRequest__TYPE_NAME, 22, 22},
      {px4__msg__DatamanRequest__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 client_id\n"
  "uint8 request_type\\t# id/read/write/clear\n"
  "uint8 item\\t\\t\\t# dm_item_t\n"
  "uint32 index\n"
  "uint8[56] data\n"
  "uint32 data_length";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DatamanRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DatamanRequest__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 188, 188},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DatamanRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DatamanRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
