// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/follow_target_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FollowTargetStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0xb6, 0x5a, 0x31, 0x7e, 0xb5, 0x83, 0x5d,
      0xae, 0xce, 0x0b, 0x78, 0xb7, 0xdc, 0x8f, 0x9a,
      0x2d, 0x84, 0xe0, 0x8f, 0x4d, 0xd6, 0xaa, 0xe1,
      0x87, 0x2f, 0x03, 0xc3, 0x6f, 0x7b, 0x41, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FollowTargetStatus__TYPE_NAME[] = "px4/msg/FollowTargetStatus";

// Define type names, field names, and default values
static char px4__msg__FollowTargetStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FollowTargetStatus__FIELD_NAME__tracked_target_course[] = "tracked_target_course";
static char px4__msg__FollowTargetStatus__FIELD_NAME__follow_angle[] = "follow_angle";
static char px4__msg__FollowTargetStatus__FIELD_NAME__orbit_angle_setpoint[] = "orbit_angle_setpoint";
static char px4__msg__FollowTargetStatus__FIELD_NAME__angular_rate_setpoint[] = "angular_rate_setpoint";
static char px4__msg__FollowTargetStatus__FIELD_NAME__desired_position_raw[] = "desired_position_raw";
static char px4__msg__FollowTargetStatus__FIELD_NAME__in_emergency_ascent[] = "in_emergency_ascent";
static char px4__msg__FollowTargetStatus__FIELD_NAME__gimbal_pitch[] = "gimbal_pitch";

static rosidl_runtime_c__type_description__Field px4__msg__FollowTargetStatus__FIELDS[] = {
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__tracked_target_course, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__follow_angle, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__orbit_angle_setpoint, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__angular_rate_setpoint, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__desired_position_raw, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__in_emergency_ascent, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetStatus__FIELD_NAME__gimbal_pitch, 12, 12},
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
px4__msg__FollowTargetStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FollowTargetStatus__TYPE_NAME, 26, 26},
      {px4__msg__FollowTargetStatus__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                  # [microseconds] time since system start\n"
  "\n"
  "float32 tracked_target_course     # [rad] Tracked target course in NED local frame (North is course zero)\n"
  "float32 follow_angle              # [rad] Current follow angle setting\n"
  "\n"
  "float32 orbit_angle_setpoint      # [rad] Current orbit angle setpoint from the smooth trajectory generator\n"
  "float32 angular_rate_setpoint     # [rad/s] Angular rate commanded from Jerk-limited Orbit Angle trajectory for Orbit Angle\n"
  "\n"
  "float32[3] desired_position_raw   # [m] Raw 'idealistic' desired drone position if a drone could teleport from place to places\n"
  "\n"
  "bool in_emergency_ascent          # [bool] True when doing emergency ascent (when distance to ground is below safety altitude)\n"
  "float32 gimbal_pitch              # [rad] Gimbal pitch commanded to track target in the center of the frame";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FollowTargetStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FollowTargetStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 850, 850},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FollowTargetStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FollowTargetStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
