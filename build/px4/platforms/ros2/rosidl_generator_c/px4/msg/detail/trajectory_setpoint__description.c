// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/TrajectorySetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/trajectory_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__TrajectorySetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x96, 0x2e, 0x32, 0xa5, 0x98, 0x62, 0xd2,
      0xf8, 0xdf, 0x3a, 0x99, 0x6c, 0xed, 0xa9, 0x3e,
      0xbf, 0x46, 0xa1, 0xfa, 0x0e, 0xda, 0x61, 0x42,
      0x7e, 0x88, 0x81, 0x15, 0x48, 0xbe, 0xf9, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__TrajectorySetpoint__TYPE_NAME[] = "px4/msg/TrajectorySetpoint";

// Define type names, field names, and default values
static char px4__msg__TrajectorySetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__position[] = "position";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__velocity[] = "velocity";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__acceleration[] = "acceleration";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__jerk[] = "jerk";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__yaw[] = "yaw";
static char px4__msg__TrajectorySetpoint__FIELD_NAME__yawspeed[] = "yawspeed";

static rosidl_runtime_c__type_description__Field px4__msg__TrajectorySetpoint__FIELDS[] = {
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__jerk, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__TrajectorySetpoint__FIELD_NAME__yawspeed, 8, 8},
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
px4__msg__TrajectorySetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__TrajectorySetpoint__TYPE_NAME, 26, 26},
      {px4__msg__TrajectorySetpoint__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Trajectory setpoint in NED frame\n"
  "# Input to PID position controller.\n"
  "# Needs to be kinematically consistent and feasible for smooth flight.\n"
  "# setting a value to NaN means the state should not be controlled\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "# NED local world frame\n"
  "float32[3] position # in meters\n"
  "float32[3] velocity # in meters/second\n"
  "float32[3] acceleration # in meters/second^2\n"
  "float32[3] jerk # in meters/second^3 (for logging only)\n"
  "\n"
  "float32 yaw # euler angle of desired attitude in radians -PI..+PI\n"
  "float32 yawspeed # angular velocity around NED frame z-axis in radians/second";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__TrajectorySetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__TrajectorySetpoint__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 637, 637},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__TrajectorySetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__TrajectorySetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
