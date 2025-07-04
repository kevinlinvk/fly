// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleThrustSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_thrust_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleThrustSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x11, 0xb7, 0x36, 0x03, 0xee, 0x65, 0x44,
      0xd2, 0x36, 0x4d, 0x69, 0xfa, 0x38, 0xcb, 0xf1,
      0x5c, 0xbb, 0x44, 0x0f, 0x78, 0xce, 0x63, 0x7b,
      0x59, 0xd2, 0x19, 0xa0, 0x00, 0x7c, 0x6c, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleThrustSetpoint__TYPE_NAME[] = "px4/msg/VehicleThrustSetpoint";

// Define type names, field names, and default values
static char px4__msg__VehicleThrustSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleThrustSetpoint__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleThrustSetpoint__FIELD_NAME__xyz[] = "xyz";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleThrustSetpoint__FIELDS[] = {
  {
    {px4__msg__VehicleThrustSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleThrustSetpoint__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleThrustSetpoint__FIELD_NAME__xyz, 3, 3},
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
px4__msg__VehicleThrustSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleThrustSetpoint__TYPE_NAME, 29, 29},
      {px4__msg__VehicleThrustSetpoint__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 timestamp        # time since system start (microseconds)\n"
  "uint64 timestamp_sample # timestamp of the data sample on which this message is based (microseconds)\n"
  "\n"
  "float32[3] xyz          # thrust setpoint along X, Y, Z body axis [-1, 1]\n"
  "\n"
  "# TOPICS vehicle_thrust_setpoint\n"
  "# TOPICS vehicle_thrust_setpoint_virtual_fw vehicle_thrust_setpoint_virtual_mc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleThrustSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleThrustSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 355, 355},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleThrustSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleThrustSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
