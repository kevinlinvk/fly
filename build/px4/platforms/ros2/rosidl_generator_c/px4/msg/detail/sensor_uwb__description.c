// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/sensor_uwb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__SensorUwb__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x97, 0x40, 0x14, 0x12, 0xd6, 0x02, 0x57,
      0x4e, 0x97, 0xe2, 0x65, 0xd1, 0x2a, 0x5e, 0xa0,
      0x9d, 0x6e, 0x3c, 0x6a, 0x3d, 0x64, 0x82, 0xfa,
      0x38, 0x9d, 0x1b, 0xdd, 0x45, 0x83, 0x71, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__SensorUwb__TYPE_NAME[] = "px4/msg/SensorUwb";

// Define type names, field names, and default values
static char px4__msg__SensorUwb__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__SensorUwb__FIELD_NAME__sessionid[] = "sessionid";
static char px4__msg__SensorUwb__FIELD_NAME__time_offset[] = "time_offset";
static char px4__msg__SensorUwb__FIELD_NAME__counter[] = "counter";
static char px4__msg__SensorUwb__FIELD_NAME__mac[] = "mac";
static char px4__msg__SensorUwb__FIELD_NAME__mac_dest[] = "mac_dest";
static char px4__msg__SensorUwb__FIELD_NAME__status[] = "status";
static char px4__msg__SensorUwb__FIELD_NAME__nlos[] = "nlos";
static char px4__msg__SensorUwb__FIELD_NAME__distance[] = "distance";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_dev[] = "aoa_azimuth_dev";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_dev[] = "aoa_elevation_dev";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_resp[] = "aoa_azimuth_resp";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_resp[] = "aoa_elevation_resp";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_fom[] = "aoa_azimuth_fom";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_fom[] = "aoa_elevation_fom";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_dest_azimuth_fom[] = "aoa_dest_azimuth_fom";
static char px4__msg__SensorUwb__FIELD_NAME__aoa_dest_elevation_fom[] = "aoa_dest_elevation_fom";
static char px4__msg__SensorUwb__FIELD_NAME__orientation[] = "orientation";
static char px4__msg__SensorUwb__FIELD_NAME__offset_x[] = "offset_x";
static char px4__msg__SensorUwb__FIELD_NAME__offset_y[] = "offset_y";
static char px4__msg__SensorUwb__FIELD_NAME__offset_z[] = "offset_z";

static rosidl_runtime_c__type_description__Field px4__msg__SensorUwb__FIELDS[] = {
  {
    {px4__msg__SensorUwb__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__sessionid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__time_offset, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__counter, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__mac, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__mac_dest, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__nlos, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_dev, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_dev, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_resp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_resp, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_azimuth_fom, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_elevation_fom, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_dest_azimuth_fom, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__aoa_dest_elevation_fom, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__offset_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__offset_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__SensorUwb__FIELD_NAME__offset_z, 8, 8},
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
px4__msg__SensorUwb__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__SensorUwb__TYPE_NAME, 17, 17},
      {px4__msg__SensorUwb__FIELDS, 21, 21},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UWB distance contains the distance information measured by an ultra-wideband positioning system,\n"
  "# such as Pozyx or NXP Rddrone.\n"
  "\n"
  "uint64 \\ttimestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint32 \\tsessionid\\t\\t# UWB SessionID\n"
  "uint32 \\ttime_offset\\t\\t# Time between Ranging Rounds in ms\n"
  "uint32 \\tcounter\\t\\t\\t# Number of Ranges since last Start of Ranging\n"
  "uint16 \\tmac\\t\\t\\t# MAC adress of Initiator (controller)\n"
  "\n"
  "uint16 \\tmac_dest\\t\\t# MAC adress of Responder (Controlee)\n"
  "uint16 \\tstatus\\t\\t\\t# status feedback #\n"
  "uint8 \\tnlos\\t\\t\\t# None line of site condition y/n\n"
  "float32 distance\\t\\t# distance in m to the UWB receiver\n"
  "\n"
  "\n"
  "#Angle of arrival, Angle in Degree -60..+60; FOV in both axis is 120 degrees\n"
  "float32 aoa_azimuth_dev\\t# Angle of arrival of first incomming RX msg\n"
  "float32 aoa_elevation_dev\\t# Angle of arrival of first incomming RX msg\n"
  "float32 aoa_azimuth_resp\\t# Angle of arrival of first incomming RX msg at the responder\n"
  "float32 aoa_elevation_resp\\t# Angle of arrival of first incomming RX msg at the responder\n"
  "\n"
  "# Figure of merit for the angle measurements\n"
  "uint8 aoa_azimuth_fom\\t\\t# AOA Azimuth FOM\n"
  "uint8 aoa_elevation_fom\\t\\t# AOA Elevation FOM\n"
  "uint8 aoa_dest_azimuth_fom\\t# AOA Azimuth FOM\n"
  "uint8 aoa_dest_elevation_fom\\t# AOA Elevation FOM\n"
  "\n"
  "# Initiator physical configuration\n"
  "uint8 orientation\\t\\t# Direction the sensor faces from MAV_SENSOR_ORIENTATION enum\n"
  "\\t\\t\\t\\t# Standard configuration is Antennas facing down and azimuth aligened in forward direction\n"
  "float32 offset_x\\t\\t# UWB initiator offset in X axis (NED drone frame)\n"
  "float32 offset_y\\t\\t# UWB initiator offset in Y axis (NED drone frame)\n"
  "float32 offset_z\\t\\t# UWB initiator offset in Z axis (NED drone frame)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__SensorUwb__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__SensorUwb__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1639, 1639},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__SensorUwb__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__SensorUwb__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
