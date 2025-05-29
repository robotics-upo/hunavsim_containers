// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/GetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/get_agents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAgents_Request_empty
{
public:
  Init_GetAgents_Request_empty()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::GetAgents_Request empty(::hunav_msgs::srv::GetAgents_Request::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::GetAgents_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::GetAgents_Request>()
{
  return hunav_msgs::srv::builder::Init_GetAgents_Request_empty();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAgents_Response_agents
{
public:
  Init_GetAgents_Response_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::GetAgents_Response agents(::hunav_msgs::srv::GetAgents_Response::_agents_type arg)
  {
    msg_.agents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::GetAgents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::GetAgents_Response>()
{
  return hunav_msgs::srv::builder::Init_GetAgents_Response_agents();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_AGENTS__BUILDER_HPP_
