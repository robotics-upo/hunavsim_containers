// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/ComputeAgent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__ComputeAgent_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__ComputeAgent_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAgent_Request_
{
  using Type = ComputeAgent_Request_<ContainerAllocator>;

  explicit ComputeAgent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit ComputeAgent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgent_Request
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgent_Request
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAgent_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAgent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAgent_Request_

// alias to use template instance with default allocator
using ComputeAgent_Request =
  hunav_msgs::srv::ComputeAgent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


// Include directives for member types
// Member 'updated_agent'
#include "hunav_msgs/msg/detail/agent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__ComputeAgent_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__ComputeAgent_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAgent_Response_
{
  using Type = ComputeAgent_Response_<ContainerAllocator>;

  explicit ComputeAgent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_agent(_init)
  {
    (void)_init;
  }

  explicit ComputeAgent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgent_Response
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__ComputeAgent_Response
    std::shared_ptr<hunav_msgs::srv::ComputeAgent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAgent_Response_ & other) const
  {
    if (this->updated_agent != other.updated_agent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAgent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAgent_Response_

// alias to use template instance with default allocator
using ComputeAgent_Response =
  hunav_msgs::srv::ComputeAgent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct ComputeAgent
{
  using Request = hunav_msgs::srv::ComputeAgent_Request;
  using Response = hunav_msgs::srv::ComputeAgent_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__STRUCT_HPP_
