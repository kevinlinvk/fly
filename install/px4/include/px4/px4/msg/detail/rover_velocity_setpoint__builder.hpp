// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverVelocitySetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_velocity_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_VELOCITY_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_VELOCITY_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_velocity_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverVelocitySetpoint_yaw
{
public:
  explicit Init_RoverVelocitySetpoint_yaw(::px4::msg::RoverVelocitySetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverVelocitySetpoint yaw(::px4::msg::RoverVelocitySetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverVelocitySetpoint msg_;
};

class Init_RoverVelocitySetpoint_bearing
{
public:
  explicit Init_RoverVelocitySetpoint_bearing(::px4::msg::RoverVelocitySetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverVelocitySetpoint_yaw bearing(::px4::msg::RoverVelocitySetpoint::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_RoverVelocitySetpoint_yaw(msg_);
  }

private:
  ::px4::msg::RoverVelocitySetpoint msg_;
};

class Init_RoverVelocitySetpoint_speed
{
public:
  explicit Init_RoverVelocitySetpoint_speed(::px4::msg::RoverVelocitySetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverVelocitySetpoint_bearing speed(::px4::msg::RoverVelocitySetpoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RoverVelocitySetpoint_bearing(msg_);
  }

private:
  ::px4::msg::RoverVelocitySetpoint msg_;
};

class Init_RoverVelocitySetpoint_timestamp
{
public:
  Init_RoverVelocitySetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverVelocitySetpoint_speed timestamp(::px4::msg::RoverVelocitySetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverVelocitySetpoint_speed(msg_);
  }

private:
  ::px4::msg::RoverVelocitySetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverVelocitySetpoint>()
{
  return px4::msg::builder::Init_RoverVelocitySetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_VELOCITY_SETPOINT__BUILDER_HPP_
