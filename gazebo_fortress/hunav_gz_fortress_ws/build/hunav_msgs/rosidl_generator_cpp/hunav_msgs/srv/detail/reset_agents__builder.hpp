// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/ResetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/reset_agents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetAgents_Request_robot
{
public:
  explicit Init_ResetAgents_Request_robot(::hunav_msgs::srv::ResetAgents_Request & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::srv::ResetAgents_Request robot(::hunav_msgs::srv::ResetAgents_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ResetAgents_Request msg_;
};

class Init_ResetAgents_Request_current_agents
{
public:
  Init_ResetAgents_Request_current_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetAgents_Request_robot current_agents(::hunav_msgs::srv::ResetAgents_Request::_current_agents_type arg)
  {
    msg_.current_agents = std::move(arg);
    return Init_ResetAgents_Request_robot(msg_);
  }

private:
  ::hunav_msgs::srv::ResetAgents_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ResetAgents_Request>()
{
  return hunav_msgs::srv::builder::Init_ResetAgents_Request_current_agents();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetAgents_Response_ok
{
public:
  Init_ResetAgents_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::ResetAgents_Response ok(::hunav_msgs::srv::ResetAgents_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ResetAgents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ResetAgents_Response>()
{
  return hunav_msgs::srv::builder::Init_ResetAgents_Response_ok();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__BUILDER_HPP_
