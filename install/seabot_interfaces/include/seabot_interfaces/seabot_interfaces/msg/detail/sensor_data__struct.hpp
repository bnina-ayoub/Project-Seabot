// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from seabot_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__seabot_interfaces__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__seabot_interfaces__msg__SensorData __declspec(deprecated)
#endif

namespace seabot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->temp = 0.0;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->temp = 0.0;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _temp_type =
    double;
  _temp_type temp;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__temp(
    const double & _arg)
  {
    this->temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    seabot_interfaces::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const seabot_interfaces::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__seabot_interfaces__msg__SensorData
    std::shared_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__seabot_interfaces__msg__SensorData
    std::shared_ptr<seabot_interfaces::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  seabot_interfaces::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace seabot_interfaces

#endif  // SEABOT_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
