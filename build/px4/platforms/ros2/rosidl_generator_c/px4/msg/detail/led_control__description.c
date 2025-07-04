// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4:msg/LedControl.idl
// generated code does not contain a copyright notice

#include "px4/msg/detail/led_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4
const rosidl_type_hash_t *
px4__msg__LedControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x3e, 0xb9, 0x8a, 0x4f, 0xc0, 0x93, 0x56,
      0x93, 0x2d, 0xc8, 0x98, 0xb3, 0x38, 0xe2, 0x2a,
      0x69, 0x08, 0xf7, 0x0a, 0xe7, 0xf3, 0xe4, 0xba,
      0x9b, 0xcc, 0x6e, 0x99, 0x45, 0xfa, 0x9a, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4__msg__LedControl__TYPE_NAME[] = "px4/msg/LedControl";

// Define type names, field names, and default values
static char px4__msg__LedControl__FIELD_NAME__timestamp[] = "timestamp";
static char px4__msg__LedControl__FIELD_NAME__led_mask[] = "led_mask";
static char px4__msg__LedControl__FIELD_NAME__color[] = "color";
static char px4__msg__LedControl__FIELD_NAME__mode[] = "mode";
static char px4__msg__LedControl__FIELD_NAME__num_blinks[] = "num_blinks";
static char px4__msg__LedControl__FIELD_NAME__priority[] = "priority";

static rosidl_runtime_c__type_description__Field px4__msg__LedControl__FIELDS[] = {
  {
    {px4__msg__LedControl__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LedControl__FIELD_NAME__led_mask, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LedControl__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LedControl__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LedControl__FIELD_NAME__num_blinks, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4__msg__LedControl__FIELD_NAME__priority, 8, 8},
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
px4__msg__LedControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4__msg__LedControl__TYPE_NAME, 18, 18},
      {px4__msg__LedControl__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# LED control: control a single or multiple LED's.\n"
  "# These are the externally visible LED's, not the board LED's\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "# colors\n"
  "uint8 COLOR_OFF = 0 # this is only used in the drivers\n"
  "uint8 COLOR_RED = 1\n"
  "uint8 COLOR_GREEN = 2\n"
  "uint8 COLOR_BLUE = 3\n"
  "uint8 COLOR_YELLOW = 4\n"
  "uint8 COLOR_PURPLE = 5\n"
  "uint8 COLOR_AMBER = 6\n"
  "uint8 COLOR_CYAN = 7\n"
  "uint8 COLOR_WHITE = 8\n"
  "\n"
  "# LED modes definitions\n"
  "uint8 MODE_OFF = 0 # turn LED off\n"
  "uint8 MODE_ON = 1  # turn LED on\n"
  "uint8 MODE_DISABLED = 2  # disable this priority (switch to lower priority setting)\n"
  "uint8 MODE_BLINK_SLOW = 3\n"
  "uint8 MODE_BLINK_NORMAL = 4\n"
  "uint8 MODE_BLINK_FAST = 5\n"
  "uint8 MODE_BREATHE = 6 # continuously increase & decrease brightness (solid color if driver does not support it)\n"
  "uint8 MODE_FLASH = 7 # two fast blinks (on/off) with timing as in MODE_BLINK_FAST and then off for a while\n"
  "\n"
  "uint8 MAX_PRIORITY = 2 # maximum priority (minimum is 0)\n"
  "\n"
  "\n"
  "uint8 led_mask # bitmask which LED(s) to control, set to 0xff for all\n"
  "uint8 color # see COLOR_*\n"
  "uint8 mode # see MODE_*\n"
  "uint8 num_blinks # how many times to blink (number of on-off cycles if mode is one of MODE_BLINK_*) . Set to 0 for infinite\n"
  "                 # in MODE_FLASH it is the number of cycles. Max number of blinks: 122 and max number of flash cycles: 20\n"
  "uint8 priority # priority: higher priority events will override current lower priority events (see MAX_PRIORITY)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8      # needs to match BOARD_MAX_LEDS";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4__msg__LedControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4__msg__LedControl__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1492, 1492},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4__msg__LedControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4__msg__LedControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
