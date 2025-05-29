// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:msg/Agent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'goals'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'behavior'
#include "hunav_msgs/msg/detail/agent_behavior__struct.hpp"
// Member 'closest_obs'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__msg__Agent __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__msg__Agent __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Agent_
{
  using Type = Agent_<ContainerAllocator>;

  explicit Agent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->skin = 0;
      this->name = "";
      this->group_id = 0;
      this->yaw = 0.0f;
      this->desired_velocity = 0.0f;
      this->radius = 0.0f;
      this->linear_vel = 0.0f;
      this->angular_vel = 0.0f;
      this->cyclic_goals = false;
      this->goal_radius = 0.0f;
    }
  }

  explicit Agent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    position(_alloc, _init),
    velocity(_alloc, _init),
    behavior(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->skin = 0;
      this->name = "";
      this->group_id = 0;
      this->yaw = 0.0f;
      this->desired_velocity = 0.0f;
      this->radius = 0.0f;
      this->linear_vel = 0.0f;
      this->angular_vel = 0.0f;
      this->cyclic_goals = false;
      this->goal_radius = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _skin_type =
    uint8_t;
  _skin_type skin;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _group_id_type =
    int8_t;
  _group_id_type group_id;
  using _position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _position_type position;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _desired_velocity_type =
    float;
  _desired_velocity_type desired_velocity;
  using _radius_type =
    float;
  _radius_type radius;
  using _linear_vel_type =
    float;
  _linear_vel_type linear_vel;
  using _angular_vel_type =
    float;
  _angular_vel_type angular_vel;
  using _behavior_type =
    hunav_msgs::msg::AgentBehavior_<ContainerAllocator>;
  _behavior_type behavior;
  using _goals_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _goals_type goals;
  using _cyclic_goals_type =
    bool;
  _cyclic_goals_type cyclic_goals;
  using _goal_radius_type =
    float;
  _goal_radius_type goal_radius;
  using _closest_obs_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _closest_obs_type closest_obs;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__skin(
    const uint8_t & _arg)
  {
    this->skin = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__group_id(
    const int8_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__desired_velocity(
    const float & _arg)
  {
    this->desired_velocity = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__linear_vel(
    const float & _arg)
  {
    this->linear_vel = _arg;
    return *this;
  }
  Type & set__angular_vel(
    const float & _arg)
  {
    this->angular_vel = _arg;
    return *this;
  }
  Type & set__behavior(
    const hunav_msgs::msg::AgentBehavior_<ContainerAllocator> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__goals(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->goals = _arg;
    return *this;
  }
  Type & set__cyclic_goals(
    const bool & _arg)
  {
    this->cyclic_goals = _arg;
    return *this;
  }
  Type & set__goal_radius(
    const float & _arg)
  {
    this->goal_radius = _arg;
    return *this;
  }
  Type & set__closest_obs(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->closest_obs = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PERSON =
    1u;
  static constexpr uint8_t ROBOT =
    2u;
  static constexpr uint8_t OTHER =
    3u;

  // pointer types
  using RawPtr =
    hunav_msgs::msg::Agent_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::msg::Agent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::msg::Agent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::msg::Agent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::msg::Agent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::msg::Agent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::msg::Agent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::msg::Agent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::msg::Agent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::msg::Agent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__msg__Agent
    std::shared_ptr<hunav_msgs::msg::Agent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__msg__Agent
    std::shared_ptr<hunav_msgs::msg::Agent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Agent_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->skin != other.skin) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->desired_velocity != other.desired_velocity) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->linear_vel != other.linear_vel) {
      return false;
    }
    if (this->angular_vel != other.angular_vel) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->goals != other.goals) {
      return false;
    }
    if (this->cyclic_goals != other.cyclic_goals) {
      return false;
    }
    if (this->goal_radius != other.goal_radius) {
      return false;
    }
    if (this->closest_obs != other.closest_obs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Agent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Agent_

// alias to use template instance with default allocator
using Agent =
  hunav_msgs::msg::Agent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Agent_<ContainerAllocator>::PERSON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Agent_<ContainerAllocator>::ROBOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Agent_<ContainerAllocator>::OTHER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT__STRUCT_HPP_
