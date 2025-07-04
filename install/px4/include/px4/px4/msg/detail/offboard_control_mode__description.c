// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/offboard_control_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__OffboardControlMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x73, 0x83, 0xe2, 0xdc, 0x2a, 0x8d, 0x9e,
      0x81, 0x42, 0x40, 0xed, 0x87, 0x72, 0xb7, 0x93,
      0x64, 0xd0, 0x3c, 0xd9, 0xc2, 0x3b, 0xc0, 0xc2,
      0x8b, 0xe6, 0xfd, 0x09, 0xe9, 0xd3, 0x5c, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__OffboardControlMode__TYPE_NAME[] = "px4/msg/OffboardControlMode";

// Define type names, field names, and default values
static char px4__msg__OffboardControlMode__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__OffboardControlMode__FIELD_NAME__position[] = "position";
static char px4__msg__OffboardControlMode__FIELD_NAME__velocity[] = "velocity";
static char px4__msg__OffboardControlMode__FIELD_NAME__acceleration[] = "acceleration";
static char px4__msg__OffboardControlMode__FIELD_NAME__attitude[] = "attitude";
static char px4__msg__OffboardControlMode__FIELD_NAME__body_rate[] = "body_rate";
static char px4__msg__OffboardControlMode__FIELD_NAME__thrust_and_torque[] = "thrust_and_torque";
static char px4__msg__OffboardControlMode__FIELD_NAME__direct_actuator[] = "direct_actuator";

static rosidl_runtime_c__type_description__Field px4__msg__OffboardControlMode__FIELDS[] = {
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__attitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__body_rate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__thrust_and_torque, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__OffboardControlMode__FIELD_NAME__direct_actuator, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__OffboardControlMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__OffboardControlMode__TYPE_NAME, 27, 27},
      {px4__msg__OffboardControlMode__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Off-board control mode\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "bool position\n"
  "bool velocity\n"
  "bool acceleration\n"
  "bool attitude\n"
  "bool body_rate\n"
  "bool thrust_and_torque\n"
  "bool direct_actuator";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__OffboardControlMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__OffboardControlMode__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 205, 205},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__OffboardControlMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__OffboardControlMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
