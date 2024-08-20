// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice
#include "seabot_interfaces/srv/detail/service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
seabot_interfaces__srv__Service_Request__init(seabot_interfaces__srv__Service_Request * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    seabot_interfaces__srv__Service_Request__fini(msg);
    return false;
  }
  // value
  return true;
}

void
seabot_interfaces__srv__Service_Request__fini(seabot_interfaces__srv__Service_Request * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // value
}

bool
seabot_interfaces__srv__Service_Request__are_equal(const seabot_interfaces__srv__Service_Request * lhs, const seabot_interfaces__srv__Service_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
seabot_interfaces__srv__Service_Request__copy(
  const seabot_interfaces__srv__Service_Request * input,
  seabot_interfaces__srv__Service_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

seabot_interfaces__srv__Service_Request *
seabot_interfaces__srv__Service_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Request * msg = (seabot_interfaces__srv__Service_Request *)allocator.allocate(sizeof(seabot_interfaces__srv__Service_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(seabot_interfaces__srv__Service_Request));
  bool success = seabot_interfaces__srv__Service_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
seabot_interfaces__srv__Service_Request__destroy(seabot_interfaces__srv__Service_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    seabot_interfaces__srv__Service_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
seabot_interfaces__srv__Service_Request__Sequence__init(seabot_interfaces__srv__Service_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Request * data = NULL;

  if (size) {
    data = (seabot_interfaces__srv__Service_Request *)allocator.zero_allocate(size, sizeof(seabot_interfaces__srv__Service_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = seabot_interfaces__srv__Service_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        seabot_interfaces__srv__Service_Request__fini(&data[i - 1]);
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
seabot_interfaces__srv__Service_Request__Sequence__fini(seabot_interfaces__srv__Service_Request__Sequence * array)
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
      seabot_interfaces__srv__Service_Request__fini(&array->data[i]);
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

seabot_interfaces__srv__Service_Request__Sequence *
seabot_interfaces__srv__Service_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Request__Sequence * array = (seabot_interfaces__srv__Service_Request__Sequence *)allocator.allocate(sizeof(seabot_interfaces__srv__Service_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = seabot_interfaces__srv__Service_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
seabot_interfaces__srv__Service_Request__Sequence__destroy(seabot_interfaces__srv__Service_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    seabot_interfaces__srv__Service_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
seabot_interfaces__srv__Service_Request__Sequence__are_equal(const seabot_interfaces__srv__Service_Request__Sequence * lhs, const seabot_interfaces__srv__Service_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!seabot_interfaces__srv__Service_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
seabot_interfaces__srv__Service_Request__Sequence__copy(
  const seabot_interfaces__srv__Service_Request__Sequence * input,
  seabot_interfaces__srv__Service_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(seabot_interfaces__srv__Service_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    seabot_interfaces__srv__Service_Request * data =
      (seabot_interfaces__srv__Service_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!seabot_interfaces__srv__Service_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          seabot_interfaces__srv__Service_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!seabot_interfaces__srv__Service_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
seabot_interfaces__srv__Service_Response__init(seabot_interfaces__srv__Service_Response * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    seabot_interfaces__srv__Service_Response__fini(msg);
    return false;
  }
  return true;
}

void
seabot_interfaces__srv__Service_Response__fini(seabot_interfaces__srv__Service_Response * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
seabot_interfaces__srv__Service_Response__are_equal(const seabot_interfaces__srv__Service_Response * lhs, const seabot_interfaces__srv__Service_Response * rhs)
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
seabot_interfaces__srv__Service_Response__copy(
  const seabot_interfaces__srv__Service_Response * input,
  seabot_interfaces__srv__Service_Response * output)
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

seabot_interfaces__srv__Service_Response *
seabot_interfaces__srv__Service_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Response * msg = (seabot_interfaces__srv__Service_Response *)allocator.allocate(sizeof(seabot_interfaces__srv__Service_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(seabot_interfaces__srv__Service_Response));
  bool success = seabot_interfaces__srv__Service_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
seabot_interfaces__srv__Service_Response__destroy(seabot_interfaces__srv__Service_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    seabot_interfaces__srv__Service_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
seabot_interfaces__srv__Service_Response__Sequence__init(seabot_interfaces__srv__Service_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Response * data = NULL;

  if (size) {
    data = (seabot_interfaces__srv__Service_Response *)allocator.zero_allocate(size, sizeof(seabot_interfaces__srv__Service_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = seabot_interfaces__srv__Service_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        seabot_interfaces__srv__Service_Response__fini(&data[i - 1]);
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
seabot_interfaces__srv__Service_Response__Sequence__fini(seabot_interfaces__srv__Service_Response__Sequence * array)
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
      seabot_interfaces__srv__Service_Response__fini(&array->data[i]);
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

seabot_interfaces__srv__Service_Response__Sequence *
seabot_interfaces__srv__Service_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  seabot_interfaces__srv__Service_Response__Sequence * array = (seabot_interfaces__srv__Service_Response__Sequence *)allocator.allocate(sizeof(seabot_interfaces__srv__Service_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = seabot_interfaces__srv__Service_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
seabot_interfaces__srv__Service_Response__Sequence__destroy(seabot_interfaces__srv__Service_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    seabot_interfaces__srv__Service_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
seabot_interfaces__srv__Service_Response__Sequence__are_equal(const seabot_interfaces__srv__Service_Response__Sequence * lhs, const seabot_interfaces__srv__Service_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!seabot_interfaces__srv__Service_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
seabot_interfaces__srv__Service_Response__Sequence__copy(
  const seabot_interfaces__srv__Service_Response__Sequence * input,
  seabot_interfaces__srv__Service_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(seabot_interfaces__srv__Service_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    seabot_interfaces__srv__Service_Response * data =
      (seabot_interfaces__srv__Service_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!seabot_interfaces__srv__Service_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          seabot_interfaces__srv__Service_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!seabot_interfaces__srv__Service_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
