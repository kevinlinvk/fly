// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/PowerButtonState.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/power_button_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__PowerButtonState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x1a, 0x9f, 0xe4, 0x6c, 0x15, 0x04, 0x6e,
      0x7a, 0x94, 0x3b, 0x66, 0x50, 0x0b, 0xb9, 0x07,
      0x48, 0x5f, 0x6c, 0xe5, 0xb7, 0x1a, 0x04, 0xb0,
      0x3a, 0x2a, 0x19, 0x48, 0x3b, 0x53, 0xec, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__PowerButtonState__TYPE_NAME[] = "px4/msg/PowerButtonState";

// Define type names, field names, and default values
static char px4__msg__PowerButtonState__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__PowerButtonState__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field px4__msg__PowerButtonState__FIELDS[] = {
  {
    {px4__msg__PowerButtonState__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__PowerButtonState__FIELD_NAME__event, 5, 5},
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
px4__msg__PowerButtonState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__PowerButtonState__TYPE_NAME, 24, 24},
      {px4__msg__PowerButtonState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# power button state notification message\n"
  "\n"
  "uint64 timestamp\\t\\t\\t    # time since system start (microseconds)\n"
  "\n"
  "uint8 PWR_BUTTON_STATE_IDEL = 0             # Button went up without meeting shutdown button down time (delete event)\n"
  "uint8 PWR_BUTTON_STATE_DOWN = 1             # Button went Down\n"
  "uint8 PWR_BUTTON_STATE_UP = 2               # Button went Up\n"
  "uint8 PWR_BUTTON_STATE_REQUEST_SHUTDOWN = 3 # Button went Up after meeting shutdown button down time\n"
  "\n"
  "uint8 event                                 # one of PWR_BUTTON_STATE_*";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__PowerButtonState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__PowerButtonState__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 524, 524},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__PowerButtonState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__PowerButtonState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
