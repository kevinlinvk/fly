// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_steering_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_steering_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverSteeringSetpoint_normalized_steering_setpoint
{
public:
  explicit Init_RoverSteeringSetpoint_normalized_steering_setpoint(::px4::msg::RoverSteeringSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverSteeringSetpoint normalized_steering_setpoint(::px4::msg::RoverSteeringSetpoint::_normalized_steering_setpoint_type arg)
  {
    msg_.normalized_steering_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverSteeringSetpoint msg_;
};

class Init_RoverSteeringSetpoint_timestamp
{
public:
  Init_RoverSteeringSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverSteeringSetpoint_normalized_steering_setpoint timestamp(::px4::msg::RoverSteeringSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverSteeringSetpoint_normalized_steering_setpoint(msg_);
  }

private:
  ::px4::msg::RoverSteeringSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverSteeringSetpoint>()
{
  return px4::msg::builder::Init_RoverSteeringSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_
