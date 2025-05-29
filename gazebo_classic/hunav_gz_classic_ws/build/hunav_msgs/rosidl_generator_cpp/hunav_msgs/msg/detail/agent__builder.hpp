// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:msg/Agent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT__BUILDER_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/msg/detail/agent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace msg
{

namespace builder
{

class Init_Agent_closest_obs
{
public:
  explicit Init_Agent_closest_obs(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::msg::Agent closest_obs(::hunav_msgs::msg::Agent::_closest_obs_type arg)
  {
    msg_.closest_obs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_goal_radius
{
public:
  explicit Init_Agent_goal_radius(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_closest_obs goal_radius(::hunav_msgs::msg::Agent::_goal_radius_type arg)
  {
    msg_.goal_radius = std::move(arg);
    return Init_Agent_closest_obs(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_cyclic_goals
{
public:
  explicit Init_Agent_cyclic_goals(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_goal_radius cyclic_goals(::hunav_msgs::msg::Agent::_cyclic_goals_type arg)
  {
    msg_.cyclic_goals = std::move(arg);
    return Init_Agent_goal_radius(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_goals
{
public:
  explicit Init_Agent_goals(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_cyclic_goals goals(::hunav_msgs::msg::Agent::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return Init_Agent_cyclic_goals(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_behavior
{
public:
  explicit Init_Agent_behavior(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_goals behavior(::hunav_msgs::msg::Agent::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_Agent_goals(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_angular_vel
{
public:
  explicit Init_Agent_angular_vel(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_behavior angular_vel(::hunav_msgs::msg::Agent::_angular_vel_type arg)
  {
    msg_.angular_vel = std::move(arg);
    return Init_Agent_behavior(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_linear_vel
{
public:
  explicit Init_Agent_linear_vel(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_angular_vel linear_vel(::hunav_msgs::msg::Agent::_linear_vel_type arg)
  {
    msg_.linear_vel = std::move(arg);
    return Init_Agent_angular_vel(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_radius
{
public:
  explicit Init_Agent_radius(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_linear_vel radius(::hunav_msgs::msg::Agent::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_Agent_linear_vel(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_desired_velocity
{
public:
  explicit Init_Agent_desired_velocity(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_radius desired_velocity(::hunav_msgs::msg::Agent::_desired_velocity_type arg)
  {
    msg_.desired_velocity = std::move(arg);
    return Init_Agent_radius(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_velocity
{
public:
  explicit Init_Agent_velocity(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_desired_velocity velocity(::hunav_msgs::msg::Agent::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Agent_desired_velocity(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_yaw
{
public:
  explicit Init_Agent_yaw(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_velocity yaw(::hunav_msgs::msg::Agent::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Agent_velocity(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_position
{
public:
  explicit Init_Agent_position(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_yaw position(::hunav_msgs::msg::Agent::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Agent_yaw(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_group_id
{
public:
  explicit Init_Agent_group_id(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_position group_id(::hunav_msgs::msg::Agent::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_Agent_position(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_name
{
public:
  explicit Init_Agent_name(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_group_id name(::hunav_msgs::msg::Agent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Agent_group_id(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_skin
{
public:
  explicit Init_Agent_skin(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_name skin(::hunav_msgs::msg::Agent::_skin_type arg)
  {
    msg_.skin = std::move(arg);
    return Init_Agent_name(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_type
{
public:
  explicit Init_Agent_type(::hunav_msgs::msg::Agent & msg)
  : msg_(msg)
  {}
  Init_Agent_skin type(::hunav_msgs::msg::Agent::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Agent_skin(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

class Init_Agent_id
{
public:
  Init_Agent_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Agent_type id(::hunav_msgs::msg::Agent::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Agent_type(msg_);
  }

private:
  ::hunav_msgs::msg::Agent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::msg::Agent>()
{
  return hunav_msgs::msg::builder::Init_Agent_id();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT__BUILDER_HPP_
