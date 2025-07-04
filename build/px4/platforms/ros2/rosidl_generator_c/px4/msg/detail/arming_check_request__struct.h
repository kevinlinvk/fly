// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/arming_check_request.h"


#ifndef PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
#define PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4__msg__ArmingCheckRequest__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/ArmingCheckRequest in the package px4.
/**
  * Arming check request.
  *
  * Broadcast message to request arming checks be reported by all registered components, such as external ROS 2 navigation modes.
  * All registered components should respond with an ArmingCheckReply message that indicates their current mode requirements, and any arming failure information.
  * The request is sent regularly, even while armed, so that the FMU always knows the current arming state for external modes, and can forward it to ground stations.
  *
  * The reply will include the published request_id, allowing correlation of all arming check information for a particular request.
  * The reply will also include the registration_id for each external component, provided to it during the registration process (RegisterExtComponentReply).
 */
typedef struct px4__msg__ArmingCheckRequest
{
  /// Time since system start.
  uint64_t timestamp;
  /// Id of this request. Allows correlation with associated ArmingCheckReply messages.
  uint8_t request_id;
} px4__msg__ArmingCheckRequest;

// Struct for a sequence of px4__msg__ArmingCheckRequest.
typedef struct px4__msg__ArmingCheckRequest__Sequence
{
  px4__msg__ArmingCheckRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4__msg__ArmingCheckRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
