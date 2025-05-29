// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/MoveAgent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/move_agent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveAgent_Request_agent_id
{
public:
  explicit Init_MoveAgent_Request_agent_id(::hunav_msgs::srv::MoveAgent_Request & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::srv::MoveAgent_Request agent_id(::hunav_msgs::srv::MoveAgent_Request::_agent_id_type arg)
  {
    msg_.agent_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::MoveAgent_Request msg_;
};

class Init_MoveAgent_Request_robot
{
public:
  explicit Init_MoveAgent_Request_robot(::hunav_msgs::srv::MoveAgent_Request & msg)
  : msg_(msg)
  {}
  Init_MoveAgent_Request_agent_id robot(::hunav_msgs::srv::MoveAgent_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_MoveAgent_Request_agent_id(msg_);
  }

private:
  ::hunav_msgs::srv::MoveAgent_Request msg_;
};

class Init_MoveAgent_Request_current_agents
{
public:
  Init_MoveAgent_Request_current_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAgent_Request_robot current_agents(::hunav_msgs::srv::MoveAgent_Request::_current_agents_type arg)
  {
    msg_.current_agents = std::move(arg);
    return Init_MoveAgent_Request_robot(msg_);
  }

private:
  ::hunav_msgs::srv::MoveAgent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::MoveAgent_Request>()
{
  return hunav_msgs::srv::builder::Init_MoveAgent_Request_current_agents();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveAgent_Response_updated_agent
{
public:
  Init_MoveAgent_Response_updated_agent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::MoveAgent_Response updated_agent(::hunav_msgs::srv::MoveAgent_Response::_updated_agent_type arg)
  {
    msg_.updated_agent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::MoveAgent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::MoveAgent_Response>()
{
  return hunav_msgs::srv::builder::Init_MoveAgent_Response_updated_agent();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__MOVE_AGENT__BUILDER_HPP_
