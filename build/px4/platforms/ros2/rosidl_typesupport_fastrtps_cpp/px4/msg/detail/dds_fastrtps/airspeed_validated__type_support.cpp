// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice
#include "px4/msg/detail/airspeed_validated__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4/msg/detail/airspeed_validated__functions.h"
#include "px4/msg/detail/airspeed_validated__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_serialize(
  const px4::msg::AirspeedValidated & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: indicated_airspeed_m_s
  cdr << ros_message.indicated_airspeed_m_s;

  // Member: calibrated_airspeed_m_s
  cdr << ros_message.calibrated_airspeed_m_s;

  // Member: true_airspeed_m_s
  cdr << ros_message.true_airspeed_m_s;

  // Member: airspeed_source
  cdr << ros_message.airspeed_source;

  // Member: calibrated_ground_minus_wind_m_s
  cdr << ros_message.calibrated_ground_minus_wind_m_s;

  // Member: calibraded_airspeed_synth_m_s
  cdr << ros_message.calibraded_airspeed_synth_m_s;

  // Member: airspeed_derivative_filtered
  cdr << ros_message.airspeed_derivative_filtered;

  // Member: throttle_filtered
  cdr << ros_message.throttle_filtered;

  // Member: pitch_filtered
  cdr << ros_message.pitch_filtered;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4::msg::AirspeedValidated & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: indicated_airspeed_m_s
  cdr >> ros_message.indicated_airspeed_m_s;

  // Member: calibrated_airspeed_m_s
  cdr >> ros_message.calibrated_airspeed_m_s;

  // Member: true_airspeed_m_s
  cdr >> ros_message.true_airspeed_m_s;

  // Member: airspeed_source
  cdr >> ros_message.airspeed_source;

  // Member: calibrated_ground_minus_wind_m_s
  cdr >> ros_message.calibrated_ground_minus_wind_m_s;

  // Member: calibraded_airspeed_synth_m_s
  cdr >> ros_message.calibraded_airspeed_synth_m_s;

  // Member: airspeed_derivative_filtered
  cdr >> ros_message.airspeed_derivative_filtered;

  // Member: throttle_filtered
  cdr >> ros_message.throttle_filtered;

  // Member: pitch_filtered
  cdr >> ros_message.pitch_filtered;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
get_serialized_size(
  const px4::msg::AirspeedValidated & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: indicated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.indicated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibrated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.calibrated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: true_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.true_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: airspeed_source
  {
    size_t item_size = sizeof(ros_message.airspeed_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibrated_ground_minus_wind_m_s
  {
    size_t item_size = sizeof(ros_message.calibrated_ground_minus_wind_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibraded_airspeed_synth_m_s
  {
    size_t item_size = sizeof(ros_message.calibraded_airspeed_synth_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: airspeed_derivative_filtered
  {
    size_t item_size = sizeof(ros_message.airspeed_derivative_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: throttle_filtered
  {
    size_t item_size = sizeof(ros_message.throttle_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pitch_filtered
  {
    size_t item_size = sizeof(ros_message.pitch_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
max_serialized_size_AirspeedValidated(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: indicated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: calibrated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: true_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: airspeed_source
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: calibrated_ground_minus_wind_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: calibraded_airspeed_synth_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: airspeed_derivative_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: throttle_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pitch_filtered
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
    using DataType = px4::msg::AirspeedValidated;
    is_plain =
      (
      offsetof(DataType, pitch_filtered) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
cdr_serialize_key(
  const px4::msg::AirspeedValidated & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: indicated_airspeed_m_s
  cdr << ros_message.indicated_airspeed_m_s;

  // Member: calibrated_airspeed_m_s
  cdr << ros_message.calibrated_airspeed_m_s;

  // Member: true_airspeed_m_s
  cdr << ros_message.true_airspeed_m_s;

  // Member: airspeed_source
  cdr << ros_message.airspeed_source;

  // Member: calibrated_ground_minus_wind_m_s
  cdr << ros_message.calibrated_ground_minus_wind_m_s;

  // Member: calibraded_airspeed_synth_m_s
  cdr << ros_message.calibraded_airspeed_synth_m_s;

  // Member: airspeed_derivative_filtered
  cdr << ros_message.airspeed_derivative_filtered;

  // Member: throttle_filtered
  cdr << ros_message.throttle_filtered;

  // Member: pitch_filtered
  cdr << ros_message.pitch_filtered;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
get_serialized_size_key(
  const px4::msg::AirspeedValidated & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: indicated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.indicated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibrated_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.calibrated_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: true_airspeed_m_s
  {
    size_t item_size = sizeof(ros_message.true_airspeed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: airspeed_source
  {
    size_t item_size = sizeof(ros_message.airspeed_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibrated_ground_minus_wind_m_s
  {
    size_t item_size = sizeof(ros_message.calibrated_ground_minus_wind_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibraded_airspeed_synth_m_s
  {
    size_t item_size = sizeof(ros_message.calibraded_airspeed_synth_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: airspeed_derivative_filtered
  {
    size_t item_size = sizeof(ros_message.airspeed_derivative_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: throttle_filtered
  {
    size_t item_size = sizeof(ros_message.throttle_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pitch_filtered
  {
    size_t item_size = sizeof(ros_message.pitch_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4
max_serialized_size_key_AirspeedValidated(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: indicated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: calibrated_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: true_airspeed_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: airspeed_source
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibrated_ground_minus_wind_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: calibraded_airspeed_synth_m_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: airspeed_derivative_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_filtered
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_filtered
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
    using DataType = px4::msg::AirspeedValidated;
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
  auto typed_message =
    static_cast<const px4::msg::AirspeedValidated *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AirspeedValidated__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4::msg::AirspeedValidated *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AirspeedValidated__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4::msg::AirspeedValidated *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AirspeedValidated__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AirspeedValidated(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AirspeedValidated__callbacks = {
  "px4::msg",
  "AirspeedValidated",
  _AirspeedValidated__cdr_serialize,
  _AirspeedValidated__cdr_deserialize,
  _AirspeedValidated__get_serialized_size,
  _AirspeedValidated__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AirspeedValidated__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AirspeedValidated__callbacks,
  get_message_typesupport_handle_function,
  &px4__msg__AirspeedValidated__get_type_hash,
  &px4__msg__AirspeedValidated__get_type_description,
  &px4__msg__AirspeedValidated__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::AirspeedValidated>()
{
  return &px4::msg::typesupport_fastrtps_cpp::_AirspeedValidated__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4, msg, AirspeedValidated)() {
  return &px4::msg::typesupport_fastrtps_cpp::_AirspeedValidated__handle;
}

#ifdef __cplusplus
}
#endif
