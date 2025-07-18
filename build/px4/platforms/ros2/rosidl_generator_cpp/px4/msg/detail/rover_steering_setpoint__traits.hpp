// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/rover_steering_setpoint.hpp"


#ifndef PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__TRAITS_HPP_
#define PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4/msg/detail/rover_steering_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverSteeringSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: normalized_steering_setpoint
  {
    out << "normalized_steering_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.normalized_steering_setpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverSteeringSetpoint & msg,
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

  // member: normalized_steering_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normalized_steering_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.normalized_steering_setpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverSteeringSetpoint & msg, bool use_flow_style = false)
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
  const px4::msg::RoverSteeringSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4::msg::RoverSteeringSetpoint & msg)
{
  return px4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4::msg::RoverSteeringSetpoint>()
{
  return "px4::msg::RoverSteeringSetpoint";
}

template<>
inline const char * name<px4::msg::RoverSteeringSetpoint>()
{
  return "px4/msg/RoverSteeringSetpoint";
}

template<>
struct has_fixed_size<px4::msg::RoverSteeringSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4::msg::RoverSteeringSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4::msg::RoverSteeringSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__TRAITS_HPP_
