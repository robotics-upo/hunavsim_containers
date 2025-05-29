// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/MoveAgent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__STRUCT_HPP_

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
# define DEPRECATED__hunav_msgs__srv__MoveAgent_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__MoveAgent_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAgent_Request_
{
  using Type = MoveAgent_Request_<ContainerAllocator>;

  explicit MoveAgent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_agents(_init),
    robot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = 0l;
    }
  }

  explicit MoveAgent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_agents(_alloc, _init),
    robot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = 0l;
    }
  }

  // field types and members
  using _current_agents_type =
    hunav_msgs::msg::Agents_<ContainerAllocator>;
  _current_agents_type current_agents;
  using _robot_type =
    hunav_msgs::msg::Agent_<ContainerAllocator>;
  _robot_type robot;
  using _agent_id_type =
    int32_t;
  _agent_id_type agent_id;

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
  Type & set__agent_id(
    const int32_t & _arg)
  {
    this->agent_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__MoveAgent_Request
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__MoveAgent_Request
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAgent_Request_ & other) const
  {
    if (this->current_agents != other.current_agents) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    if (this->agent_id != other.agent_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAgent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAgent_Request_

// alias to use template instance with default allocator
using MoveAgent_Request =
  hunav_msgs::srv::MoveAgent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


// Include directives for member types
// Member 'updated_agent'
// already included above
// #include "hunav_msgs/msg/detail/agent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__MoveAgent_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__MoveAgent_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAgent_Response_
{
  using Type = MoveAgent_Response_<ContainerAllocator>;

  explicit MoveAgent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_agent(_init)
  {
    (void)_init;
  }

  explicit MoveAgent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_agent(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _updated_agent_type =
    hunav_msgs::msg::Agent_<ContainerAllocator>;
  _updated_agent_type updated_agent;

  // setters for named parameter idiom
  Type & set__updated_agent(
    const hunav_msgs::msg::Agent_<ContainerAllocator> & _arg)
  {
    this->updated_agent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__MoveAgent_Response
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__MoveAgent_Response
    std::shared_ptr<hunav_msgs::srv::MoveAgent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAgent_Response_ & other) const
  {
    if (this->updated_agent != other.updated_agent) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAgent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAgent_Response_

// alias to use template instance with default allocator
using MoveAgent_Response =
  hunav_msgs::srv::MoveAgent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct MoveAgent
{
  using Request = hunav_msgs::srv::MoveAgent_Request;
  using Response = hunav_msgs::srv::MoveAgent_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__STRUCT_HPP_
