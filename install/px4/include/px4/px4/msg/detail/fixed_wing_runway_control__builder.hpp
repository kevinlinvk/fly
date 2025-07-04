// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/fixed_wing_runway_control.hpp"


#ifndef PX4__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_
#define PX4__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/fixed_wing_runway_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_FixedWingRunwayControl_wheel_steering_nudging_rate
{
public:
  explicit Init_FixedWingRunwayControl_wheel_steering_nudging_rate(::px4::msg::FixedWingRunwayControl & msg)
  : msg_(msg)
  {}
  ::px4::msg::FixedWingRunwayControl wheel_steering_nudging_rate(::px4::msg::FixedWingRunwayControl::_wheel_steering_nudging_rate_type arg)
  {
    msg_.wheel_steering_nudging_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::FixedWingRunwayControl msg_;
};

class Init_FixedWingRunwayControl_wheel_steering_enabled
{
public:
  explicit Init_FixedWingRunwayControl_wheel_steering_enabled(::px4::msg::FixedWingRunwayControl & msg)
  : msg_(msg)
  {}
  Init_FixedWingRunwayControl_wheel_steering_nudging_rate wheel_steering_enabled(::px4::msg::FixedWingRunwayControl::_wheel_steering_enabled_type arg)
  {
    msg_.wheel_steering_enabled = std::move(arg);
    return Init_FixedWingRunwayControl_wheel_steering_nudging_rate(msg_);
  }

private:
  ::px4::msg::FixedWingRunwayControl msg_;
};

class Init_FixedWingRunwayControl_timestamp
{
public:
  Init_FixedWingRunwayControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingRunwayControl_wheel_steering_enabled timestamp(::px4::msg::FixedWingRunwayControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingRunwayControl_wheel_steering_enabled(msg_);
  }

private:
  ::px4::msg::FixedWingRunwayControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::FixedWingRunwayControl>()
{
  return px4::msg::builder::Init_FixedWingRunwayControl_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_
