// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from px4:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice
#ifndef PX4__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PX4__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "px4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4/msg/detail/internal_combustion_engine_control__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_px4__msg__InternalCombustionEngineControl(
  const px4__msg__InternalCombustionEngineControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_deserialize_px4__msg__InternalCombustionEngineControl(
  eprosima::fastcdr::Cdr &,
  px4__msg__InternalCombustionEngineControl * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_px4__msg__InternalCombustionEngineControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_px4__msg__InternalCombustionEngineControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
bool cdr_serialize_key_px4__msg__InternalCombustionEngineControl(
  const px4__msg__InternalCombustionEngineControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t get_serialized_size_key_px4__msg__InternalCombustionEngineControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
size_t max_serialized_size_key_px4__msg__InternalCombustionEngineControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4, msg, InternalCombustionEngineControl)();

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
