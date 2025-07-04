// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverAttitudeStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_attitude_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverAttitudeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xbc, 0xdc, 0xe5, 0xd8, 0x04, 0xf9, 0x4a,
      0xc4, 0x4e, 0x53, 0x13, 0x65, 0xa7, 0x9a, 0x40,
      0x2f, 0xba, 0xf4, 0x83, 0x23, 0xd2, 0x04, 0xf8,
      0xf9, 0x5d, 0x7a, 0x92, 0x89, 0x99, 0xc9, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverAttitudeStatus__TYPE_NAME[] = "px4/msg/RoverAttitudeStatus";

// Define type names, field names, and default values
static char px4__msg__RoverAttitudeStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverAttitudeStatus__FIELD_NAME__measured_yaw[] = "measured_yaw";
static char px4__msg__RoverAttitudeStatus__FIELD_NAME__adjusted_yaw_setpoint[] = "adjusted_yaw_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__RoverAttitudeStatus__FIELDS[] = {
  {
    {px4__msg__RoverAttitudeStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAttitudeStatus__FIELD_NAME__measured_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverAttitudeStatus__FIELD_NAME__adjusted_yaw_setpoint, 21, 21},
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
px4__msg__RoverAttitudeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverAttitudeStatus__TYPE_NAME, 27, 27},
      {px4__msg__RoverAttitudeStatus__FIELDS, 3, 3},
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
  "float32 measured_yaw          # [rad/s] Measured yaw rate\n"
  "float32 adjusted_yaw_setpoint # [rad/s] Yaw setpoint that is being tracked (Applied slew rates)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverAttitudeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverAttitudeStatus__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 213, 213},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverAttitudeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverAttitudeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
