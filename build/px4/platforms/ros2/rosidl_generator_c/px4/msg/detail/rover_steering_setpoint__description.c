// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/rover_steering_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__RoverSteeringSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0x9c, 0x21, 0xb1, 0xfc, 0x87, 0x0f, 0x9b,
      0x87, 0xb0, 0x6b, 0x1b, 0xb8, 0xeb, 0xae, 0x12,
      0x0f, 0x94, 0x5d, 0x36, 0xb9, 0x1c, 0x3a, 0x89,
      0x9c, 0xac, 0x6d, 0x82, 0x83, 0x36, 0x8e, 0xc3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__RoverSteeringSetpoint__TYPE_NAME[] = "px4/msg/RoverSteeringSetpoint";

// Define type names, field names, and default values
static char px4__msg__RoverSteeringSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__RoverSteeringSetpoint__FIELD_NAME__normalized_steering_setpoint[] = "normalized_steering_setpoint";

static rosidl_runtime_c__type_description__Field px4__msg__RoverSteeringSetpoint__FIELDS[] = {
  {
    {px4__msg__RoverSteeringSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__RoverSteeringSetpoint__FIELD_NAME__normalized_steering_setpoint, 28, 28},
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
px4__msg__RoverSteeringSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__RoverSteeringSetpoint__TYPE_NAME, 29, 29},
      {px4__msg__RoverSteeringSetpoint__FIELDS, 2, 2},
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
  "float32 normalized_steering_setpoint # [-1, 1] Positiv = Turn right, Negativ: Turn left (Ackermann: Steering angle, Differential/Mecanum: Speed difference between the left and right wheels)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__RoverSteeringSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__RoverSteeringSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 249, 249},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__RoverSteeringSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__RoverSteeringSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
