// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/Airspeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/airspeed.hpp"


#ifndef PX4__MSG__DETAIL__AIRSPEED__BUILDER_HPP_
#define PX4__MSG__DETAIL__AIRSPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/airspeed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_Airspeed_confidence
{
public:
  explicit Init_Airspeed_confidence(::px4::msg::Airspeed & msg)
  : msg_(msg)
  {}
  ::px4::msg::Airspeed confidence(::px4::msg::Airspeed::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::Airspeed msg_;
};

class Init_Airspeed_true_airspeed_m_s
{
public:
  explicit Init_Airspeed_true_airspeed_m_s(::px4::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_confidence true_airspeed_m_s(::px4::msg::Airspeed::_true_airspeed_m_s_type arg)
  {
    msg_.true_airspeed_m_s = std::move(arg);
    return Init_Airspeed_confidence(msg_);
  }

private:
  ::px4::msg::Airspeed msg_;
};

class Init_Airspeed_indicated_airspeed_m_s
{
public:
  explicit Init_Airspeed_indicated_airspeed_m_s(::px4::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_true_airspeed_m_s indicated_airspeed_m_s(::px4::msg::Airspeed::_indicated_airspeed_m_s_type arg)
  {
    msg_.indicated_airspeed_m_s = std::move(arg);
    return Init_Airspeed_true_airspeed_m_s(msg_);
  }

private:
  ::px4::msg::Airspeed msg_;
};

class Init_Airspeed_timestamp_sample
{
public:
  explicit Init_Airspeed_timestamp_sample(::px4::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_indicated_airspeed_m_s timestamp_sample(::px4::msg::Airspeed::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_Airspeed_indicated_airspeed_m_s(msg_);
  }

private:
  ::px4::msg::Airspeed msg_;
};

class Init_Airspeed_timestamp
{
public:
  Init_Airspeed_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Airspeed_timestamp_sample timestamp(::px4::msg::Airspeed::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Airspeed_timestamp_sample(msg_);
  }

private:
  ::px4::msg::Airspeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::Airspeed>()
{
  return px4::msg::builder::Init_Airspeed_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__AIRSPEED__BUILDER_HPP_
