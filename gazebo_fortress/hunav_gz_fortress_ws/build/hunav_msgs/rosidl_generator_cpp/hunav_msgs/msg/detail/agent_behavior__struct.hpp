// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__msg__AgentBehavior __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__msg__AgentBehavior __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentBehavior_
{
  using Type = AgentBehavior_<ContainerAllocator>;

  explicit AgentBehavior_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->state = 0;
      this->configuration = 0;
      this->duration = 0.0f;
      this->once = false;
      this->vel = 0.0f;
      this->dist = 0.0f;
      this->social_force_factor = 0.0f;
      this->goal_force_factor = 0.0f;
      this->obstacle_force_factor = 0.0f;
      this->other_force_factor = 0.0f;
    }
  }

  explicit AgentBehavior_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->state = 0;
      this->configuration = 0;
      this->duration = 0.0f;
      this->once = false;
      this->vel = 0.0f;
      this->dist = 0.0f;
      this->social_force_factor = 0.0f;
      this->goal_force_factor = 0.0f;
      this->obstacle_force_factor = 0.0f;
      this->other_force_factor = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _state_type =
    uint8_t;
  _state_type state;
  using _configuration_type =
    uint8_t;
  _configuration_type configuration;
  using _duration_type =
    float;
  _duration_type duration;
  using _once_type =
    bool;
  _once_type once;
  using _vel_type =
    float;
  _vel_type vel;
  using _dist_type =
    float;
  _dist_type dist;
  using _social_force_factor_type =
    float;
  _social_force_factor_type social_force_factor;
  using _goal_force_factor_type =
    float;
  _goal_force_factor_type goal_force_factor;
  using _obstacle_force_factor_type =
    float;
  _obstacle_force_factor_type obstacle_force_factor;
  using _other_force_factor_type =
    float;
  _other_force_factor_type other_force_factor;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__configuration(
    const uint8_t & _arg)
  {
    this->configuration = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__once(
    const bool & _arg)
  {
    this->once = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__dist(
    const float & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__social_force_factor(
    const float & _arg)
  {
    this->social_force_factor = _arg;
    return *this;
  }
  Type & set__goal_force_factor(
    const float & _arg)
  {
    this->goal_force_factor = _arg;
    return *this;
  }
  Type & set__obstacle_force_factor(
    const float & _arg)
  {
    this->obstacle_force_factor = _arg;
    return *this;
  }
  Type & set__other_force_factor(
    const float & _arg)
  {
    this->other_force_factor = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BEH_REGULAR =
    1u;
  static constexpr uint8_t BEH_IMPASSIVE =
    2u;
  static constexpr uint8_t BEH_SURPRISED =
    3u;
  static constexpr uint8_t BEH_SCARED =
    4u;
  static constexpr uint8_t BEH_CURIOUS =
    5u;
  static constexpr uint8_t BEH_THREATENING =
    6u;
  static constexpr uint8_t BEH_NO_ACTIVE =
    0u;
  static constexpr uint8_t BEH_ACTIVE_1 =
    1u;
  static constexpr uint8_t BEH_ACTIVE_2 =
    2u;
  static constexpr uint8_t BEH_CONF_DEFAULT =
    0u;
  static constexpr uint8_t BEH_CONF_CUSTOM =
    1u;
  static constexpr uint8_t BEH_CONF_RANDOM_NORMAL =
    2u;
  static constexpr uint8_t BEH_CONF_RANDOM_UNIFORM =
    3u;

  // pointer types
  using RawPtr =
    hunav_msgs::msg::AgentBehavior_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::msg::AgentBehavior_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::msg::AgentBehavior_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::msg::AgentBehavior_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__msg__AgentBehavior
    std::shared_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__msg__AgentBehavior
    std::shared_ptr<hunav_msgs::msg::AgentBehavior_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentBehavior_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->configuration != other.configuration) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->once != other.once) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    if (this->social_force_factor != other.social_force_factor) {
      return false;
    }
    if (this->goal_force_factor != other.goal_force_factor) {
      return false;
    }
    if (this->obstacle_force_factor != other.obstacle_force_factor) {
      return false;
    }
    if (this->other_force_factor != other.other_force_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentBehavior_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentBehavior_

// alias to use template instance with default allocator
using AgentBehavior =
  hunav_msgs::msg::AgentBehavior_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_REGULAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_IMPASSIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_SURPRISED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_SCARED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_CURIOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_THREATENING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_NO_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_ACTIVE_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_ACTIVE_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_CONF_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_CONF_CUSTOM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_CONF_RANDOM_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentBehavior_<ContainerAllocator>::BEH_CONF_RANDOM_UNIFORM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__STRUCT_HPP_
