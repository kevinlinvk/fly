// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_air_data.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_
#define PX4__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4/msg/detail/vehicle_air_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleAirData & msg,
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

  // member: baro_device_id
  {
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << ", ";
  }

  // member: baro_alt_meter
  {
    out << "baro_alt_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_alt_meter, out);
    out << ", ";
  }

  // member: baro_pressure_pa
  {
    out << "baro_pressure_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_pressure_pa, out);
    out << ", ";
  }

  // member: ambient_temperature
  {
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << ", ";
  }

  // member: temperature_source
  {
    out << "temperature_source: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_source, out);
    out << ", ";
  }

  // member: rho
  {
    out << "rho: ";
    rosidl_generator_traits::value_to_yaml(msg.rho, out);
    out << ", ";
  }

  // member: calibration_count
  {
    out << "calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleAirData & msg,
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

  // member: baro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << "\n";
  }

  // member: baro_alt_meter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_alt_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_alt_meter, out);
    out << "\n";
  }

  // member: baro_pressure_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_pressure_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_pressure_pa, out);
    out << "\n";
  }

  // member: ambient_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << "\n";
  }

  // member: temperature_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_source: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_source, out);
    out << "\n";
  }

  // member: rho
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rho: ";
    rosidl_generator_traits::value_to_yaml(msg.rho, out);
    out << "\n";
  }

  // member: calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleAirData & msg, bool use_flow_style = false)
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
  const px4::msg::VehicleAirData & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4::msg::VehicleAirData & msg)
{
  return px4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4::msg::VehicleAirData>()
{
  return "px4::msg::VehicleAirData";
}

template<>
inline const char * name<px4::msg::VehicleAirData>()
{
  return "px4/msg/VehicleAirData";
}

template<>
struct has_fixed_size<px4::msg::VehicleAirData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4::msg::VehicleAirData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4::msg::VehicleAirData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4__MSG__DETAIL__VEHICLE_AIR_DATA__TRAITS_HPP_
