// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4/msg/telemetry_status.hpp"


#ifndef PX4__MSG__DETAIL__TELEMETRY_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__TELEMETRY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/telemetry_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_TelemetryStatus_parachute_system_healthy
{
public:
  explicit Init_TelemetryStatus_parachute_system_healthy(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::TelemetryStatus parachute_system_healthy(::px4::msg::TelemetryStatus::_parachute_system_healthy_type arg)
  {
    msg_.parachute_system_healthy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_open_drone_id_system_healthy
{
public:
  explicit Init_TelemetryStatus_open_drone_id_system_healthy(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_parachute_system_healthy open_drone_id_system_healthy(::px4::msg::TelemetryStatus::_open_drone_id_system_healthy_type arg)
  {
    msg_.open_drone_id_system_healthy = std::move(arg);
    return Init_TelemetryStatus_parachute_system_healthy(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_uart_bridge
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_uart_bridge(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_open_drone_id_system_healthy heartbeat_component_uart_bridge(::px4::msg::TelemetryStatus::_heartbeat_component_uart_bridge_type arg)
  {
    msg_.heartbeat_component_uart_bridge = std::move(arg);
    return Init_TelemetryStatus_open_drone_id_system_healthy(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_udp_bridge
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_udp_bridge(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_uart_bridge heartbeat_component_udp_bridge(::px4::msg::TelemetryStatus::_heartbeat_component_udp_bridge_type arg)
  {
    msg_.heartbeat_component_udp_bridge = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_uart_bridge(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_pairing_manager
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_pairing_manager(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_udp_bridge heartbeat_component_pairing_manager(::px4::msg::TelemetryStatus::_heartbeat_component_pairing_manager_type arg)
  {
    msg_.heartbeat_component_pairing_manager = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_udp_bridge(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_vio
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_vio(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_pairing_manager heartbeat_component_vio(::px4::msg::TelemetryStatus::_heartbeat_component_vio_type arg)
  {
    msg_.heartbeat_component_vio = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_pairing_manager(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_osd
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_osd(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_vio heartbeat_component_osd(::px4::msg::TelemetryStatus::_heartbeat_component_osd_type arg)
  {
    msg_.heartbeat_component_osd = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_vio(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_log
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_log(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_osd heartbeat_component_log(::px4::msg::TelemetryStatus::_heartbeat_component_log_type arg)
  {
    msg_.heartbeat_component_log = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_osd(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_component_telemetry_radio
{
public:
  explicit Init_TelemetryStatus_heartbeat_component_telemetry_radio(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_log heartbeat_component_telemetry_radio(::px4::msg::TelemetryStatus::_heartbeat_component_telemetry_radio_type arg)
  {
    msg_.heartbeat_component_telemetry_radio = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_log(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_open_drone_id
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_open_drone_id(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_component_telemetry_radio heartbeat_type_open_drone_id(::px4::msg::TelemetryStatus::_heartbeat_type_open_drone_id_type arg)
  {
    msg_.heartbeat_type_open_drone_id = std::move(arg);
    return Init_TelemetryStatus_heartbeat_component_telemetry_radio(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_parachute
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_parachute(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_open_drone_id heartbeat_type_parachute(::px4::msg::TelemetryStatus::_heartbeat_type_parachute_type arg)
  {
    msg_.heartbeat_type_parachute = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_open_drone_id(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_camera
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_camera(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_parachute heartbeat_type_camera(::px4::msg::TelemetryStatus::_heartbeat_type_camera_type arg)
  {
    msg_.heartbeat_type_camera = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_parachute(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_adsb
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_adsb(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_camera heartbeat_type_adsb(::px4::msg::TelemetryStatus::_heartbeat_type_adsb_type arg)
  {
    msg_.heartbeat_type_adsb = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_camera(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_gimbal
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_gimbal(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_adsb heartbeat_type_gimbal(::px4::msg::TelemetryStatus::_heartbeat_type_gimbal_type arg)
  {
    msg_.heartbeat_type_gimbal = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_adsb(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_onboard_controller
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_onboard_controller(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_gimbal heartbeat_type_onboard_controller(::px4::msg::TelemetryStatus::_heartbeat_type_onboard_controller_type arg)
  {
    msg_.heartbeat_type_onboard_controller = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_gimbal(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_gcs
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_gcs(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_onboard_controller heartbeat_type_gcs(::px4::msg::TelemetryStatus::_heartbeat_type_gcs_type arg)
  {
    msg_.heartbeat_type_gcs = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_onboard_controller(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_heartbeat_type_antenna_tracker
{
public:
  explicit Init_TelemetryStatus_heartbeat_type_antenna_tracker(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_gcs heartbeat_type_antenna_tracker(::px4::msg::TelemetryStatus::_heartbeat_type_antenna_tracker_type arg)
  {
    msg_.heartbeat_type_antenna_tracker = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_gcs(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_message_lost_rate
{
public:
  explicit Init_TelemetryStatus_rx_message_lost_rate(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_heartbeat_type_antenna_tracker rx_message_lost_rate(::px4::msg::TelemetryStatus::_rx_message_lost_rate_type arg)
  {
    msg_.rx_message_lost_rate = std::move(arg);
    return Init_TelemetryStatus_heartbeat_type_antenna_tracker(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_packet_drop_count
{
public:
  explicit Init_TelemetryStatus_rx_packet_drop_count(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_message_lost_rate rx_packet_drop_count(::px4::msg::TelemetryStatus::_rx_packet_drop_count_type arg)
  {
    msg_.rx_packet_drop_count = std::move(arg);
    return Init_TelemetryStatus_rx_message_lost_rate(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_parse_errors
{
public:
  explicit Init_TelemetryStatus_rx_parse_errors(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_packet_drop_count rx_parse_errors(::px4::msg::TelemetryStatus::_rx_parse_errors_type arg)
  {
    msg_.rx_parse_errors = std::move(arg);
    return Init_TelemetryStatus_rx_packet_drop_count(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_buffer_overruns
{
public:
  explicit Init_TelemetryStatus_rx_buffer_overruns(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_parse_errors rx_buffer_overruns(::px4::msg::TelemetryStatus::_rx_buffer_overruns_type arg)
  {
    msg_.rx_buffer_overruns = std::move(arg);
    return Init_TelemetryStatus_rx_parse_errors(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_message_lost_count
{
public:
  explicit Init_TelemetryStatus_rx_message_lost_count(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_buffer_overruns rx_message_lost_count(::px4::msg::TelemetryStatus::_rx_message_lost_count_type arg)
  {
    msg_.rx_message_lost_count = std::move(arg);
    return Init_TelemetryStatus_rx_buffer_overruns(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_message_count
{
public:
  explicit Init_TelemetryStatus_rx_message_count(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_message_lost_count rx_message_count(::px4::msg::TelemetryStatus::_rx_message_count_type arg)
  {
    msg_.rx_message_count = std::move(arg);
    return Init_TelemetryStatus_rx_message_lost_count(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rx_rate_avg
{
public:
  explicit Init_TelemetryStatus_rx_rate_avg(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_message_count rx_rate_avg(::px4::msg::TelemetryStatus::_rx_rate_avg_type arg)
  {
    msg_.rx_rate_avg = std::move(arg);
    return Init_TelemetryStatus_rx_message_count(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_tx_buffer_overruns
{
public:
  explicit Init_TelemetryStatus_tx_buffer_overruns(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rx_rate_avg tx_buffer_overruns(::px4::msg::TelemetryStatus::_tx_buffer_overruns_type arg)
  {
    msg_.tx_buffer_overruns = std::move(arg);
    return Init_TelemetryStatus_rx_rate_avg(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_tx_message_count
{
public:
  explicit Init_TelemetryStatus_tx_message_count(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_tx_buffer_overruns tx_message_count(::px4::msg::TelemetryStatus::_tx_message_count_type arg)
  {
    msg_.tx_message_count = std::move(arg);
    return Init_TelemetryStatus_tx_buffer_overruns(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_tx_error_rate_avg
{
public:
  explicit Init_TelemetryStatus_tx_error_rate_avg(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_tx_message_count tx_error_rate_avg(::px4::msg::TelemetryStatus::_tx_error_rate_avg_type arg)
  {
    msg_.tx_error_rate_avg = std::move(arg);
    return Init_TelemetryStatus_tx_message_count(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_tx_rate_avg
{
public:
  explicit Init_TelemetryStatus_tx_rate_avg(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_tx_error_rate_avg tx_rate_avg(::px4::msg::TelemetryStatus::_tx_rate_avg_type arg)
  {
    msg_.tx_rate_avg = std::move(arg);
    return Init_TelemetryStatus_tx_error_rate_avg(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_rate_multiplier
{
public:
  explicit Init_TelemetryStatus_rate_multiplier(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_tx_rate_avg rate_multiplier(::px4::msg::TelemetryStatus::_rate_multiplier_type arg)
  {
    msg_.rate_multiplier = std::move(arg);
    return Init_TelemetryStatus_tx_rate_avg(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_data_rate
{
public:
  explicit Init_TelemetryStatus_data_rate(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_rate_multiplier data_rate(::px4::msg::TelemetryStatus::_data_rate_type arg)
  {
    msg_.data_rate = std::move(arg);
    return Init_TelemetryStatus_rate_multiplier(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_streams
{
public:
  explicit Init_TelemetryStatus_streams(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_data_rate streams(::px4::msg::TelemetryStatus::_streams_type arg)
  {
    msg_.streams = std::move(arg);
    return Init_TelemetryStatus_data_rate(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_ftp
{
public:
  explicit Init_TelemetryStatus_ftp(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_streams ftp(::px4::msg::TelemetryStatus::_ftp_type arg)
  {
    msg_.ftp = std::move(arg);
    return Init_TelemetryStatus_streams(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_mavlink_v2
{
public:
  explicit Init_TelemetryStatus_mavlink_v2(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_ftp mavlink_v2(::px4::msg::TelemetryStatus::_mavlink_v2_type arg)
  {
    msg_.mavlink_v2 = std::move(arg);
    return Init_TelemetryStatus_ftp(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_forwarding
{
public:
  explicit Init_TelemetryStatus_forwarding(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_mavlink_v2 forwarding(::px4::msg::TelemetryStatus::_forwarding_type arg)
  {
    msg_.forwarding = std::move(arg);
    return Init_TelemetryStatus_mavlink_v2(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_flow_control
{
public:
  explicit Init_TelemetryStatus_flow_control(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_forwarding flow_control(::px4::msg::TelemetryStatus::_flow_control_type arg)
  {
    msg_.flow_control = std::move(arg);
    return Init_TelemetryStatus_forwarding(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_mode
{
public:
  explicit Init_TelemetryStatus_mode(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_flow_control mode(::px4::msg::TelemetryStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_TelemetryStatus_flow_control(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_type
{
public:
  explicit Init_TelemetryStatus_type(::px4::msg::TelemetryStatus & msg)
  : msg_(msg)
  {}
  Init_TelemetryStatus_mode type(::px4::msg::TelemetryStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TelemetryStatus_mode(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

class Init_TelemetryStatus_timestamp
{
public:
  Init_TelemetryStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TelemetryStatus_type timestamp(::px4::msg::TelemetryStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TelemetryStatus_type(msg_);
  }

private:
  ::px4::msg::TelemetryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::TelemetryStatus>()
{
  return px4::msg::builder::Init_TelemetryStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__TELEMETRY_STATUS__BUILDER_HPP_
