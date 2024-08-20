// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from seabot_interfaces:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_HPP_
#define SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__seabot_interfaces__srv__Service_Request __attribute__((deprecated))
#else
# define DEPRECATED__seabot_interfaces__srv__Service_Request __declspec(deprecated)
#endif

namespace seabot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Request_
{
  using Type = Service_Request_<ContainerAllocator>;

  explicit Service_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->value = 0.0;
    }
  }

  explicit Service_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->value = 0.0;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    seabot_interfaces::srv::Service_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const seabot_interfaces::srv::Service_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::srv::Service_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::srv::Service_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__seabot_interfaces__srv__Service_Request
    std::shared_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__seabot_interfaces__srv__Service_Request
    std::shared_ptr<seabot_interfaces::srv::Service_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Request_

// alias to use template instance with default allocator
using Service_Request =
  seabot_interfaces::srv::Service_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace seabot_interfaces


#ifndef _WIN32
# define DEPRECATED__seabot_interfaces__srv__Service_Response __attribute__((deprecated))
#else
# define DEPRECATED__seabot_interfaces__srv__Service_Response __declspec(deprecated)
#endif

namespace seabot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Response_
{
  using Type = Service_Response_<ContainerAllocator>;

  explicit Service_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit Service_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    seabot_interfaces::srv::Service_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const seabot_interfaces::srv::Service_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::srv::Service_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      seabot_interfaces::srv::Service_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__seabot_interfaces__srv__Service_Response
    std::shared_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__seabot_interfaces__srv__Service_Response
    std::shared_ptr<seabot_interfaces::srv::Service_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Response_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Response_

// alias to use template instance with default allocator
using Service_Response =
  seabot_interfaces::srv::Service_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace seabot_interfaces

namespace seabot_interfaces
{

namespace srv
{

struct Service
{
  using Request = seabot_interfaces::srv::Service_Request;
  using Response = seabot_interfaces::srv::Service_Response;
};

}  // namespace srv

}  // namespace seabot_interfaces

#endif  // SEABOT_INTERFACES__SRV__DETAIL__SERVICE__STRUCT_HPP_
