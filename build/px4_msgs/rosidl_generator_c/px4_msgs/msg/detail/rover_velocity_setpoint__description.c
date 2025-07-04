// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RoverVelocitySetpoint.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/rover_velocity_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RoverVelocitySetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0x6a, 0xd5, 0x75, 0x00, 0xe1, 0x40, 0x75,
      0x3f, 0x0d, 0x6c, 0xb3, 0x2f, 0x0d, 0xef, 0x76,
      0xb4, 0x40, 0xa8, 0x45, 0x0a, 0xe1, 0x69, 0xd1,
      0x1e, 0x1d, 0xbe, 0x43, 0x47, 0xfe, 0xc8, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RoverVelocitySetpoint__TYPE_NAME[] = "px4_msgs/msg/RoverVelocitySetpoint";

// Define type names, field names, and default values
static char px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__speed[] = "speed";
static char px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__bearing[] = "bearing";
static char px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RoverVelocitySetpoint__FIELDS[] = {
  {
    {px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__bearing, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverVelocitySetpoint__FIELD_NAME__yaw, 3, 3},
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
px4_msgs__msg__RoverVelocitySetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RoverVelocitySetpoint__TYPE_NAME, 34, 34},
      {px4_msgs__msg__RoverVelocitySetpoint__FIELDS, 4, 4},
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
  "float32 speed   # [m/s] [-inf, inf] Speed setpoint (Backwards driving if negative)\n"
  "float32 bearing # [rad] [-pi,pi] from North. [invalid: NAN, speed is defined in body x direction]\n"
  "float32 yaw \\t# [rad] [-pi, pi] (Mecanum only, Optional, defaults to current vehicle yaw) Vehicle yaw setpoint in NED frame";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RoverVelocitySetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RoverVelocitySetpoint__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 363, 363},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RoverVelocitySetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RoverVelocitySetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
