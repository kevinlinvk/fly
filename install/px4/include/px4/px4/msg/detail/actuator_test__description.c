// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/ActuatorTest.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/actuator_test__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__ActuatorTest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x29, 0x23, 0x3e, 0xc3, 0xfb, 0xcb, 0x8c,
      0xce, 0xdd, 0x9e, 0xca, 0x3f, 0x44, 0xfb, 0xd5,
      0x8a, 0x53, 0x22, 0xb6, 0xfc, 0xe1, 0x91, 0x01,
      0xa7, 0xf7, 0x98, 0xfe, 0xbe, 0x32, 0xa5, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__ActuatorTest__TYPE_NAME[] = "px4/msg/ActuatorTest";

// Define type names, field names, and default values
static char px4__msg__ActuatorTest__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__ActuatorTest__FIELD_NAME__action[] = "action";
static char px4__msg__ActuatorTest__FIELD_NAME__function[] = "function";
static char px4__msg__ActuatorTest__FIELD_NAME__value[] = "value";
static char px4__msg__ActuatorTest__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field px4__msg__ActuatorTest__FIELDS[] = {
  {
    {px4__msg__ActuatorTest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorTest__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorTest__FIELD_NAME__function, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorTest__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__ActuatorTest__FIELD_NAME__timeout_ms, 10, 10},
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
px4__msg__ActuatorTest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__ActuatorTest__TYPE_NAME, 20, 20},
      {px4__msg__ActuatorTest__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "# Topic to test individual actuator output functions\n"
  "\n"
  "uint8 ACTION_RELEASE_CONTROL = 0\\t# exit test mode for the given function\n"
  "uint8 ACTION_DO_CONTROL = 1\\t\\t\\t# enable actuator test mode\n"
  "\n"
  "uint8 FUNCTION_MOTOR1 = 101\n"
  "uint8 MAX_NUM_MOTORS  = 12\n"
  "uint8 FUNCTION_SERVO1 = 201\n"
  "uint8 MAX_NUM_SERVOS  = 8\n"
  "\n"
  "uint8 action\\t\\t\\t\\t\\t# one of ACTION_*\n"
  "uint16 function\\t\\t\\t\\t\\t# actuator output function\n"
  "float32 value\\t\\t\\t\\t\\t# range: [-1, 1], where 1 means maximum positive output,\n"
  "\\t\\t\\t\\t\\t\\t\\t\\t# 0 to center servos or minimum motor thrust,\n"
  "                   \\t\\t\\t\\t# -1 maximum negative (if not supported by the motors, <0 maps to NaN),\n"
  "                   \\t\\t\\t\\t# and NaN maps to disarmed (stop the motors)\n"
  "uint32 timeout_ms\\t\\t\\t\\t# timeout in ms after which to exit test mode (if 0, do not time out)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16                     # >= MAX_NUM_MOTORS to support code in esc_calibration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__ActuatorTest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__ActuatorTest__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 927, 927},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__ActuatorTest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__ActuatorTest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
