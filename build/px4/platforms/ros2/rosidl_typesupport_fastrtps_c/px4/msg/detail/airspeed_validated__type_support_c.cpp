// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/airspeed_validated__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/airspeed_validated__struct.h"
#include "px4/msg/detail/airspeed_validated__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AirspeedValidated__ros_msg_type = px4__msg__AirspeedValidated;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__AirspeedValidated(
  const px4__msg__AirspeedValidated * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: indicated_airspeed_m_s
  {
    cdr << ros_message->indicated_airspeed_m_s;
  }

  // Field name: calibrated_airspeed_m_s
  {
    cdr << ros_message->calibrated_airspeed_m_s;
  }

  // Field name: true_airspeed_m_s
  {
    cdr << ros_message->true_airspeed_m_s;
  }

  // Field name: airspeed_source
  {
    cdr << ros_message->airspeed_source;
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    cdr << ros_message->calibrated_ground_minus_wind_m_s;
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    cdr << ros_message->calibraded_airspeed_synth_m_s;
  }

  // Field name: airspeed_derivative_filtered
  {
    cdr << ros_message->airspeed_derivative_filtered;
  }

  // Field name: throttle_filtered
  {
    cdr << ros_message->throttle_filtered;
  }

  // Field name: pitch_filtered
  {
    cdr << ros_message->pitch_filtered;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__AirspeedValidated(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__AirspeedValidated * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: indicated_airspeed_m_s
  {
    cdr >> ros_message->indicated_airspeed_m_s;
  }

  // Field name: calibrated_airspeed_m_s
  {
    cdr >> ros_message->calibrated_airspeed_m_s;
  }

  // Field name: true_airspeed_m_s
  {
    cdr >> ros_message->true_airspeed_m_s;
  }

  // Field name: airspeed_source
  {
    cdr >> ros_message->airspeed_source;
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    cdr >> ros_message->calibrated_ground_minus_wind_m_s;
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    cdr >> ros_message->calibraded_airspeed_synth_m_s;
  }

  // Field name: airspeed_derivative_filtered
  {
    cdr >> ros_message->airspeed_derivative_filtered;
  }

  // Field name: throttle_filtered
  {
    cdr >> ros_message->throttle_filtered;
  }

  // Field name: pitch_filtered
  {
    cdr >> ros_message->pitch_filtered;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__AirspeedValidated(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AirspeedValidated__ros_msg_type * ros_message = static_cast<const _AirspeedValidated__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: indicated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->indicated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibrated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->calibrated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: true_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->true_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: airspeed_source
  {
    size_t item_size = sizeof(ros_message->airspeed_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    size_t item_size = sizeof(ros_message->calibrated_ground_minus_wind_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    size_t item_size = sizeof(ros_message->calibraded_airspeed_synth_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: airspeed_derivative_filtered
  {
    size_t item_size = sizeof(ros_message->airspeed_derivative_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_filtered
  {
    size_t item_size = sizeof(ros_message->throttle_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_filtered
  {
    size_t item_size = sizeof(ros_message->pitch_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__AirspeedValidated(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: indicated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: calibrated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: true_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: airspeed_source
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: airspeed_derivative_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pitch_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__AirspeedValidated;
    is_plain =
      (
      offsetof(DataType, pitch_filtered) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__AirspeedValidated(
  const px4__msg__AirspeedValidated * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: indicated_airspeed_m_s
  {
    cdr << ros_message->indicated_airspeed_m_s;
  }

  // Field name: calibrated_airspeed_m_s
  {
    cdr << ros_message->calibrated_airspeed_m_s;
  }

  // Field name: true_airspeed_m_s
  {
    cdr << ros_message->true_airspeed_m_s;
  }

  // Field name: airspeed_source
  {
    cdr << ros_message->airspeed_source;
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    cdr << ros_message->calibrated_ground_minus_wind_m_s;
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    cdr << ros_message->calibraded_airspeed_synth_m_s;
  }

  // Field name: airspeed_derivative_filtered
  {
    cdr << ros_message->airspeed_derivative_filtered;
  }

  // Field name: throttle_filtered
  {
    cdr << ros_message->throttle_filtered;
  }

  // Field name: pitch_filtered
  {
    cdr << ros_message->pitch_filtered;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__AirspeedValidated(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AirspeedValidated__ros_msg_type * ros_message = static_cast<const _AirspeedValidated__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: indicated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->indicated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibrated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->calibrated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: true_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message->true_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: airspeed_source
  {
    size_t item_size = sizeof(ros_message->airspeed_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    size_t item_size = sizeof(ros_message->calibrated_ground_minus_wind_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    size_t item_size = sizeof(ros_message->calibraded_airspeed_synth_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: airspeed_derivative_filtered
  {
    size_t item_size = sizeof(ros_message->airspeed_derivative_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_filtered
  {
    size_t item_size = sizeof(ros_message->throttle_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_filtered
  {
    size_t item_size = sizeof(ros_message->pitch_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__AirspeedValidated(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: indicated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: calibrated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: true_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: airspeed_source
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: calibrated_ground_minus_wind_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: calibraded_airspeed_synth_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: airspeed_derivative_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pitch_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4__msg__AirspeedValidated;
    is_plain =
      (
      offsetof(DataType, pitch_filtered) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AirspeedValidated__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__AirspeedValidated * ros_message = static_cast<const px4__msg__AirspeedValidated *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__AirspeedValidated(ros_message, cdr);
}

static bool _AirspeedValidated__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__AirspeedValidated * ros_message = static_cast<px4__msg__AirspeedValidated *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__AirspeedValidated(cdr, ros_message);
}

static uint32_t _AirspeedValidated__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__AirspeedValidated(
      untyped_ros_message, 0));
}

static size_t _AirspeedValidated__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__AirspeedValidated(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AirspeedValidated = {
  "px4::msg",
  "AirspeedValidated",
  _AirspeedValidated__cdr_serialize,
  _AirspeedValidated__cdr_deserialize,
  _AirspeedValidated__get_serialized_size,
  _AirspeedValidated__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AirspeedValidated__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AirspeedValidated,
  get_message_typesupport_handle_function,
  &px4__msg__AirspeedValidated__get_type_hash,
  &px4__msg__AirspeedValidated__get_type_description,
  &px4__msg__AirspeedValidated__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, AirspeedValidated)() {
  return &_AirspeedValidated__type_support;
}

#if defined(__cplusplus)
}
#endif
