// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/ComputeAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_agents'
#include "hunav_msgs/msg/detail/agents__struct.hpp"
// Member 'robot'
#include "hunav_msgs/msg/detail/agent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__ComputeAgents_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__ComputeAgents_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAgents_Request_
{
  using Type = ComputeAgents_Request_<ContainerAllocator>;

  explicit ComputeAgents_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_agents(_init),
    robot(_init)
  {
    (void)_init;
  }

  explicit ComputeAgents_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_agents(_alloc, _init),
    robot(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_agents_type =
    hunav_msgs::msg::Agents_<ContainerAllocator>;
  _current_agents_type current_agents;
  using _robot_type =
    hunav_msgs::msg::Agent_<ContainerAllocator>;
  _robot_type robot;

  // setters for named parameter idiom
  Type & set__current_agents(
    const hunav_msgs::msg::Agents_<ContainerAllocator> & _arg)
  {
    this->current_agents = _arg;
    return *this;
  }
  Type & set__robot(
    const hunav_msgs::msg::Agent_<ContainerAllocator> & _arg)
  {
    this->robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgents_Request
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgents_Request
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAgents_Request_ & other) const
  {
    if (this->current_agents != other.current_agents) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAgents_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAgents_Request_

// alias to use template instance with default allocator
using ComputeAgents_Request =
  hunav_msgs::srv::ComputeAgents_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


// Include directives for member types
// Member 'updated_agents'
// already included above
// #include "hunav_msgs/msg/detail/agents__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__ComputeAgents_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__ComputeAgents_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAgents_Response_
{
  using Type = ComputeAgents_Response_<ContainerAllocator>;

  explicit ComputeAgents_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_agents(_init)
  {
    (void)_init;
  }

  explicit ComputeAgents_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_agents(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _updated_agents_type =
    hunav_msgs::msg::Agents_<ContainerAllocator>;
  _updated_agents_type updated_agents;

  // setters for named parameter idiom
  Type & set__updated_agents(
    const hunav_msgs::msg::Agents_<ContainerAllocator> & _arg)
  {
    this->updated_agents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgents_Response
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgents_Response
    std::shared_ptr<hunav_msgs::srv::ComputeAgents_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAgents_Response_ & other) const
  {
    if (this->updated_agents != other.updated_agents) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAgents_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAgents_Response_

// alias to use template instance with default allocator
using ComputeAgents_Response =
  hunav_msgs::srv::ComputeAgents_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct ComputeAgents
{
  using Request = hunav_msgs::srv::ComputeAgents_Request;
  using Response = hunav_msgs::srv::ComputeAgents_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__STRUCT_HPP_
