// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/airspeed_validated__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__AirspeedValidated__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xee, 0x3a, 0x4b, 0x64, 0x39, 0xfa, 0xda,
      0x44, 0x08, 0xa9, 0xce, 0xfd, 0x1f, 0x97, 0x3a,
      0x17, 0xae, 0xc7, 0x63, 0x38, 0x50, 0x0b, 0x1a,
      0xaf, 0x1c, 0xca, 0x75, 0xe8, 0x60, 0x95, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__AirspeedValidated__TYPE_NAME[] = "px4/msg/AirspeedValidated";

// Define type names, field names, and default values
static char px4__msg__AirspeedValidated__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__AirspeedValidated__FIELD_NAME__indicated_airspeed_m_s[] = "indicated_airspeed_m_s";
static char px4__msg__AirspeedValidated__FIELD_NAME__calibrated_airspeed_m_s[] = "calibrated_airspeed_m_s";
static char px4__msg__AirspeedValidated__FIELD_NAME__true_airspeed_m_s[] = "true_airspeed_m_s";
static char px4__msg__AirspeedValidated__FIELD_NAME__airspeed_source[] = "airspeed_source";
static char px4__msg__AirspeedValidated__FIELD_NAME__calibrated_ground_minus_wind_m_s[] = "calibrated_ground_minus_wind_m_s";
static char px4__msg__AirspeedValidated__FIELD_NAME__calibraded_airspeed_synth_m_s[] = "calibraded_airspeed_synth_m_s";
static char px4__msg__AirspeedValidated__FIELD_NAME__airspeed_derivative_filtered[] = "airspeed_derivative_filtered";
static char px4__msg__AirspeedValidated__FIELD_NAME__throttle_filtered[] = "throttle_filtered";
static char px4__msg__AirspeedValidated__FIELD_NAME__pitch_filtered[] = "pitch_filtered";

static rosidl_runtime_c__type_description__Field px4__msg__AirspeedValidated__FIELDS[] = {
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__indicated_airspeed_m_s, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__calibrated_airspeed_m_s, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__true_airspeed_m_s, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__airspeed_source, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__calibrated_ground_minus_wind_m_s, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__calibraded_airspeed_synth_m_s, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__airspeed_derivative_filtered, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__throttle_filtered, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__AirspeedValidated__FIELD_NAME__pitch_filtered, 14, 14},
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
px4__msg__AirspeedValidated__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__AirspeedValidated__TYPE_NAME, 25, 25},
      {px4__msg__AirspeedValidated__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 MESSAGE_VERSION = 1\n"
  "\n"
  "uint64 timestamp\\t\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32 indicated_airspeed_m_s\\t\\t\\t# [m/s] Indicated airspeed (IAS), set to NAN if invalid\n"
  "float32 calibrated_airspeed_m_s     \\t\\t# [m/s] Calibrated airspeed (CAS), set to NAN if invalid\n"
  "float32 true_airspeed_m_s\\t\\t\\t# [m/s] True airspeed (TAS), set to NAN if invalid\n"
  "\n"
  "int8 airspeed_source\\t\\t\\t\\t# Source of currently published airspeed values\n"
  "int8 DISABLED = -1\n"
  "int8 GROUND_MINUS_WIND = 0\n"
  "int8 SENSOR_1 = 1\n"
  "int8 SENSOR_2 = 2\n"
  "int8 SENSOR_3 = 3\n"
  "int8 SYNTHETIC = 4\n"
  "\n"
  "# debug states\n"
  "float32 calibrated_ground_minus_wind_m_s \\t# CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid\n"
  "float32 calibraded_airspeed_synth_m_s\\t\\t# synthetic airspeed in m/s, set to NAN if invalid\n"
  "float32 airspeed_derivative_filtered\\t\\t# filtered indicated airspeed derivative [m/s/s]\n"
  "float32 throttle_filtered\\t\\t\\t# filtered fixed-wing throttle [-]\n"
  "float32 pitch_filtered\\t\\t\\t\\t# filtered pitch [rad]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__AirspeedValidated__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__AirspeedValidated__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1027, 1027},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__AirspeedValidated__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__AirspeedValidated__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
