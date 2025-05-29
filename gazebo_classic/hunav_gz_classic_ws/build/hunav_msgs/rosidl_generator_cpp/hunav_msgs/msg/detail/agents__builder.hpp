// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:msg/Agents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENTS__BUILDER_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/msg/detail/agents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace msg
{

namespace builder
{

class Init_Agents_agents
{
public:
  explicit Init_Agents_agents(::hunav_msgs::msg::Agents & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::msg::Agents agents(::hunav_msgs::msg::Agents::_agents_type arg)
  {
    msg_.agents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::msg::Agents msg_;
};

class Init_Agents_header
{
public:
  Init_Agents_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Agents_agents header(::hunav_msgs::msg::Agents::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Agents_agents(msg_);
  }

private:
  ::hunav_msgs::msg::Agents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::msg::Agents>()
{
  return hunav_msgs::msg::builder::Init_Agents_header();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENTS__BUILDER_HPP_
