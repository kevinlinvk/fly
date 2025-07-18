// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverRateStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_rate_status.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_RATE_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_RATE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_rate_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverRateStatus_pid_yaw_rate_integral
{
public:
  explicit Init_RoverRateStatus_pid_yaw_rate_integral(::px4::msg::RoverRateStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverRateStatus pid_yaw_rate_integral(::px4::msg::RoverRateStatus::_pid_yaw_rate_integral_type arg)
  {
    msg_.pid_yaw_rate_integral = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverRateStatus msg_;
};

class Init_RoverRateStatus_adjusted_yaw_rate_setpoint
{
public:
  explicit Init_RoverRateStatus_adjusted_yaw_rate_setpoint(::px4::msg::RoverRateStatus & msg)
  : msg_(msg)
  {}
  Init_RoverRateStatus_pid_yaw_rate_integral adjusted_yaw_rate_setpoint(::px4::msg::RoverRateStatus::_adjusted_yaw_rate_setpoint_type arg)
  {
    msg_.adjusted_yaw_rate_setpoint = std::move(arg);
    return Init_RoverRateStatus_pid_yaw_rate_integral(msg_);
  }

private:
  ::px4::msg::RoverRateStatus msg_;
};

class Init_RoverRateStatus_measured_yaw_rate
{
public:
  explicit Init_RoverRateStatus_measured_yaw_rate(::px4::msg::RoverRateStatus & msg)
  : msg_(msg)
  {}
  Init_RoverRateStatus_adjusted_yaw_rate_setpoint measured_yaw_rate(::px4::msg::RoverRateStatus::_measured_yaw_rate_type arg)
  {
    msg_.measured_yaw_rate = std::move(arg);
    return Init_RoverRateStatus_adjusted_yaw_rate_setpoint(msg_);
  }

private:
  ::px4::msg::RoverRateStatus msg_;
};

class Init_RoverRateStatus_timestamp
{
public:
  Init_RoverRateStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverRateStatus_measured_yaw_rate timestamp(::px4::msg::RoverRateStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverRateStatus_measured_yaw_rate(msg_);
  }

private:
  ::px4::msg::RoverRateStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverRateStatus>()
{
  return px4::msg::builder::Init_RoverRateStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_RATE_STATUS__BUILDER_HPP_
