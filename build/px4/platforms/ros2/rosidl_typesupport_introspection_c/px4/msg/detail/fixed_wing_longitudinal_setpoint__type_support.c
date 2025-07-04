// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4/msg/detail/fixed_wing_longitudinal_setpoint__rosidl_typesupport_introspection_c.h"
#include "px4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4/msg/detail/fixed_wing_longitudinal_setpoint__functions.h"
#include "px4/msg/detail/fixed_wing_longitudinal_setpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4__msg__FixedWingLongitudinalSetpoint__init(message_memory);
}

void px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_fini_function(void * message_memory)
{
  px4__msg__FixedWingLongitudinalSetpoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, height_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equivalent_airspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, equivalent_airspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_direct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, pitch_direct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_direct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__FixedWingLongitudinalSetpoint, throttle_direct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_members = {
  "px4__msg",  // message namespace
  "FixedWingLongitudinalSetpoint",  // message name
  6,  // number of fields
  sizeof(px4__msg__FixedWingLongitudinalSetpoint),
  false,  // has_any_key_member_
  px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_member_array,  // message members
  px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_type_support_handle = {
  0,
  &px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_members,
  get_message_typesupport_handle_function,
  &px4__msg__FixedWingLongitudinalSetpoint__get_type_hash,
  &px4__msg__FixedWingLongitudinalSetpoint__get_type_description,
  &px4__msg__FixedWingLongitudinalSetpoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4, msg, FixedWingLongitudinalSetpoint)() {
  if (!px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_type_support_handle.typesupport_identifier) {
    px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4__msg__FixedWingLongitudinalSetpoint__rosidl_typesupport_introspection_c__FixedWingLongitudinalSetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
