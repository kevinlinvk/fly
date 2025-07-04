// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_air_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleAirData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x4f, 0xa5, 0x81, 0x07, 0xcf, 0xf1, 0xa0,
      0xbd, 0x4b, 0xc8, 0x2d, 0x0a, 0xf5, 0x49, 0xa9,
      0x4e, 0x9f, 0x19, 0x5d, 0xff, 0x29, 0x48, 0x59,
      0xd2, 0xab, 0x98, 0x3c, 0x8b, 0x87, 0xde, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleAirData__TYPE_NAME[] = "px4/msg/VehicleAirData";

// Define type names, field names, and default values
static char px4__msg__VehicleAirData__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleAirData__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_device_id[] = "baro_device_id";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_alt_meter[] = "baro_alt_meter";
static char px4__msg__VehicleAirData__FIELD_NAME__baro_pressure_pa[] = "baro_pressure_pa";
static char px4__msg__VehicleAirData__FIELD_NAME__ambient_temperature[] = "ambient_temperature";
static char px4__msg__VehicleAirData__FIELD_NAME__temperature_source[] = "temperature_source";
static char px4__msg__VehicleAirData__FIELD_NAME__rho[] = "rho";
static char px4__msg__VehicleAirData__FIELD_NAME__calibration_count[] = "calibration_count";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleAirData__FIELDS[] = {
  {
    {px4__msg__VehicleAirData__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_device_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_alt_meter, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__baro_pressure_pa, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__ambient_temperature, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__temperature_source, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__rho, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleAirData__FIELD_NAME__calibration_count, 17, 17},
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
px4__msg__VehicleAirData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleAirData__TYPE_NAME, 22, 22},
      {px4__msg__VehicleAirData__FIELDS, 9, 9},
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
  "uint32 baro_device_id       # unique device ID for the selected barometer\n"
  "\n"
  "float32 baro_alt_meter\\t\\t\\t# Altitude above MSL calculated from temperature compensated baro sensor data using an ISA corrected for sea level pressure SENS_BARO_QNH.\n"
  "float32 baro_pressure_pa\\t\\t# Absolute pressure in Pascals\n"
  "float32 ambient_temperature\\t\\t# Abient temperature in degrees Celsius\n"
  "uint8 temperature_source\\t\\t# Source of temperature data: 0: Default Temperature (15\\xc2\\xb0C), 1: External Baro, 2: Airspeed\n"
  "\n"
  "float32 rho\\t\\t\\t\\t# air density\n"
  "\n"
  "uint8 calibration_count     # Calibration changed counter. Monotonically increases whenever calibration changes.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleAirData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleAirData__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 773, 773},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleAirData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleAirData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
