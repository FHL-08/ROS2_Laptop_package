// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__BUILDER_HPP_

#include "custom_interfaces/msg/detail/system_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemMsg_core_temp
{
public:
  explicit Init_SystemMsg_core_temp(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::SystemMsg core_temp(::custom_interfaces::msg::SystemMsg::_core_temp_type arg)
  {
    msg_.core_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_cpu_temp
{
public:
  explicit Init_SystemMsg_cpu_temp(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_core_temp cpu_temp(::custom_interfaces::msg::SystemMsg::_cpu_temp_type arg)
  {
    msg_.cpu_temp = std::move(arg);
    return Init_SystemMsg_core_temp(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_frequency
{
public:
  explicit Init_SystemMsg_frequency(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_cpu_temp frequency(::custom_interfaces::msg::SystemMsg::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_SystemMsg_cpu_temp(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_cpu_processor
{
public:
  explicit Init_SystemMsg_cpu_processor(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_frequency cpu_processor(::custom_interfaces::msg::SystemMsg::_cpu_processor_type arg)
  {
    msg_.cpu_processor = std::move(arg);
    return Init_SystemMsg_frequency(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_available_ram
{
public:
  explicit Init_SystemMsg_available_ram(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_cpu_processor available_ram(::custom_interfaces::msg::SystemMsg::_available_ram_type arg)
  {
    msg_.available_ram = std::move(arg);
    return Init_SystemMsg_cpu_processor(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_used_ram
{
public:
  explicit Init_SystemMsg_used_ram(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_available_ram used_ram(::custom_interfaces::msg::SystemMsg::_used_ram_type arg)
  {
    msg_.used_ram = std::move(arg);
    return Init_SystemMsg_available_ram(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_ram_size
{
public:
  explicit Init_SystemMsg_ram_size(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_used_ram ram_size(::custom_interfaces::msg::SystemMsg::_ram_size_type arg)
  {
    msg_.ram_size = std::move(arg);
    return Init_SystemMsg_used_ram(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_free_space
{
public:
  explicit Init_SystemMsg_free_space(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_ram_size free_space(::custom_interfaces::msg::SystemMsg::_free_space_type arg)
  {
    msg_.free_space = std::move(arg);
    return Init_SystemMsg_ram_size(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_system_size
{
public:
  explicit Init_SystemMsg_system_size(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_free_space system_size(::custom_interfaces::msg::SystemMsg::_system_size_type arg)
  {
    msg_.system_size = std::move(arg);
    return Init_SystemMsg_free_space(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_partitions
{
public:
  explicit Init_SystemMsg_partitions(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_system_size partitions(::custom_interfaces::msg::SystemMsg::_partitions_type arg)
  {
    msg_.partitions = std::move(arg);
    return Init_SystemMsg_system_size(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_user_name
{
public:
  explicit Init_SystemMsg_user_name(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_partitions user_name(::custom_interfaces::msg::SystemMsg::_user_name_type arg)
  {
    msg_.user_name = std::move(arg);
    return Init_SystemMsg_partitions(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_cpu_model_name
{
public:
  explicit Init_SystemMsg_cpu_model_name(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_user_name cpu_model_name(::custom_interfaces::msg::SystemMsg::_cpu_model_name_type arg)
  {
    msg_.cpu_model_name = std::move(arg);
    return Init_SystemMsg_user_name(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_linux_version
{
public:
  explicit Init_SystemMsg_linux_version(::custom_interfaces::msg::SystemMsg & msg)
  : msg_(msg)
  {}
  Init_SystemMsg_cpu_model_name linux_version(::custom_interfaces::msg::SystemMsg::_linux_version_type arg)
  {
    msg_.linux_version = std::move(arg);
    return Init_SystemMsg_cpu_model_name(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

class Init_SystemMsg_device_name
{
public:
  Init_SystemMsg_device_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemMsg_linux_version device_name(::custom_interfaces::msg::SystemMsg::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_SystemMsg_linux_version(msg_);
  }

private:
  ::custom_interfaces::msg::SystemMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SystemMsg>()
{
  return custom_interfaces::msg::builder::Init_SystemMsg_device_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__BUILDER_HPP_
