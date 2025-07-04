// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/vtol_vehicle_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__VtolVehicleStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0xe7, 0x6f, 0x75, 0x3e, 0x48, 0x34, 0x30,
      0x16, 0xca, 0xd3, 0x4b, 0xdd, 0x9d, 0x15, 0x50,
      0x86, 0x1a, 0xe4, 0x9a, 0x0e, 0x40, 0x52, 0xef,
      0xce, 0x65, 0xe0, 0x35, 0x67, 0xfd, 0xbc, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__VtolVehicleStatus__TYPE_NAME[] = "px4/msg/VtolVehicleStatus";

// Define type names, field names, and default values
static char px4__msg__VtolVehicleStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__VtolVehicleStatus__FIELD_NAME__vehicle_vtol_state[] = "vehicle_vtol_state";
static char px4__msg__VtolVehicleStatus__FIELD_NAME__fixed_wing_system_failure[] = "fixed_wing_system_failure";

static rosidl_runtime_c__type_description__Field px4__msg__VtolVehicleStatus__FIELDS[] = {
  {
    {px4__msg__VtolVehicleStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VtolVehicleStatus__FIELD_NAME__vehicle_vtol_state, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__VtolVehicleStatus__FIELD_NAME__fixed_wing_system_failure, 25, 25},
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
px4__msg__VtolVehicleStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__VtolVehicleStatus__TYPE_NAME, 25, 25},
      {px4__msg__VtolVehicleStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# VEHICLE_VTOL_STATE, should match 1:1 MAVLinks's MAV_VTOL_STATE\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint8 VEHICLE_VTOL_STATE_UNDEFINED = 0\n"
  "uint8 VEHICLE_VTOL_STATE_TRANSITION_TO_FW = 1\n"
  "uint8 VEHICLE_VTOL_STATE_TRANSITION_TO_MC = 2\n"
  "uint8 VEHICLE_VTOL_STATE_MC = 3\n"
  "uint8 VEHICLE_VTOL_STATE_FW = 4\n"
  "\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 vehicle_vtol_state\\t\\t# current state of the vtol, see VEHICLE_VTOL_STATE\n"
  "\n"
  "bool fixed_wing_system_failure\\t\\t# vehicle in fixed-wing system failure failsafe mode (after quad-chute)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__VtolVehicleStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__VtolVehicleStatus__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 534, 534},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__VtolVehicleStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__VtolVehicleStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
