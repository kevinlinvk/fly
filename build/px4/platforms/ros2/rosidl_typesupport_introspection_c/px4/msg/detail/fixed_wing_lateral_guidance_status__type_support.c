// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4/msg/detail/fixed_wing_lateral_guidance_status__rosidl_typesupport_introspection_c.h"
#include "px4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4/msg/detail/fixed_wing_lateral_guidance_status__functions.h"
#include "px4/msg/detail/fixed_wing_lateral_guidance_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4__msg__FixedWingLateralGuidanceStatus__init(message_memory);
}

void px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_fini_function(void * message_memory)
{
  px4__msg__FixedWingLateralGuidanceStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_member_array[9] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "course_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, course_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_acceleration_ff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, lateral_acceleration_ff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bearing_feas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, bearing_feas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bearing_feas_on_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, bearing_feas_on_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signed_track_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, signed_track_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_error_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, track_error_bound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adapted_period",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, adapted_period),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wind_est_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLateralGuidanceStatus, wind_est_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_members = {
  "px4__msg",  // message namespace
  "FixedWingLateralGuidanceStatus",  // message name
  9,  // number of fields
  sizeof(px4__msg__FixedWingLateralGuidanceStatus),
  false,  // has_any_key_member_
  px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_member_array,  // message members
  px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_type_support_handle = {
  0,
  &px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_members,
  get_message_typesupport_handle_function,
  &px4__msg__FixedWingLateralGuidanceStatus__get_type_hash,
  &px4__msg__FixedWingLateralGuidanceStatus__get_type_description,
  &px4__msg__FixedWingLateralGuidanceStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4, msg, FixedWingLateralGuidanceStatus)() {
  if (!px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_type_support_handle.typesupport_identifier) {
    px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4__msg__FixedWingLateralGuidanceStatus__rosidl_typesupport_introspection_c__FixedWingLateralGuidanceStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
