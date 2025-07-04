// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverAttitudeSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_attitude_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverAttitudeSetpoint_yaw_setpoint
{
public:
  explicit Init_RoverAttitudeSetpoint_yaw_setpoint(::px4::msg::RoverAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverAttitudeSetpoint yaw_setpoint(::px4::msg::RoverAttitudeSetpoint::_yaw_setpoint_type arg)
  {
    msg_.yaw_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverAttitudeSetpoint msg_;
};

class Init_RoverAttitudeSetpoint_timestamp
{
public:
  Init_RoverAttitudeSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverAttitudeSetpoint_yaw_setpoint timestamp(::px4::msg::RoverAttitudeSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverAttitudeSetpoint_yaw_setpoint(msg_);
  }

private:
  ::px4::msg::RoverAttitudeSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverAttitudeSetpoint>()
{
  return px4::msg::builder::Init_RoverAttitudeSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_
