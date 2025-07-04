﻿// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_air_data.h"


#ifndef PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_
#define PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/VehicleAirData in the package px4.
typedef struct px4__msg__VehicleAirData
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// unique device ID for the selected barometer
  uint32_t baro_device_id;
  /// Altitude above MSL calculated from temperature compensated baro sensor data using an ISA corrected for sea level pressure SENS_BARO_QNH.
  float baro_alt_meter;
  /// Absolute pressure in Pascals
  float baro_pressure_pa;
  /// Abient temperature in degrees Celsius
  float ambient_temperature;
  /// Source of temperature data: 0: Default Temperature (15°C), 1: External Baro, 2: Airspeed
  uint8_t temperature_source;
  /// air density
  float rho;
  /// Calibration changed counter. Monotonically increases whenever calibration changes.
  uint8_t calibration_count;
} px4__msg__VehicleAirData;

// Struct for a sequence of px4__msg__VehicleAirData.
typedef struct px4__msg__VehicleAirData__Sequence
{
  px4__msg__VehicleAirData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__VehicleAirData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_
