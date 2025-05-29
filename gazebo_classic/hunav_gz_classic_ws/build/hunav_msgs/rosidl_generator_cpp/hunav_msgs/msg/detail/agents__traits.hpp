// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:msg/Agents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENTS__TRAITS_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/msg/detail/agents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'agents'
#include "hunav_msgs/msg/detail/agent__traits.hpp"

namespace hunav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Agents & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: agents
  {
    if (msg.agents.size() == 0) {
      out << "agents: []";
    } else {
      out << "agents: [";
      size_t pending_items = msg.agents.size();
      for (auto item : msg.agents) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Agents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: agents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agents.size() == 0) {
      out << "agents: []\n";
    } else {
      out << "agents:\n";
      for (auto item : msg.agents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Agents & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hunav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hunav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hunav_msgs::msg::Agents & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::msg::Agents & msg)
{
  return hunav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::msg::Agents>()
{
  return "hunav_msgs::msg::Agents";
}

template<>
inline const char * name<hunav_msgs::msg::Agents>()
{
  return "hunav_msgs/msg/Agents";
}

template<>
struct has_fixed_size<hunav_msgs::msg::Agents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hunav_msgs::msg::Agents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hunav_msgs::msg::Agents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENTS__TRAITS_HPP_
