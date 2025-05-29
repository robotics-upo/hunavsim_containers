// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/GetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__GetAgents_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__GetAgents_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAgents_Request_
{
  using Type = GetAgents_Request_<ContainerAllocator>;

  explicit GetAgents_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->empty = 0l;
    }
  }

  explicit GetAgents_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->empty = 0l;
    }
  }

  // field types and members
  using _empty_type =
    int32_t;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__empty(
    const int32_t & _arg)
  {
    this->empty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__GetAgents_Request
    std::shared_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__GetAgents_Request
    std::shared_ptr<hunav_msgs::srv::GetAgents_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAgents_Request_ & other) const
  {
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAgents_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAgents_Request_

// alias to use template instance with default allocator
using GetAgents_Request =
  hunav_msgs::srv::GetAgents_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


// Include directives for member types
// Member 'agents'
#include "hunav_msgs/msg/detail/agents__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__GetAgents_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__GetAgents_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAgents_Response_
{
  using Type = GetAgents_Response_<ContainerAllocator>;

  explicit GetAgents_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agents(_init)
  {
    (void)_init;
  }

  explicit GetAgents_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agents(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _agents_type =
    hunav_msgs::msg::Agents_<ContainerAllocator>;
  _agents_type agents;

  // setters for named parameter idiom
  Type & set__agents(
    const hunav_msgs::msg::Agents_<ContainerAllocator> & _arg)
  {
    this->agents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__GetAgents_Response
    std::shared_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__GetAgents_Response
    std::shared_ptr<hunav_msgs::srv::GetAgents_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAgents_Response_ & other) const
  {
    if (this->agents != other.agents) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAgents_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAgents_Response_

// alias to use template instance with default allocator
using GetAgents_Response =
  hunav_msgs::srv::GetAgents_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct GetAgents
{
  using Request = hunav_msgs::srv::GetAgents_Request;
  using Response = hunav_msgs::srv::GetAgents_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__STRUCT_HPP_
