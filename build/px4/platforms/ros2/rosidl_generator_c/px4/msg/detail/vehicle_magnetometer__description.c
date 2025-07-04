// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleMagnetometer.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_magnetometer__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleMagnetometer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x6c, 0x16, 0xe2, 0x01, 0x97, 0xdd, 0xc4,
      0xd5, 0x6f, 0x26, 0xc0, 0xf5, 0x16, 0xf2, 0xcb,
      0xe4, 0x56, 0x5c, 0xfb, 0xba, 0x84, 0x7b, 0x78,
      0x2e, 0x23, 0xed, 0xc7, 0x48, 0xa7, 0x03, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleMagnetometer__TYPE_NAME[] = "px4/msg/VehicleMagnetometer";

// Define type names, field names, and default values
static char px4__msg__VehicleMagnetometer__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleMagnetometer__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleMagnetometer__FIELD_NAME__device_id[] = "device_id";
static char px4__msg__VehicleMagnetometer__FIELD_NAME__magnetometer_ga[] = "magnetometer_ga";
static char px4__msg__VehicleMagnetometer__FIELD_NAME__calibration_count[] = "calibration_count";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleMagnetometer__FIELDS[] = {
  {
    {px4__msg__VehicleMagnetometer__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleMagnetometer__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleMagnetometer__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleMagnetometer__FIELD_NAME__magnetometer_ga, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleMagnetometer__FIELD_NAME__calibration_count, 17, 17},
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
px4__msg__VehicleMagnetometer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleMagnetometer__TYPE_NAME, 27, 27},
      {px4__msg__VehicleMagnetometer__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 timestamp            # time since system start (microseconds)\n"
  "\n"
  "uint64 timestamp_sample     # the timestamp of the raw data (microseconds)\n"
  "\n"
  "uint32 device_id            # unique device ID for the selected magnetometer\n"
  "\n"
  "float32[3] magnetometer_ga  # Magnetic field in the FRD body frame XYZ-axis in Gauss\n"
  "\n"
  "uint8 calibration_count     # Calibration changed counter. Monotonically increases whenever calibration changes.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleMagnetometer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleMagnetometer__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 424, 424},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleMagnetometer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleMagnetometer__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
