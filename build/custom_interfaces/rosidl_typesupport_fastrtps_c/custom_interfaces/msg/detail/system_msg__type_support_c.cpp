// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/system_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/system_msg__struct.h"
#include "custom_interfaces/msg/detail/system_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // core_temp, free_space, frequency, system_size
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // core_temp, free_space, frequency, system_size
#include "rosidl_runtime_c/string.h"  // cpu_model_name, device_name, linux_version, partitions, user_name
#include "rosidl_runtime_c/string_functions.h"  // cpu_model_name, device_name, linux_version, partitions, user_name

// forward declare type support functions


using _SystemMsg__ros_msg_type = custom_interfaces__msg__SystemMsg;

static bool _SystemMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SystemMsg__ros_msg_type * ros_message = static_cast<const _SystemMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: device_name
  {
    const rosidl_runtime_c__String * str = &ros_message->device_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: linux_version
  {
    const rosidl_runtime_c__String * str = &ros_message->linux_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: cpu_model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->cpu_model_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: user_name
  {
    const rosidl_runtime_c__String * str = &ros_message->user_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: partitions
  {
    size_t size = ros_message->partitions.size;
    auto array_ptr = ros_message->partitions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: system_size
  {
    size_t size = ros_message->system_size.size;
    auto array_ptr = ros_message->system_size.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: free_space
  {
    size_t size = ros_message->free_space.size;
    auto array_ptr = ros_message->free_space.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ram_size
  {
    cdr << ros_message->ram_size;
  }

  // Field name: used_ram
  {
    cdr << ros_message->used_ram;
  }

  // Field name: available_ram
  {
    cdr << ros_message->available_ram;
  }

  // Field name: cpu_processor
  {
    cdr << ros_message->cpu_processor;
  }

  // Field name: frequency
  {
    size_t size = ros_message->frequency.size;
    auto array_ptr = ros_message->frequency.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cpu_temp
  {
    cdr << ros_message->cpu_temp;
  }

  // Field name: core_temp
  {
    size_t size = ros_message->core_temp.size;
    auto array_ptr = ros_message->core_temp.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SystemMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SystemMsg__ros_msg_type * ros_message = static_cast<_SystemMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: device_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device_name.data) {
      rosidl_runtime_c__String__init(&ros_message->device_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device_name'\n");
      return false;
    }
  }

  // Field name: linux_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->linux_version.data) {
      rosidl_runtime_c__String__init(&ros_message->linux_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->linux_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'linux_version'\n");
      return false;
    }
  }

  // Field name: cpu_model_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cpu_model_name.data) {
      rosidl_runtime_c__String__init(&ros_message->cpu_model_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cpu_model_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cpu_model_name'\n");
      return false;
    }
  }

  // Field name: user_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->user_name.data) {
      rosidl_runtime_c__String__init(&ros_message->user_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->user_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'user_name'\n");
      return false;
    }
  }

  // Field name: partitions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->partitions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->partitions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->partitions, size)) {
      fprintf(stderr, "failed to create array for field 'partitions'");
      return false;
    }
    auto array_ptr = ros_message->partitions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'partitions'\n");
        return false;
      }
    }
  }

  // Field name: system_size
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->system_size.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->system_size);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->system_size, size)) {
      fprintf(stderr, "failed to create array for field 'system_size'");
      return false;
    }
    auto array_ptr = ros_message->system_size.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: free_space
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->free_space.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->free_space);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->free_space, size)) {
      fprintf(stderr, "failed to create array for field 'free_space'");
      return false;
    }
    auto array_ptr = ros_message->free_space.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ram_size
  {
    cdr >> ros_message->ram_size;
  }

  // Field name: used_ram
  {
    cdr >> ros_message->used_ram;
  }

  // Field name: available_ram
  {
    cdr >> ros_message->available_ram;
  }

  // Field name: cpu_processor
  {
    cdr >> ros_message->cpu_processor;
  }

  // Field name: frequency
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->frequency.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->frequency);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->frequency, size)) {
      fprintf(stderr, "failed to create array for field 'frequency'");
      return false;
    }
    auto array_ptr = ros_message->frequency.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cpu_temp
  {
    cdr >> ros_message->cpu_temp;
  }

  // Field name: core_temp
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->core_temp.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->core_temp);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->core_temp, size)) {
      fprintf(stderr, "failed to create array for field 'core_temp'");
      return false;
    }
    auto array_ptr = ros_message->core_temp.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__SystemMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemMsg__ros_msg_type * ros_message = static_cast<const _SystemMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_name.size + 1);
  // field.name linux_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->linux_version.size + 1);
  // field.name cpu_model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cpu_model_name.size + 1);
  // field.name user_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->user_name.size + 1);
  // field.name partitions
  {
    size_t array_size = ros_message->partitions.size;
    auto array_ptr = ros_message->partitions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name system_size
  {
    size_t array_size = ros_message->system_size.size;
    auto array_ptr = ros_message->system_size.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name free_space
  {
    size_t array_size = ros_message->free_space.size;
    auto array_ptr = ros_message->free_space.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_size
  {
    size_t item_size = sizeof(ros_message->ram_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name used_ram
  {
    size_t item_size = sizeof(ros_message->used_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name available_ram
  {
    size_t item_size = sizeof(ros_message->available_ram);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_processor
  {
    size_t item_size = sizeof(ros_message->cpu_processor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frequency
  {
    size_t array_size = ros_message->frequency.size;
    auto array_ptr = ros_message->frequency.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_temp
  {
    size_t item_size = sizeof(ros_message->cpu_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name core_temp
  {
    size_t array_size = ros_message->core_temp.size;
    auto array_ptr = ros_message->core_temp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SystemMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__msg__SystemMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__SystemMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: linux_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: cpu_model_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: user_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: partitions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: system_size
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: free_space
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ram_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: used_ram
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: available_ram
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu_processor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: frequency
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cpu_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: core_temp
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SystemMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__msg__SystemMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SystemMsg = {
  "custom_interfaces::msg",
  "SystemMsg",
  _SystemMsg__cdr_serialize,
  _SystemMsg__cdr_deserialize,
  _SystemMsg__get_serialized_size,
  _SystemMsg__max_serialized_size
};

static rosidl_message_type_support_t _SystemMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, SystemMsg)() {
  return &_SystemMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
