// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__TRAITS_HPP_

#include "custom_interfaces/msg/detail/system_msg__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::msg::SystemMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_name: ";
    value_to_yaml(msg.device_name, out);
    out << "\n";
  }

  // member: linux_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linux_version: ";
    value_to_yaml(msg.linux_version, out);
    out << "\n";
  }

  // member: cpu_model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_model_name: ";
    value_to_yaml(msg.cpu_model_name, out);
    out << "\n";
  }

  // member: user_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_name: ";
    value_to_yaml(msg.user_name, out);
    out << "\n";
  }

  // member: partitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.partitions.size() == 0) {
      out << "partitions: []\n";
    } else {
      out << "partitions:\n";
      for (auto item : msg.partitions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: system_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.system_size.size() == 0) {
      out << "system_size: []\n";
    } else {
      out << "system_size:\n";
      for (auto item : msg.system_size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: free_space
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.free_space.size() == 0) {
      out << "free_space: []\n";
    } else {
      out << "free_space:\n";
      for (auto item : msg.free_space) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ram_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_size: ";
    value_to_yaml(msg.ram_size, out);
    out << "\n";
  }

  // member: used_ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "used_ram: ";
    value_to_yaml(msg.used_ram, out);
    out << "\n";
  }

  // member: available_ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_ram: ";
    value_to_yaml(msg.available_ram, out);
    out << "\n";
  }

  // member: cpu_processor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_processor: ";
    value_to_yaml(msg.cpu_processor, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frequency.size() == 0) {
      out << "frequency: []\n";
    } else {
      out << "frequency:\n";
      for (auto item : msg.frequency) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cpu_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temp: ";
    value_to_yaml(msg.cpu_temp, out);
    out << "\n";
  }

  // member: core_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.core_temp.size() == 0) {
      out << "core_temp: []\n";
    } else {
      out << "core_temp:\n";
      for (auto item : msg.core_temp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::msg::SystemMsg & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::msg::SystemMsg>()
{
  return "custom_interfaces::msg::SystemMsg";
}

template<>
inline const char * name<custom_interfaces::msg::SystemMsg>()
{
  return "custom_interfaces/msg/SystemMsg";
}

template<>
struct has_fixed_size<custom_interfaces::msg::SystemMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::SystemMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::SystemMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__TRAITS_HPP_
