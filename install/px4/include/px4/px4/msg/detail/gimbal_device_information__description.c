// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/gimbal_device_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__GimbalDeviceInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x36, 0xd4, 0xfe, 0x11, 0x7c, 0xd3, 0x57,
      0xe8, 0x83, 0x7d, 0xdb, 0x9d, 0x83, 0x55, 0xc1,
      0x25, 0xda, 0x7a, 0x2f, 0x75, 0xa0, 0xbb, 0x3e,
      0xb9, 0x42, 0x17, 0x1d, 0x54, 0x75, 0xf1, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__GimbalDeviceInformation__TYPE_NAME[] = "px4/msg/GimbalDeviceInformation";

// Define type names, field names, and default values
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__vendor_name[] = "vendor_name";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__model_name[] = "model_name";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__custom_name[] = "custom_name";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__firmware_version[] = "firmware_version";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__hardware_version[] = "hardware_version";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__uid[] = "uid";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__cap_flags[] = "cap_flags";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__custom_cap_flags[] = "custom_cap_flags";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__roll_min[] = "roll_min";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__roll_max[] = "roll_max";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__pitch_min[] = "pitch_min";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__pitch_max[] = "pitch_max";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__yaw_min[] = "yaw_min";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__yaw_max[] = "yaw_max";
static char px4__msg__GimbalDeviceInformation__FIELD_NAME__gimbal_device_id[] = "gimbal_device_id";

static rosidl_runtime_c__type_description__Field px4__msg__GimbalDeviceInformation__FIELDS[] = {
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__vendor_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__model_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__custom_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__hardware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__uid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__cap_flags, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__custom_cap_flags, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__roll_min, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__roll_max, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__pitch_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__pitch_max, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__yaw_min, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__yaw_max, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__GimbalDeviceInformation__FIELD_NAME__gimbal_device_id, 16, 16},
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
px4__msg__GimbalDeviceInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__GimbalDeviceInformation__TYPE_NAME, 31, 31},
      {px4__msg__GimbalDeviceInformation__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8[32] vendor_name\n"
  "uint8[32] model_name\n"
  "uint8[32] custom_name\n"
  "uint32 firmware_version\n"
  "uint32 hardware_version\n"
  "uint64 uid\n"
  "\n"
  "uint16 cap_flags\n"
  "\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT = 1\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL = 2\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS = 4\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW = 8\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK = 16\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS = 32\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW = 64\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK = 128\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS = 256\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW = 512\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK = 1024\n"
  "uint32 GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW = 2048\n"
  "\n"
  "uint16 custom_cap_flags\n"
  "\n"
  "float32 roll_min # [rad]\n"
  "float32 roll_max # [rad]\n"
  "\n"
  "float32 pitch_min # [rad]\n"
  "float32 pitch_max # [rad]\n"
  "\n"
  "float32 yaw_min # [rad]\n"
  "float32 yaw_max # [rad]\n"
  "\n"
  "uint8 gimbal_device_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__GimbalDeviceInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__GimbalDeviceInformation__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1022, 1022},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__GimbalDeviceInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__GimbalDeviceInformation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
