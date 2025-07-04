// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/follow_target_estimator__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__FollowTargetEstimator__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x91, 0xb7, 0xbc, 0x2a, 0x1a, 0xac, 0x6f,
      0x28, 0x9b, 0xe5, 0xc4, 0x63, 0x92, 0x88, 0x99,
      0x84, 0x32, 0xa6, 0xdc, 0xa4, 0xa7, 0xcc, 0xc2,
      0xf5, 0xea, 0x2d, 0x94, 0x4f, 0xce, 0xec, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__FollowTargetEstimator__TYPE_NAME[] = "px4/msg/FollowTargetEstimator";

// Define type names, field names, and default values
static char px4__msg__FollowTargetEstimator__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__last_filter_reset_timestamp[] = "last_filter_reset_timestamp";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__valid[] = "valid";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__stale[] = "stale";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__lat_est[] = "lat_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__lon_est[] = "lon_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__alt_est[] = "alt_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__pos_est[] = "pos_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__vel_est[] = "vel_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__acc_est[] = "acc_est";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__prediction_count[] = "prediction_count";
static char px4__msg__FollowTargetEstimator__FIELD_NAME__fusion_count[] = "fusion_count";

static rosidl_runtime_c__type_description__Field px4__msg__FollowTargetEstimator__FIELDS[] = {
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__last_filter_reset_timestamp, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__stale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__lat_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__lon_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__alt_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__pos_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__vel_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__acc_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__prediction_count, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__FollowTargetEstimator__FIELD_NAME__fusion_count, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__FollowTargetEstimator__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__FollowTargetEstimator__TYPE_NAME, 29, 29},
      {px4__msg__FollowTargetEstimator__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                     # time since system start (microseconds)\n"
  "uint64 last_filter_reset_timestamp   # time of last filter reset (microseconds)\n"
  "\n"
  "bool valid              # True if estimator states are okay to be used\n"
  "bool stale              # True if estimator stopped receiving follow_target messages for some time. The estimate can still be valid, though it might be inaccurate.\n"
  "\n"
  "float64 lat_est         # Estimated target latitude\n"
  "float64 lon_est         # Estimated target longitude\n"
  "float32 alt_est         # Estimated target altitude\n"
  "\n"
  "float32[3] pos_est      # Estimated target NED position (m)\n"
  "float32[3] vel_est      # Estimated target NED velocity (m/s)\n"
  "float32[3] acc_est      # Estimated target NED acceleration (m^2/s)\n"
  "\n"
  "uint64 prediction_count\n"
  "uint64 fusion_count";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__FollowTargetEstimator__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__FollowTargetEstimator__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 788, 788},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__FollowTargetEstimator__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__FollowTargetEstimator__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
