// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/vehicle_air_data.hpp"


#ifndef PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_HPP_
#define PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__VehicleAirData __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__VehicleAirData __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleAirData_
{
  using Type = VehicleAirData_<ContainerAllocator>;

  explicit VehicleAirData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->baro_device_id = 0ul;
      this->baro_alt_meter = 0.0f;
      this->baro_pressure_pa = 0.0f;
      this->ambient_temperature = 0.0f;
      this->temperature_source = 0;
      this->rho = 0.0f;
      this->calibration_count = 0;
    }
  }

  explicit VehicleAirData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->baro_device_id = 0ul;
      this->baro_alt_meter = 0.0f;
      this->baro_pressure_pa = 0.0f;
      this->ambient_temperature = 0.0f;
      this->temperature_source = 0;
      this->rho = 0.0f;
      this->calibration_count = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _baro_device_id_type =
    uint32_t;
  _baro_device_id_type baro_device_id;
  using _baro_alt_meter_type =
    float;
  _baro_alt_meter_type baro_alt_meter;
  using _baro_pressure_pa_type =
    float;
  _baro_pressure_pa_type baro_pressure_pa;
  using _ambient_temperature_type =
    float;
  _ambient_temperature_type ambient_temperature;
  using _temperature_source_type =
    uint8_t;
  _temperature_source_type temperature_source;
  using _rho_type =
    float;
  _rho_type rho;
  using _calibration_count_type =
    uint8_t;
  _calibration_count_type calibration_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__baro_device_id(
    const uint32_t & _arg)
  {
    this->baro_device_id = _arg;
    return *this;
  }
  Type & set__baro_alt_meter(
    const float & _arg)
  {
    this->baro_alt_meter = _arg;
    return *this;
  }
  Type & set__baro_pressure_pa(
    const float & _arg)
  {
    this->baro_pressure_pa = _arg;
    return *this;
  }
  Type & set__ambient_temperature(
    const float & _arg)
  {
    this->ambient_temperature = _arg;
    return *this;
  }
  Type & set__temperature_source(
    const uint8_t & _arg)
  {
    this->temperature_source = _arg;
    return *this;
  }
  Type & set__rho(
    const float & _arg)
  {
    this->rho = _arg;
    return *this;
  }
  Type & set__calibration_count(
    const uint8_t & _arg)
  {
    this->calibration_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4::msg::VehicleAirData_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::VehicleAirData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::VehicleAirData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::VehicleAirData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::VehicleAirData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::VehicleAirData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::VehicleAirData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::VehicleAirData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::VehicleAirData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::VehicleAirData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__VehicleAirData
    std::shared_ptr<px4::msg::VehicleAirData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__VehicleAirData
    std::shared_ptr<px4::msg::VehicleAirData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleAirData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->baro_device_id != other.baro_device_id) {
      return false;
    }
    if (this->baro_alt_meter != other.baro_alt_meter) {
      return false;
    }
    if (this->baro_pressure_pa != other.baro_pressure_pa) {
      return false;
    }
    if (this->ambient_temperature != other.ambient_temperature) {
      return false;
    }
    if (this->temperature_source != other.temperature_source) {
      return false;
    }
    if (this->rho != other.rho) {
      return false;
    }
    if (this->calibration_count != other.calibration_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleAirData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleAirData_

// alias to use template instance with default allocator
using VehicleAirData =
  px4::msg::VehicleAirData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_HPP_
