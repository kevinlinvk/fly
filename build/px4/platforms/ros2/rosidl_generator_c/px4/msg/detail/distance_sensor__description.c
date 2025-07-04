// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/DistanceSensor.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/distance_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__DistanceSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xc4, 0xc8, 0xce, 0xb5, 0xfb, 0x9d, 0x91,
      0xa8, 0xf5, 0xb8, 0xd9, 0x46, 0x54, 0x48, 0x89,
      0x53, 0x0a, 0xb6, 0x71, 0x6a, 0x28, 0x9d, 0xa2,
      0x39, 0xa6, 0xfc, 0xd7, 0x00, 0x97, 0x70, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__DistanceSensor__TYPE_NAME[] = "px4/msg/DistanceSensor";

// Define type names, field names, and default values
static char px4__msg__DistanceSensor__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__DistanceSensor__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__DistanceSensor__FIELD_NAME__min_distance[] = "min_distance";
static char px4__msg__DistanceSensor__FIELD_NAME__max_distance[] = "max_distance";
static char px4__msg__DistanceSensor__FIELD_NAME__current_distance[] = "current_distance";
static char px4__msg__DistanceSensor__FIELD_NAME__variance[] = "variance";
static char px4__msg__DistanceSensor__FIELD_NAME__signal_quality[] = "signal_quality";
static char px4__msg__DistanceSensor__FIELD_NAME__type[] = "type";
static char px4__msg__DistanceSensor__FIELD_NAME__h_fov[] = "h_fov";
static char px4__msg__DistanceSensor__FIELD_NAME__v_fov[] = "v_fov";
static char px4__msg__DistanceSensor__FIELD_NAME__q[] = "q";
static char px4__msg__DistanceSensor__FIELD_NAME__orientation[] = "orientation";
static char px4__msg__DistanceSensor__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field px4__msg__DistanceSensor__FIELDS[] = {
  {
    {px4__msg__DistanceSensor__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__min_distance, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__max_distance, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__current_distance, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__variance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__signal_quality, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__h_fov, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__v_fov, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__DistanceSensor__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__DistanceSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__DistanceSensor__TYPE_NAME, 22, 22},
      {px4__msg__DistanceSensor__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# DISTANCE_SENSOR message data\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint32 device_id\\t\\t# unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "float32 min_distance\\t\\t# Minimum distance the sensor can measure (in m)\n"
  "float32 max_distance\\t\\t# Maximum distance the sensor can measure (in m)\n"
  "float32 current_distance\\t# Current distance reading (in m)\n"
  "float32 variance\\t\\t# Measurement variance (in m^2), 0 for unknown / invalid readings\n"
  "int8 signal_quality\\t\\t# Signal quality in percent (0...100%), where 0 = invalid signal, 100 = perfect signal, and -1 = unknown signal quality.\n"
  "\n"
  "uint8 type\\t\\t\\t# Type from MAV_DISTANCE_SENSOR enum\n"
  "uint8 MAV_DISTANCE_SENSOR_LASER = 0\n"
  "uint8 MAV_DISTANCE_SENSOR_ULTRASOUND = 1\n"
  "uint8 MAV_DISTANCE_SENSOR_INFRARED = 2\n"
  "uint8 MAV_DISTANCE_SENSOR_RADAR = 3\n"
  "\n"
  "float32 h_fov # Sensor horizontal field of view (rad)\n"
  "float32 v_fov # Sensor vertical field of view (rad)\n"
  "float32[4] q # Quaterion sensor orientation with respect to the vehicle body frame to specify the orientation ROTATION_CUSTOM\n"
  "\n"
  "uint8 orientation\\t\\t# Direction the sensor faces from MAV_SENSOR_ORIENTATION enum\n"
  "\n"
  "uint8 ROTATION_YAW_0\\t\\t= 0 # MAV_SENSOR_ROTATION_NONE\n"
  "uint8 ROTATION_YAW_45\\t\\t= 1 # MAV_SENSOR_ROTATION_YAW_45\n"
  "uint8 ROTATION_YAW_90\\t\\t= 2 # MAV_SENSOR_ROTATION_YAW_90\n"
  "uint8 ROTATION_YAW_135\\t\\t= 3 # MAV_SENSOR_ROTATION_YAW_135\n"
  "uint8 ROTATION_YAW_180\\t\\t= 4 # MAV_SENSOR_ROTATION_YAW_180\n"
  "uint8 ROTATION_YAW_225\\t\\t= 5 # MAV_SENSOR_ROTATION_YAW_225\n"
  "uint8 ROTATION_YAW_270\\t\\t= 6 # MAV_SENSOR_ROTATION_YAW_270\n"
  "uint8 ROTATION_YAW_315\\t\\t= 7 # MAV_SENSOR_ROTATION_YAW_315\n"
  "\n"
  "uint8 ROTATION_FORWARD_FACING\\t= 0 # MAV_SENSOR_ROTATION_NONE\n"
  "uint8 ROTATION_RIGHT_FACING\\t= 2 # MAV_SENSOR_ROTATION_YAW_90\n"
  "uint8 ROTATION_BACKWARD_FACING\\t= 4 # MAV_SENSOR_ROTATION_YAW_180\n"
  "uint8 ROTATION_LEFT_FACING\\t= 6 # MAV_SENSOR_ROTATION_YAW_270\n"
  "\n"
  "uint8 ROTATION_UPWARD_FACING   = 24 # MAV_SENSOR_ROTATION_PITCH_90\n"
  "uint8 ROTATION_DOWNWARD_FACING = 25 # MAV_SENSOR_ROTATION_PITCH_270\n"
  "\n"
  "uint8 ROTATION_CUSTOM          = 100 # MAV_SENSOR_ROTATION_CUSTOM\n"
  "\n"
  "uint8 mode\n"
  "uint8 MODE_UNKNOWN  = 0\n"
  "uint8 MODE_ENABLED  = 1\n"
  "uint8 MODE_DISABLED = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__DistanceSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__DistanceSensor__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2124, 2124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__DistanceSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__DistanceSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
