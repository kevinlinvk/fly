// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_air_data.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_
#define PX4__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/vehicle_air_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_VehicleAirData_calibration_count
{
public:
  explicit Init_VehicleAirData_calibration_count(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  ::px4::msg::VehicleAirData calibration_count(::px4::msg::VehicleAirData::_calibration_count_type arg)
  {
    msg_.calibration_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_rho
{
public:
  explicit Init_VehicleAirData_rho(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_calibration_count rho(::px4::msg::VehicleAirData::_rho_type arg)
  {
    msg_.rho = std::move(arg);
    return Init_VehicleAirData_calibration_count(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_temperature_source
{
public:
  explicit Init_VehicleAirData_temperature_source(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_rho temperature_source(::px4::msg::VehicleAirData::_temperature_source_type arg)
  {
    msg_.temperature_source = std::move(arg);
    return Init_VehicleAirData_rho(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_ambient_temperature
{
public:
  explicit Init_VehicleAirData_ambient_temperature(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_temperature_source ambient_temperature(::px4::msg::VehicleAirData::_ambient_temperature_type arg)
  {
    msg_.ambient_temperature = std::move(arg);
    return Init_VehicleAirData_temperature_source(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_pressure_pa
{
public:
  explicit Init_VehicleAirData_baro_pressure_pa(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_ambient_temperature baro_pressure_pa(::px4::msg::VehicleAirData::_baro_pressure_pa_type arg)
  {
    msg_.baro_pressure_pa = std::move(arg);
    return Init_VehicleAirData_ambient_temperature(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_alt_meter
{
public:
  explicit Init_VehicleAirData_baro_alt_meter(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_pressure_pa baro_alt_meter(::px4::msg::VehicleAirData::_baro_alt_meter_type arg)
  {
    msg_.baro_alt_meter = std::move(arg);
    return Init_VehicleAirData_baro_pressure_pa(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_device_id
{
public:
  explicit Init_VehicleAirData_baro_device_id(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_alt_meter baro_device_id(::px4::msg::VehicleAirData::_baro_device_id_type arg)
  {
    msg_.baro_device_id = std::move(arg);
    return Init_VehicleAirData_baro_alt_meter(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_timestamp_sample
{
public:
  explicit Init_VehicleAirData_timestamp_sample(::px4::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_device_id timestamp_sample(::px4::msg::VehicleAirData::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleAirData_baro_device_id(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_timestamp
{
public:
  Init_VehicleAirData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAirData_timestamp_sample timestamp(::px4::msg::VehicleAirData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleAirData_timestamp_sample(msg_);
  }

private:
  ::px4::msg::VehicleAirData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::VehicleAirData>()
{
  return px4::msg::builder::Init_VehicleAirData_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_
