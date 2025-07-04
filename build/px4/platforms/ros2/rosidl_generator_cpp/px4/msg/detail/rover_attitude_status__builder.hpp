// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverAttitudeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_attitude_status.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_attitude_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverAttitudeStatus_adjusted_yaw_setpoint
{
public:
  explicit Init_RoverAttitudeStatus_adjusted_yaw_setpoint(::px4::msg::RoverAttitudeStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverAttitudeStatus adjusted_yaw_setpoint(::px4::msg::RoverAttitudeStatus::_adjusted_yaw_setpoint_type arg)
  {
    msg_.adjusted_yaw_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverAttitudeStatus msg_;
};

class Init_RoverAttitudeStatus_measured_yaw
{
public:
  explicit Init_RoverAttitudeStatus_measured_yaw(::px4::msg::RoverAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_RoverAttitudeStatus_adjusted_yaw_setpoint measured_yaw(::px4::msg::RoverAttitudeStatus::_measured_yaw_type arg)
  {
    msg_.measured_yaw = std::move(arg);
    return Init_RoverAttitudeStatus_adjusted_yaw_setpoint(msg_);
  }

private:
  ::px4::msg::RoverAttitudeStatus msg_;
};

class Init_RoverAttitudeStatus_timestamp
{
public:
  Init_RoverAttitudeStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverAttitudeStatus_measured_yaw timestamp(::px4::msg::RoverAttitudeStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverAttitudeStatus_measured_yaw(msg_);
  }

private:
  ::px4::msg::RoverAttitudeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverAttitudeStatus>()
{
  return px4::msg::builder::Init_RoverAttitudeStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_ATTITUDE_STATUS__BUILDER_HPP_
