// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4:msg/Airspeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/airspeed.hpp"


#ifndef PX4__MSG__DETAIL__AIRSPEED__TRAITS_HPP_
#define PX4__MSG__DETAIL__AIRSPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4/msg/detail/airspeed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4
{

namespace msg
{

inline void to_flow_style_yaml(
  const Airspeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: indicated_airspeed_m_s
  {
    out << "indicated_airspeed_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.indicated_airspeed_m_s, out);
    out << ", ";
  }

  // member: true_airspeed_m_s
  {
    out << "true_airspeed_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_m_s, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Airspeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: indicated_airspeed_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indicated_airspeed_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.indicated_airspeed_m_s, out);
    out << "\n";
  }

  // member: true_airspeed_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_m_s, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Airspeed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4

namespace rosidl_generator_traits
{

[[deprecated("use px4::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4::msg::Airspeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4::msg::Airspeed & msg)
{
  return px4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4::msg::Airspeed>()
{
  return "px4::msg::Airspeed";
}

template<>
inline const char * name<px4::msg::Airspeed>()
{
  return "px4/msg/Airspeed";
}

template<>
struct has_fixed_size<px4::msg::Airspeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4::msg::Airspeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4::msg::Airspeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4__MSG__DETAIL__AIRSPEED__TRAITS_HPP_
