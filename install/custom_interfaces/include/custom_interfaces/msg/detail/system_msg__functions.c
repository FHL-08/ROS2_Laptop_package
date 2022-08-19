// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/SystemMsg.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/system_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `device_name`
// Member `linux_version`
// Member `cpu_model_name`
// Member `user_name`
// Member `partitions`
#include "rosidl_runtime_c/string_functions.h"
// Member `system_size`
// Member `free_space`
// Member `frequency`
// Member `core_temp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_interfaces__msg__SystemMsg__init(custom_interfaces__msg__SystemMsg * msg)
{
  if (!msg) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // linux_version
  if (!rosidl_runtime_c__String__init(&msg->linux_version)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // cpu_model_name
  if (!rosidl_runtime_c__String__init(&msg->cpu_model_name)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__init(&msg->user_name)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // partitions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->partitions, 0)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // system_size
  if (!rosidl_runtime_c__float__Sequence__init(&msg->system_size, 0)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // free_space
  if (!rosidl_runtime_c__float__Sequence__init(&msg->free_space, 0)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // ram_size
  // used_ram
  // available_ram
  // cpu_processor
  // frequency
  if (!rosidl_runtime_c__float__Sequence__init(&msg->frequency, 0)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  // cpu_temp
  // core_temp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->core_temp, 0)) {
    custom_interfaces__msg__SystemMsg__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces__msg__SystemMsg__fini(custom_interfaces__msg__SystemMsg * msg)
{
  if (!msg) {
    return;
  }
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // linux_version
  rosidl_runtime_c__String__fini(&msg->linux_version);
  // cpu_model_name
  rosidl_runtime_c__String__fini(&msg->cpu_model_name);
  // user_name
  rosidl_runtime_c__String__fini(&msg->user_name);
  // partitions
  rosidl_runtime_c__String__Sequence__fini(&msg->partitions);
  // system_size
  rosidl_runtime_c__float__Sequence__fini(&msg->system_size);
  // free_space
  rosidl_runtime_c__float__Sequence__fini(&msg->free_space);
  // ram_size
  // used_ram
  // available_ram
  // cpu_processor
  // frequency
  rosidl_runtime_c__float__Sequence__fini(&msg->frequency);
  // cpu_temp
  // core_temp
  rosidl_runtime_c__float__Sequence__fini(&msg->core_temp);
}

bool
custom_interfaces__msg__SystemMsg__are_equal(const custom_interfaces__msg__SystemMsg * lhs, const custom_interfaces__msg__SystemMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_name), &(rhs->device_name)))
  {
    return false;
  }
  // linux_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->linux_version), &(rhs->linux_version)))
  {
    return false;
  }
  // cpu_model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cpu_model_name), &(rhs->cpu_model_name)))
  {
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_name), &(rhs->user_name)))
  {
    return false;
  }
  // partitions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->partitions), &(rhs->partitions)))
  {
    return false;
  }
  // system_size
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->system_size), &(rhs->system_size)))
  {
    return false;
  }
  // free_space
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->free_space), &(rhs->free_space)))
  {
    return false;
  }
  // ram_size
  if (lhs->ram_size != rhs->ram_size) {
    return false;
  }
  // used_ram
  if (lhs->used_ram != rhs->used_ram) {
    return false;
  }
  // available_ram
  if (lhs->available_ram != rhs->available_ram) {
    return false;
  }
  // cpu_processor
  if (lhs->cpu_processor != rhs->cpu_processor) {
    return false;
  }
  // frequency
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->frequency), &(rhs->frequency)))
  {
    return false;
  }
  // cpu_temp
  if (lhs->cpu_temp != rhs->cpu_temp) {
    return false;
  }
  // core_temp
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->core_temp), &(rhs->core_temp)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__SystemMsg__copy(
  const custom_interfaces__msg__SystemMsg * input,
  custom_interfaces__msg__SystemMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__copy(
      &(input->device_name), &(output->device_name)))
  {
    return false;
  }
  // linux_version
  if (!rosidl_runtime_c__String__copy(
      &(input->linux_version), &(output->linux_version)))
  {
    return false;
  }
  // cpu_model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->cpu_model_name), &(output->cpu_model_name)))
  {
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__copy(
      &(input->user_name), &(output->user_name)))
  {
    return false;
  }
  // partitions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->partitions), &(output->partitions)))
  {
    return false;
  }
  // system_size
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->system_size), &(output->system_size)))
  {
    return false;
  }
  // free_space
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->free_space), &(output->free_space)))
  {
    return false;
  }
  // ram_size
  output->ram_size = input->ram_size;
  // used_ram
  output->used_ram = input->used_ram;
  // available_ram
  output->available_ram = input->available_ram;
  // cpu_processor
  output->cpu_processor = input->cpu_processor;
  // frequency
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->frequency), &(output->frequency)))
  {
    return false;
  }
  // cpu_temp
  output->cpu_temp = input->cpu_temp;
  // core_temp
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->core_temp), &(output->core_temp)))
  {
    return false;
  }
  return true;
}

custom_interfaces__msg__SystemMsg *
custom_interfaces__msg__SystemMsg__create()
{
  custom_interfaces__msg__SystemMsg * msg = (custom_interfaces__msg__SystemMsg *)malloc(sizeof(custom_interfaces__msg__SystemMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__SystemMsg));
  bool success = custom_interfaces__msg__SystemMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__SystemMsg__destroy(custom_interfaces__msg__SystemMsg * msg)
{
  if (msg) {
    custom_interfaces__msg__SystemMsg__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces__msg__SystemMsg__Sequence__init(custom_interfaces__msg__SystemMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces__msg__SystemMsg * data = NULL;
  if (size) {
    data = (custom_interfaces__msg__SystemMsg *)calloc(size, sizeof(custom_interfaces__msg__SystemMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__SystemMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__SystemMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interfaces__msg__SystemMsg__Sequence__fini(custom_interfaces__msg__SystemMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces__msg__SystemMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interfaces__msg__SystemMsg__Sequence *
custom_interfaces__msg__SystemMsg__Sequence__create(size_t size)
{
  custom_interfaces__msg__SystemMsg__Sequence * array = (custom_interfaces__msg__SystemMsg__Sequence *)malloc(sizeof(custom_interfaces__msg__SystemMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__SystemMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__SystemMsg__Sequence__destroy(custom_interfaces__msg__SystemMsg__Sequence * array)
{
  if (array) {
    custom_interfaces__msg__SystemMsg__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces__msg__SystemMsg__Sequence__are_equal(const custom_interfaces__msg__SystemMsg__Sequence * lhs, const custom_interfaces__msg__SystemMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__SystemMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__SystemMsg__Sequence__copy(
  const custom_interfaces__msg__SystemMsg__Sequence * input,
  custom_interfaces__msg__SystemMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__SystemMsg);
    custom_interfaces__msg__SystemMsg * data =
      (custom_interfaces__msg__SystemMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__SystemMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__SystemMsg__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__SystemMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
