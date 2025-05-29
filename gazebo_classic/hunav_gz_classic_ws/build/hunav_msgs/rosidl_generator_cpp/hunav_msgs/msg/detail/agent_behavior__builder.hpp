// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__BUILDER_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/msg/detail/agent_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentBehavior_other_force_factor
{
public:
  explicit Init_AgentBehavior_other_force_factor(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::msg::AgentBehavior other_force_factor(::hunav_msgs::msg::AgentBehavior::_other_force_factor_type arg)
  {
    msg_.other_force_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_obstacle_force_factor
{
public:
  explicit Init_AgentBehavior_obstacle_force_factor(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_other_force_factor obstacle_force_factor(::hunav_msgs::msg::AgentBehavior::_obstacle_force_factor_type arg)
  {
    msg_.obstacle_force_factor = std::move(arg);
    return Init_AgentBehavior_other_force_factor(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_goal_force_factor
{
public:
  explicit Init_AgentBehavior_goal_force_factor(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_obstacle_force_factor goal_force_factor(::hunav_msgs::msg::AgentBehavior::_goal_force_factor_type arg)
  {
    msg_.goal_force_factor = std::move(arg);
    return Init_AgentBehavior_obstacle_force_factor(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_social_force_factor
{
public:
  explicit Init_AgentBehavior_social_force_factor(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_goal_force_factor social_force_factor(::hunav_msgs::msg::AgentBehavior::_social_force_factor_type arg)
  {
    msg_.social_force_factor = std::move(arg);
    return Init_AgentBehavior_goal_force_factor(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_dist
{
public:
  explicit Init_AgentBehavior_dist(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_social_force_factor dist(::hunav_msgs::msg::AgentBehavior::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_AgentBehavior_social_force_factor(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_vel
{
public:
  explicit Init_AgentBehavior_vel(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_dist vel(::hunav_msgs::msg::AgentBehavior::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_AgentBehavior_dist(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_once
{
public:
  explicit Init_AgentBehavior_once(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_vel once(::hunav_msgs::msg::AgentBehavior::_once_type arg)
  {
    msg_.once = std::move(arg);
    return Init_AgentBehavior_vel(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_duration
{
public:
  explicit Init_AgentBehavior_duration(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_once duration(::hunav_msgs::msg::AgentBehavior::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_AgentBehavior_once(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_configuration
{
public:
  explicit Init_AgentBehavior_configuration(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_duration configuration(::hunav_msgs::msg::AgentBehavior::_configuration_type arg)
  {
    msg_.configuration = std::move(arg);
    return Init_AgentBehavior_duration(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_state
{
public:
  explicit Init_AgentBehavior_state(::hunav_msgs::msg::AgentBehavior & msg)
  : msg_(msg)
  {}
  Init_AgentBehavior_configuration state(::hunav_msgs::msg::AgentBehavior::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_AgentBehavior_configuration(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

class Init_AgentBehavior_type
{
public:
  Init_AgentBehavior_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentBehavior_state type(::hunav_msgs::msg::AgentBehavior::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AgentBehavior_state(msg_);
  }

private:
  ::hunav_msgs::msg::AgentBehavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::msg::AgentBehavior>()
{
  return hunav_msgs::msg::builder::Init_AgentBehavior_type();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__BUILDER_HPP_
