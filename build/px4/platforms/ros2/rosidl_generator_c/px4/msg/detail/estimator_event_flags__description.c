// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/estimator_event_flags__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__EstimatorEventFlags__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xe6, 0xae, 0x64, 0x19, 0xb6, 0x99, 0x6e,
      0x1a, 0xe9, 0xb0, 0xfb, 0x69, 0x03, 0x21, 0x10,
      0x7f, 0x75, 0x50, 0x8f, 0xea, 0x82, 0x78, 0x8f,
      0xab, 0xad, 0x19, 0x00, 0xa4, 0xa6, 0x2e, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__EstimatorEventFlags__TYPE_NAME[] = "px4/msg/EstimatorEventFlags";

// Define type names, field names, and default values
static char px4__msg__EstimatorEventFlags__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__information_event_changes[] = "information_event_changes";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__gps_checks_passed[] = "gps_checks_passed";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_gps[] = "reset_vel_to_gps";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_flow[] = "reset_vel_to_flow";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_vision[] = "reset_vel_to_vision";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_zero[] = "reset_vel_to_zero";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_last_known[] = "reset_pos_to_last_known";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_gps[] = "reset_pos_to_gps";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_vision[] = "reset_pos_to_vision";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__starting_gps_fusion[] = "starting_gps_fusion";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_pos_fusion[] = "starting_vision_pos_fusion";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_vel_fusion[] = "starting_vision_vel_fusion";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_yaw_fusion[] = "starting_vision_yaw_fusion";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__yaw_aligned_to_imu_gps[] = "yaw_aligned_to_imu_gps";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_baro[] = "reset_hgt_to_baro";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_gps[] = "reset_hgt_to_gps";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_rng[] = "reset_hgt_to_rng";
static char px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_ev[] = "reset_hgt_to_ev";

static rosidl_runtime_c__type_description__Field px4__msg__EstimatorEventFlags__FIELDS[] = {
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__information_event_changes, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__gps_checks_passed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_gps, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_flow, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_vision, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_vel_to_zero, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_last_known, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_gps, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_pos_to_vision, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__starting_gps_fusion, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_pos_fusion, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_vel_fusion, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__starting_vision_yaw_fusion, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__yaw_aligned_to_imu_gps, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_baro, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_gps, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_rng, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__EstimatorEventFlags__FIELD_NAME__reset_hgt_to_ev, 15, 15},
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
px4__msg__EstimatorEventFlags__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__EstimatorEventFlags__TYPE_NAME, 27, 27},
      {px4__msg__EstimatorEventFlags__FIELDS, 20, 20},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                        # time since system start (microseconds)\n"
  "uint64 timestamp_sample                 # the timestamp of the raw data (microseconds)\n"
  "\n"
  "# information events\n"
  "uint32 information_event_changes        # number of information event changes\n"
  "bool gps_checks_passed                  #  0 - true when gps quality checks are passing passed\n"
  "bool reset_vel_to_gps                   #  1 - true when the velocity states are reset to the gps measurement\n"
  "bool reset_vel_to_flow                  #  2 - true when the velocity states are reset using the optical flow measurement\n"
  "bool reset_vel_to_vision                #  3 - true when the velocity states are reset to the vision system measurement\n"
  "bool reset_vel_to_zero                  #  4 - true when the velocity states are reset to zero\n"
  "bool reset_pos_to_last_known            #  5 - true when the position states are reset to the last known position\n"
  "bool reset_pos_to_gps                   #  6 - true when the position states are reset to the gps measurement\n"
  "bool reset_pos_to_vision                #  7 - true when the position states are reset to the vision system measurement\n"
  "bool starting_gps_fusion                #  8 - true when the filter starts using gps measurements to correct the state estimates\n"
  "bool starting_vision_pos_fusion         #  9 - true when the filter starts using vision system position measurements to correct the state estimates\n"
  "bool starting_vision_vel_fusion         # 10 - true when the filter starts using vision system velocity measurements to correct the state estimates\n"
  "bool starting_vision_yaw_fusion         # 11 - true when the filter starts using vision system yaw  measurements to correct the state estimates\n"
  "bool yaw_aligned_to_imu_gps             # 12 - true when the filter resets the yaw to an estimate derived from IMU and GPS data\n"
  "bool reset_hgt_to_baro                  # 13 - true when the vertical position state is reset to the baro measurement\n"
  "bool reset_hgt_to_gps                   # 14 - true when the vertical position state is reset to the gps measurement\n"
  "bool reset_hgt_to_rng                   # 15 - true when the vertical position state is reset to the rng measurement\n"
  "bool reset_hgt_to_ev                    # 16 - true when the vertical position state is reset to the ev measurement";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__EstimatorEventFlags__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__EstimatorEventFlags__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2319, 2319},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__EstimatorEventFlags__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__EstimatorEventFlags__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
