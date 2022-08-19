// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__SystemMsg __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__SystemMsg __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemMsg_
{
  using Type = SystemMsg_<ContainerAllocator>;

  explicit SystemMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->linux_version = "";
      this->cpu_model_name = "";
      this->user_name = "";
      this->ram_size = 0.0;
      this->used_ram = 0.0;
      this->available_ram = 0.0;
      this->cpu_processor = 0ul;
      this->cpu_temp = 0.0;
    }
  }

  explicit SystemMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_name(_alloc),
    linux_version(_alloc),
    cpu_model_name(_alloc),
    user_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->linux_version = "";
      this->cpu_model_name = "";
      this->user_name = "";
      this->ram_size = 0.0;
      this->used_ram = 0.0;
      this->available_ram = 0.0;
      this->cpu_processor = 0ul;
      this->cpu_temp = 0.0;
    }
  }

  // field types and members
  using _device_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_name_type device_name;
  using _linux_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _linux_version_type linux_version;
  using _cpu_model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cpu_model_name_type cpu_model_name;
  using _user_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_name_type user_name;
  using _partitions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _partitions_type partitions;
  using _system_size_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _system_size_type system_size;
  using _free_space_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _free_space_type free_space;
  using _ram_size_type =
    double;
  _ram_size_type ram_size;
  using _used_ram_type =
    double;
  _used_ram_type used_ram;
  using _available_ram_type =
    double;
  _available_ram_type available_ram;
  using _cpu_processor_type =
    uint32_t;
  _cpu_processor_type cpu_processor;
  using _frequency_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _frequency_type frequency;
  using _cpu_temp_type =
    double;
  _cpu_temp_type cpu_temp;
  using _core_temp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _core_temp_type core_temp;

  // setters for named parameter idiom
  Type & set__device_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_name = _arg;
    return *this;
  }
  Type & set__linux_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->linux_version = _arg;
    return *this;
  }
  Type & set__cpu_model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cpu_model_name = _arg;
    return *this;
  }
  Type & set__user_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_name = _arg;
    return *this;
  }
  Type & set__partitions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->partitions = _arg;
    return *this;
  }
  Type & set__system_size(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->system_size = _arg;
    return *this;
  }
  Type & set__free_space(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->free_space = _arg;
    return *this;
  }
  Type & set__ram_size(
    const double & _arg)
  {
    this->ram_size = _arg;
    return *this;
  }
  Type & set__used_ram(
    const double & _arg)
  {
    this->used_ram = _arg;
    return *this;
  }
  Type & set__available_ram(
    const double & _arg)
  {
    this->available_ram = _arg;
    return *this;
  }
  Type & set__cpu_processor(
    const uint32_t & _arg)
  {
    this->cpu_processor = _arg;
    return *this;
  }
  Type & set__frequency(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__cpu_temp(
    const double & _arg)
  {
    this->cpu_temp = _arg;
    return *this;
  }
  Type & set__core_temp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->core_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::SystemMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::SystemMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SystemMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SystemMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__SystemMsg
    std::shared_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__SystemMsg
    std::shared_ptr<custom_interfaces::msg::SystemMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemMsg_ & other) const
  {
    if (this->device_name != other.device_name) {
      return false;
    }
    if (this->linux_version != other.linux_version) {
      return false;
    }
    if (this->cpu_model_name != other.cpu_model_name) {
      return false;
    }
    if (this->user_name != other.user_name) {
      return false;
    }
    if (this->partitions != other.partitions) {
      return false;
    }
    if (this->system_size != other.system_size) {
      return false;
    }
    if (this->free_space != other.free_space) {
      return false;
    }
    if (this->ram_size != other.ram_size) {
      return false;
    }
    if (this->used_ram != other.used_ram) {
      return false;
    }
    if (this->available_ram != other.available_ram) {
      return false;
    }
    if (this->cpu_processor != other.cpu_processor) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->cpu_temp != other.cpu_temp) {
      return false;
    }
    if (this->core_temp != other.core_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemMsg_

// alias to use template instance with default allocator
using SystemMsg =
  custom_interfaces::msg::SystemMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_HPP_
