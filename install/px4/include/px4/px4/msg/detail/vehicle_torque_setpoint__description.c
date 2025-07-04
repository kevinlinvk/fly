// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VehicleTorqueSetpoint.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vehicle_torque_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VehicleTorqueSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x6d, 0xdc, 0x56, 0x5b, 0x2a, 0x85, 0x75,
      0x3f, 0x28, 0x3a, 0xa6, 0x87, 0x78, 0xab, 0x1e,
      0x4d, 0xe8, 0x35, 0x2e, 0x72, 0xe4, 0x96, 0x12,
      0xc9, 0xef, 0x95, 0x81, 0x15, 0x84, 0x0f, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VehicleTorqueSetpoint__TYPE_NAME[] = "px4/msg/VehicleTorqueSetpoint";

// Define type names, field names, and default values
static char px4__msg__VehicleTorqueSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VehicleTorqueSetpoint__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4__msg__VehicleTorqueSetpoint__FIELD_NAME__xyz[] = "xyz";

static rosidl_runtime_c__type_description__Field px4__msg__VehicleTorqueSetpoint__FIELDS[] = {
  {
    {px4__msg__VehicleTorqueSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTorqueSetpoint__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VehicleTorqueSetpoint__FIELD_NAME__xyz, 3, 3},
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
px4__msg__VehicleTorqueSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VehicleTorqueSetpoint__TYPE_NAME, 29, 29},
      {px4__msg__VehicleTorqueSetpoint__FIELDS, 3, 3},
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
  "uint64 timestamp        # time since system start (microseconds)\n"
  "uint64 timestamp_sample # timestamp of the data sample on which this message is based (microseconds)\n"
  "\n"
  "float32[3] xyz          # torque setpoint about X, Y, Z body axis (normalized)\n"
  "\n"
  "# TOPICS vehicle_torque_setpoint\n"
  "# TOPICS vehicle_torque_setpoint_virtual_fw vehicle_torque_setpoint_virtual_mc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VehicleTorqueSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VehicleTorqueSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 360, 360},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VehicleTorqueSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VehicleTorqueSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
