// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/arming_check_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__ArmingCheckRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x55, 0x00, 0xd7, 0x59, 0x8f, 0x06, 0xf4,
      0xd2, 0x37, 0xf0, 0x9c, 0xf5, 0x35, 0x8b, 0x36,
      0xe3, 0x02, 0x43, 0x7a, 0xe3, 0x11, 0x1f, 0x20,
      0x91, 0x9b, 0x11, 0xac, 0xe1, 0xa4, 0x50, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__ArmingCheckRequest__TYPE_NAME[] = "px4_msgs/msg/ArmingCheckRequest";

// Define type names, field names, and default values
static char px4_msgs__msg__ArmingCheckRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__ArmingCheckRequest__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__ArmingCheckRequest__FIELDS[] = {
  {
    {px4_msgs__msg__ArmingCheckRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ArmingCheckRequest__FIELD_NAME__request_id, 10, 10},
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
px4_msgs__msg__ArmingCheckRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__ArmingCheckRequest__TYPE_NAME, 31, 31},
      {px4_msgs__msg__ArmingCheckRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Arming check request.\n"
  "#\n"
  "# Broadcast message to request arming checks be reported by all registered components, such as external ROS 2 navigation modes.\n"
  "# All registered components should respond with an ArmingCheckReply message that indicates their current mode requirements, and any arming failure information.\n"
  "# The request is sent regularly, even while armed, so that the FMU always knows the current arming state for external modes, and can forward it to ground stations.\n"
  "#\n"
  "# The reply will include the published request_id, allowing correlation of all arming check information for a particular request.\n"
  "# The reply will also include the registration_id for each external component, provided to it during the registration process (RegisterExtComponentReply).\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start.\n"
  "\n"
  "uint8 request_id # Id of this request. Allows correlation with associated ArmingCheckReply messages.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__ArmingCheckRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__ArmingCheckRequest__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 945, 945},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__ArmingCheckRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__ArmingCheckRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
