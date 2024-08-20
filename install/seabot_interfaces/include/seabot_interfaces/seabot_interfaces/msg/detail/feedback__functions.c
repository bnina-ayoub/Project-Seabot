// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from seabot_interfaces:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "seabot_interfaces/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `feedback`
#include "rosidl_runtime_c/string_functions.h"

bool
seabot_interfaces__msg__Feedback__init(seabot_interfaces__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    seabot_interfaces__msg__Feedback__fini(msg);
    return false;
  }
  return true;
}

void
seabot_interfaces__msg__Feedback__fini(seabot_interfaces__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
seabot_interfaces__msg__Feedback__are_equal(const seabot_interfaces__msg__Feedback * lhs, const seabot_interfaces__msg__Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
seabot_interfaces__msg__Feedback__copy(
  const seabot_interfaces__msg__Feedback * input,
  seabot_interfaces__msg__Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

seabot_interfaces__msg__Feedback *
seabot_interfaces__msg__Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__Feedback * msg = (seabot_interfaces__msg__Feedback *)allocator.allocate(sizeof(seabot_interfaces__msg__Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(seabot_interfaces__msg__Feedback));
  bool success = seabot_interfaces__msg__Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
seabot_interfaces__msg__Feedback__destroy(seabot_interfaces__msg__Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    seabot_interfaces__msg__Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
seabot_interfaces__msg__Feedback__Sequence__init(seabot_interfaces__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__Feedback * data = NULL;

  if (size) {
    data = (seabot_interfaces__msg__Feedback *)allocator.zero_allocate(size, sizeof(seabot_interfaces__msg__Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = seabot_interfaces__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        seabot_interfaces__msg__Feedback__fini(&data[i - 1]);
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
seabot_interfaces__msg__Feedback__Sequence__fini(seabot_interfaces__msg__Feedback__Sequence * array)
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
      seabot_interfaces__msg__Feedback__fini(&array->data[i]);
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

seabot_interfaces__msg__Feedback__Sequence *
seabot_interfaces__msg__Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__msg__Feedback__Sequence * array = (seabot_interfaces__msg__Feedback__Sequence *)allocator.allocate(sizeof(seabot_interfaces__msg__Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = seabot_interfaces__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
seabot_interfaces__msg__Feedback__Sequence__destroy(seabot_interfaces__msg__Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    seabot_interfaces__msg__Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
seabot_interfaces__msg__Feedback__Sequence__are_equal(const seabot_interfaces__msg__Feedback__Sequence * lhs, const seabot_interfaces__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!seabot_interfaces__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
seabot_interfaces__msg__Feedback__Sequence__copy(
  const seabot_interfaces__msg__Feedback__Sequence * input,
  seabot_interfaces__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(seabot_interfaces__msg__Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    seabot_interfaces__msg__Feedback * data =
      (seabot_interfaces__msg__Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!seabot_interfaces__msg__Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          seabot_interfaces__msg__Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!seabot_interfaces__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
