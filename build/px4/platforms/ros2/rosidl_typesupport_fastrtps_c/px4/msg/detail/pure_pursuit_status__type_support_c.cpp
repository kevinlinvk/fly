// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/pure_pursuit_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/pure_pursuit_status__struct.h"
#include "px4/msg/detail/pure_pursuit_status__functions.h"
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


using _PurePursuitStatus__ros_msg_type = px4__msg__PurePursuitStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__PurePursuitStatus(
  const px4__msg__PurePursuitStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: lookahead_distance
  {
    cdr << ros_message->lookahead_distance;
  }

  // Field name: target_bearing
  {
    cdr << ros_message->target_bearing;
  }

  // Field name: crosstrack_error
  {
    cdr << ros_message->crosstrack_error;
  }

  // Field name: distance_to_waypoint
  {
    cdr << ros_message->distance_to_waypoint;
  }

  // Field name: bearing_to_waypoint
  {
    cdr << ros_message->bearing_to_waypoint;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__PurePursuitStatus(
  eprosima::fastcdr::Cdr & cdr,
  px4__msg__PurePursuitStatus * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: lookahead_distance
  {
    cdr >> ros_message->lookahead_distance;
  }

  // Field name: target_bearing
  {
    cdr >> ros_message->target_bearing;
  }

  // Field name: crosstrack_error
  {
    cdr >> ros_message->crosstrack_error;
  }

  // Field name: distance_to_waypoint
  {
    cdr >> ros_message->distance_to_waypoint;
  }

  // Field name: bearing_to_waypoint
  {
    cdr >> ros_message->bearing_to_waypoint;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__PurePursuitStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PurePursuitStatus__ros_msg_type * ros_message = static_cast<const _PurePursuitStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lookahead_distance
  {
    size_t item_size = sizeof(ros_message->lookahead_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_bearing
  {
    size_t item_size = sizeof(ros_message->target_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crosstrack_error
  {
    size_t item_size = sizeof(ros_message->crosstrack_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_waypoint
  {
    size_t item_size = sizeof(ros_message->distance_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bearing_to_waypoint
  {
    size_t item_size = sizeof(ros_message->bearing_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__PurePursuitStatus(
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

  // Field name: lookahead_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_bearing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: crosstrack_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_to_waypoint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bearing_to_waypoint
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
    using DataType = px4__msg__PurePursuitStatus;
    is_plain =
      (
      offsetof(DataType, bearing_to_waypoint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__PurePursuitStatus(
  const px4__msg__PurePursuitStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: lookahead_distance
  {
    cdr << ros_message->lookahead_distance;
  }

  // Field name: target_bearing
  {
    cdr << ros_message->target_bearing;
  }

  // Field name: crosstrack_error
  {
    cdr << ros_message->crosstrack_error;
  }

  // Field name: distance_to_waypoint
  {
    cdr << ros_message->distance_to_waypoint;
  }

  // Field name: bearing_to_waypoint
  {
    cdr << ros_message->bearing_to_waypoint;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__PurePursuitStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PurePursuitStatus__ros_msg_type * ros_message = static_cast<const _PurePursuitStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lookahead_distance
  {
    size_t item_size = sizeof(ros_message->lookahead_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_bearing
  {
    size_t item_size = sizeof(ros_message->target_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crosstrack_error
  {
    size_t item_size = sizeof(ros_message->crosstrack_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_to_waypoint
  {
    size_t item_size = sizeof(ros_message->distance_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bearing_to_waypoint
  {
    size_t item_size = sizeof(ros_message->bearing_to_waypoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__PurePursuitStatus(
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

  // Field name: lookahead_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: target_bearing
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: crosstrack_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_to_waypoint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bearing_to_waypoint
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
    using DataType = px4__msg__PurePursuitStatus;
    is_plain =
      (
      offsetof(DataType, bearing_to_waypoint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PurePursuitStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4__msg__PurePursuitStatus * ros_message = static_cast<const px4__msg__PurePursuitStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4__msg__PurePursuitStatus(ros_message, cdr);
}

static bool _PurePursuitStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4__msg__PurePursuitStatus * ros_message = static_cast<px4__msg__PurePursuitStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4__msg__PurePursuitStatus(cdr, ros_message);
}

static uint32_t _PurePursuitStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4__msg__PurePursuitStatus(
      untyped_ros_message, 0));
}

static size_t _PurePursuitStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4__msg__PurePursuitStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PurePursuitStatus = {
  "px4::msg",
  "PurePursuitStatus",
  _PurePursuitStatus__cdr_serialize,
  _PurePursuitStatus__cdr_deserialize,
  _PurePursuitStatus__get_serialized_size,
  _PurePursuitStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PurePursuitStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PurePursuitStatus,
  get_message_typesupport_handle_function,
  &px4__msg__PurePursuitStatus__get_type_hash,
  &px4__msg__PurePursuitStatus__get_type_description,
  &px4__msg__PurePursuitStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, PurePursuitStatus)() {
  return &_PurePursuitStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
