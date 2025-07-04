// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/fixed_wing_longitudinal_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FixedWingLongitudinalSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x57, 0x28, 0x3f, 0x2a, 0xc1, 0x51, 0x79,
      0x9c, 0x39, 0x4e, 0x97, 0xe9, 0xcd, 0x67, 0x5a,
      0xd5, 0xff, 0x92, 0xbb, 0xda, 0xc6, 0xa3, 0xba,
      0xf5, 0xb3, 0x89, 0x94, 0x16, 0xe6, 0x8b, 0xde,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FixedWingLongitudinalSetpoint__TYPE_NAME[] = "px4/msg/FixedWingLongitudinalSetpoint";

// Define type names, field names, and default values
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__altitude[] = "altitude";
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__height_rate[] = "height_rate";
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__equivalent_airspeed[] = "equivalent_airspeed";
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__pitch_direct[] = "pitch_direct";
static char px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__throttle_direct[] = "throttle_direct";

static rosidl_runtime_c__type_description__Field px4__msg__FixedWingLongitudinalSetpoint__FIELDS[] = {
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__height_rate, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__equivalent_airspeed, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__pitch_direct, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FixedWingLongitudinalSetpoint__FIELD_NAME__throttle_direct, 15, 15},
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
px4__msg__FixedWingLongitudinalSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FixedWingLongitudinalSetpoint__TYPE_NAME, 37, 37},
      {px4__msg__FixedWingLongitudinalSetpoint__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Fixed Wing Longitudinal Setpoint message\n"
  "# Used by the fw_lateral_longitudinal_control module\n"
  "# If pitch_direct and throttle_direct are not both finite, then the controller relies on altitude/height_rate and equivalent_airspeed to control vertical motion.\n"
  "# If both altitude and height_rate are NAN, the controller maintains the current altitude.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp                        # time since system start (microseconds)\n"
  "\n"
  "float32 altitude  \\t\\t\\t# [m] Altitude setpoint AMSL, not controlled directly if NAN or if height_rate is finite\n"
  "float32 height_rate \\t\\t\\t# [m/s] [ENU] Scalar height rate setpoint. NAN if not controlled directly\n"
  "float32 equivalent_airspeed \\t\\t# [m/s] [@range 0, inf] Scalar equivalent airspeed setpoint. NAN if system default should be used\n"
  "float32 pitch_direct \\t\\t\\t# [rad] [@range -pi, pi] [FRD] NAN if not controlled, overrides total energy controller\n"
  "float32 throttle_direct \\t\\t# [norm] [@range 0,1] NAN if not controlled, overrides total energy controller";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FixedWingLongitudinalSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FixedWingLongitudinalSetpoint__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1012, 1012},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FixedWingLongitudinalSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FixedWingLongitudinalSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
