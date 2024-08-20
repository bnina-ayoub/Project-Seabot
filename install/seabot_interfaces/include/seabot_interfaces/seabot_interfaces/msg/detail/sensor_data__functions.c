// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "seabot_interfaces/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
seabot_interfaces__msg__SensorData__init(seabot_interfaces__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    seabot_interfaces__msg__SensorData__fini(msg);
    return false;
  }
  // temp
  return true;
}

void
seabot_interfaces__msg__SensorData__fini(seabot_interfaces__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // temp
}

bool
seabot_interfaces__msg__SensorData__are_equal(const seabot_interfaces__msg__SensorData * lhs, const seabot_interfaces__msg__SensorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  return true;
}

bool
seabot_interfaces__msg__SensorData__copy(
  const seabot_interfaces__msg__SensorData * input,
  seabot_interfaces__msg__SensorData * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // temp
  output->temp = input->temp;
  return true;
}

seabot_interfaces__msg__SensorData *
seabot_interfaces__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__SensorData * msg = (seabot_interfaces__msg__SensorData *)allocator.allocate(sizeof(seabot_interfaces__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(seabot_interfaces__msg__SensorData));
  bool success = seabot_interfaces__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
seabot_interfaces__msg__SensorData__destroy(seabot_interfaces__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    seabot_interfaces__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
seabot_interfaces__msg__SensorData__Sequence__init(seabot_interfaces__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__SensorData * data = NULL;

  if (size) {
    data = (seabot_interfaces__msg__SensorData *)allocator.zero_allocate(size, sizeof(seabot_interfaces__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = seabot_interfaces__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        seabot_interfaces__msg__SensorData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
seabot_interfaces__msg__SensorData__Sequence__fini(seabot_interfaces__msg__SensorData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      seabot_interfaces__msg__SensorData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

seabot_interfaces__msg__SensorData__Sequence *
seabot_interfaces__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__SensorData__Sequence * array = (seabot_interfaces__msg__SensorData__Sequence *)allocator.allocate(sizeof(seabot_interfaces__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = seabot_interfaces__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
seabot_interfaces__msg__SensorData__Sequence__destroy(seabot_interfaces__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    seabot_interfaces__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
seabot_interfaces__msg__SensorData__Sequence__are_equal(const seabot_interfaces__msg__SensorData__Sequence * lhs, const seabot_interfaces__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!seabot_interfaces__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
seabot_interfaces__msg__SensorData__Sequence__copy(
  const seabot_interfaces__msg__SensorData__Sequence * input,
  seabot_interfaces__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(seabot_interfaces__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    seabot_interfaces__msg__SensorData * data =
      (seabot_interfaces__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!seabot_interfaces__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          seabot_interfaces__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!seabot_interfaces__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
