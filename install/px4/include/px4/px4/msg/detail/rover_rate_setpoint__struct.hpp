// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/RoverRateSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_rate_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_HPP_
#define PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__RoverRateSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__RoverRateSetpoint __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverRateSetpoint_
{
  using Type = RoverRateSetpoint_<ContainerAllocator>;

  explicit RoverRateSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->yaw_rate_setpoint = 0.0f;
    }
  }

  explicit RoverRateSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->yaw_rate_setpoint = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _yaw_rate_setpoint_type =
    float;
  _yaw_rate_setpoint_type yaw_rate_setpoint;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__yaw_rate_setpoint(
    const float & _arg)
  {
    this->yaw_rate_setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4::msg::RoverRateSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::RoverRateSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::RoverRateSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::RoverRateSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__RoverRateSetpoint
    std::shared_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__RoverRateSetpoint
    std::shared_ptr<px4::msg::RoverRateSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverRateSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->yaw_rate_setpoint != other.yaw_rate_setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverRateSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverRateSetpoint_

// alias to use template instance with default allocator
using RoverRateSetpoint =
  px4::msg::RoverRateSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_HPP_
