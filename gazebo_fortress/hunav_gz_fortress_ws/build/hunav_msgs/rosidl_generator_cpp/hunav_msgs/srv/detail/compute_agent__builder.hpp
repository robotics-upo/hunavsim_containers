// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/ComputeAgent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/compute_agent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeAgent_Request_id
{
public:
  Init_ComputeAgent_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::ComputeAgent_Request id(::hunav_msgs::srv::ComputeAgent_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ComputeAgent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ComputeAgent_Request>()
{
  return hunav_msgs::srv::builder::Init_ComputeAgent_Request_id();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeAgent_Response_updated_agent
{
public:
  Init_ComputeAgent_Response_updated_agent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::ComputeAgent_Response updated_agent(::hunav_msgs::srv::ComputeAgent_Response::_updated_agent_type arg)
  {
    msg_.updated_agent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::ComputeAgent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::ComputeAgent_Response>()
{
  return hunav_msgs::srv::builder::Init_ComputeAgent_Response_updated_agent();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__COMPUTE_AGENT__BUILDER_HPP_
