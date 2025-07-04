// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_gyro_fft__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorGyroFft__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x39, 0x1c, 0x71, 0xf6, 0x69, 0xcc, 0x59,
      0x1c, 0xdc, 0x2c, 0x6c, 0xa6, 0xc6, 0xd6, 0x1b,
      0xab, 0x98, 0x49, 0x54, 0x93, 0x7e, 0x89, 0x62,
      0xc3, 0x01, 0x78, 0x0f, 0x38, 0x18, 0xe8, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorGyroFft__TYPE_NAME[] = "px4/msg/SensorGyroFft";

// Define type names, field names, and default values
static char px4__msg__SensorGyroFft__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorGyroFft__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__SensorGyroFft__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__SensorGyroFft__FIELD_NAME__sensor_sample_rate_hz[] = "sensor_sample_rate_hz";
static char px4__msg__SensorGyroFft__FIELD_NAME__resolution_hz[] = "resolution_hz";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_x[] = "peak_frequencies_x";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_y[] = "peak_frequencies_y";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_z[] = "peak_frequencies_z";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_x[] = "peak_snr_x";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_y[] = "peak_snr_y";
static char px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_z[] = "peak_snr_z";

static rosidl_runtime_c__type_description__Field px4__msg__SensorGyroFft__FIELDS[] = {
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__sensor_sample_rate_hz, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__resolution_hz, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_x, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_y, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_frequencies_z, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorGyroFft__FIELD_NAME__peak_snr_z, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4__msg__SensorGyroFft__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorGyroFft__TYPE_NAME, 21, 21},
      {px4__msg__SensorGyroFft__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp          # time since system start (microseconds)\n"
  "uint64 timestamp_sample\n"
  "\n"
  "uint32 device_id          # unique device ID for the sensor that does not change between power cycles\n"
  "\n"
  "float32 sensor_sample_rate_hz\n"
  "float32 resolution_hz\n"
  "\n"
  "float32[3] peak_frequencies_x # x axis peak frequencies\n"
  "float32[3] peak_frequencies_y # y axis peak frequencies\n"
  "float32[3] peak_frequencies_z # z axis peak frequencies\n"
  "\n"
  "float32[3] peak_snr_x # x axis peak SNR\n"
  "float32[3] peak_snr_y # y axis peak SNR\n"
  "float32[3] peak_snr_z # z axis peak SNR";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorGyroFft__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorGyroFft__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 537, 537},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorGyroFft__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorGyroFft__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
