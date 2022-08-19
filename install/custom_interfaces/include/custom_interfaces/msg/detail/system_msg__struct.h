// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_name'
// Member 'linux_version'
// Member 'cpu_model_name'
// Member 'user_name'
// Member 'partitions'
#include "rosidl_runtime_c/string.h"
// Member 'system_size'
// Member 'free_space'
// Member 'frequency'
// Member 'core_temp'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SystemMsg in the package custom_interfaces.
typedef struct custom_interfaces__msg__SystemMsg
{
  rosidl_runtime_c__String device_name;
  rosidl_runtime_c__String linux_version;
  rosidl_runtime_c__String cpu_model_name;
  rosidl_runtime_c__String user_name;
  rosidl_runtime_c__String__Sequence partitions;
  rosidl_runtime_c__float__Sequence system_size;
  rosidl_runtime_c__float__Sequence free_space;
  double ram_size;
  double used_ram;
  double available_ram;
  uint32_t cpu_processor;
  rosidl_runtime_c__float__Sequence frequency;
  double cpu_temp;
  rosidl_runtime_c__float__Sequence core_temp;
} custom_interfaces__msg__SystemMsg;

// Struct for a sequence of custom_interfaces__msg__SystemMsg.
typedef struct custom_interfaces__msg__SystemMsg__Sequence
{
  custom_interfaces__msg__SystemMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SystemMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SYSTEM_MSG__STRUCT_H_
