// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_attitude_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/vehicle_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_VehicleAttitudeSetpoint_thrust_body
{
public:
  explicit Init_VehicleAttitudeSetpoint_thrust_body(::px4::msg::VehicleAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::VehicleAttitudeSetpoint thrust_body(::px4::msg::VehicleAttitudeSetpoint::_thrust_body_type arg)
  {
    msg_.thrust_body = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::VehicleAttitudeSetpoint msg_;
};

class Init_VehicleAttitudeSetpoint_q_d
{
public:
  explicit Init_VehicleAttitudeSetpoint_q_d(::px4::msg::VehicleAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleAttitudeSetpoint_thrust_body q_d(::px4::msg::VehicleAttitudeSetpoint::_q_d_type arg)
  {
    msg_.q_d = std::move(arg);
    return Init_VehicleAttitudeSetpoint_thrust_body(msg_);
  }

private:
  ::px4::msg::VehicleAttitudeSetpoint msg_;
};

class Init_VehicleAttitudeSetpoint_yaw_sp_move_rate
{
public:
  explicit Init_VehicleAttitudeSetpoint_yaw_sp_move_rate(::px4::msg::VehicleAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleAttitudeSetpoint_q_d yaw_sp_move_rate(::px4::msg::VehicleAttitudeSetpoint::_yaw_sp_move_rate_type arg)
  {
    msg_.yaw_sp_move_rate = std::move(arg);
    return Init_VehicleAttitudeSetpoint_q_d(msg_);
  }

private:
  ::px4::msg::VehicleAttitudeSetpoint msg_;
};

class Init_VehicleAttitudeSetpoint_timestamp
{
public:
  Init_VehicleAttitudeSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAttitudeSetpoint_yaw_sp_move_rate timestamp(::px4::msg::VehicleAttitudeSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleAttitudeSetpoint_yaw_sp_move_rate(msg_);
  }

private:
  ::px4::msg::VehicleAttitudeSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::VehicleAttitudeSetpoint>()
{
  return px4::msg::builder::Init_VehicleAttitudeSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__BUILDER_HPP_
