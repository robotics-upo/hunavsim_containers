// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/ComputeAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/compute_agents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeAgents_Request_robot
{
public:
  explicit Init_ComputeAgents_Request_robot(::hunav_msgs::srv::ComputeAgents_Request & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::srv::ComputeAgents_Request robot(::hunav_msgs::srv::ComputeAgents_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ComputeAgents_Request msg_;
};

class Init_ComputeAgents_Request_current_agents
{
public:
  Init_ComputeAgents_Request_current_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeAgents_Request_robot current_agents(::hunav_msgs::srv::ComputeAgents_Request::_current_agents_type arg)
  {
    msg_.current_agents = std::move(arg);
    return Init_ComputeAgents_Request_robot(msg_);
  }

private:
  ::hunav_msgs::srv::ComputeAgents_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ComputeAgents_Request>()
{
  return hunav_msgs::srv::builder::Init_ComputeAgents_Request_current_agents();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeAgents_Response_updated_agents
{
public:
  Init_ComputeAgents_Response_updated_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::ComputeAgents_Response updated_agents(::hunav_msgs::srv::ComputeAgents_Response::_updated_agents_type arg)
  {
    msg_.updated_agents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ComputeAgents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ComputeAgents_Response>()
{
  return hunav_msgs::srv::builder::Init_ComputeAgents_Response_updated_agents();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENTS__BUILDER_HPP_
