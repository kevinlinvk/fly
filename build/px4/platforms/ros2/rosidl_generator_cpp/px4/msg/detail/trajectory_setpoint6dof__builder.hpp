// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/TrajectorySetpoint6dof.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/trajectory_setpoint6dof.hpp"


#ifndef PX4__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__BUILDER_HPP_
#define PX4__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/trajectory_setpoint6dof__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_TrajectorySetpoint6dof_angular_velocity
{
public:
  explicit Init_TrajectorySetpoint6dof_angular_velocity(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  ::px4::msg::TrajectorySetpoint6dof angular_velocity(::px4::msg::TrajectorySetpoint6dof::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_quaternion
{
public:
  explicit Init_TrajectorySetpoint6dof_quaternion(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint6dof_angular_velocity quaternion(::px4::msg::TrajectorySetpoint6dof::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_TrajectorySetpoint6dof_angular_velocity(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_jerk
{
public:
  explicit Init_TrajectorySetpoint6dof_jerk(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint6dof_quaternion jerk(::px4::msg::TrajectorySetpoint6dof::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_TrajectorySetpoint6dof_quaternion(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_acceleration
{
public:
  explicit Init_TrajectorySetpoint6dof_acceleration(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint6dof_jerk acceleration(::px4::msg::TrajectorySetpoint6dof::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectorySetpoint6dof_jerk(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_velocity
{
public:
  explicit Init_TrajectorySetpoint6dof_velocity(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint6dof_acceleration velocity(::px4::msg::TrajectorySetpoint6dof::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectorySetpoint6dof_acceleration(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_position
{
public:
  explicit Init_TrajectorySetpoint6dof_position(::px4::msg::TrajectorySetpoint6dof & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint6dof_velocity position(::px4::msg::TrajectorySetpoint6dof::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectorySetpoint6dof_velocity(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

class Init_TrajectorySetpoint6dof_timestamp
{
public:
  Init_TrajectorySetpoint6dof_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectorySetpoint6dof_position timestamp(::px4::msg::TrajectorySetpoint6dof::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrajectorySetpoint6dof_position(msg_);
  }

private:
  ::px4::msg::TrajectorySetpoint6dof msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::TrajectorySetpoint6dof>()
{
  return px4::msg::builder::Init_TrajectorySetpoint6dof_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__BUILDER_HPP_
