// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__TRAITS_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/msg/detail/agent_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hunav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentBehavior & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: configuration
  {
    out << "configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: once
  {
    out << "once: ";
    rosidl_generator_traits::value_to_yaml(msg.once, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: dist
  {
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << ", ";
  }

  // member: social_force_factor
  {
    out << "social_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.social_force_factor, out);
    out << ", ";
  }

  // member: goal_force_factor
  {
    out << "goal_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_force_factor, out);
    out << ", ";
  }

  // member: obstacle_force_factor
  {
    out << "obstacle_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_force_factor, out);
    out << ", ";
  }

  // member: other_force_factor
  {
    out << "other_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.other_force_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "once: ";
    rosidl_generator_traits::value_to_yaml(msg.once, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: social_force_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "social_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.social_force_factor, out);
    out << "\n";
  }

  // member: goal_force_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_force_factor, out);
    out << "\n";
  }

  // member: obstacle_force_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_force_factor, out);
    out << "\n";
  }

  // member: other_force_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "other_force_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.other_force_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentBehavior & msg, bool use_flow_style = false)
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
  const hunav_msgs::msg::AgentBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::msg::AgentBehavior & msg)
{
  return hunav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::msg::AgentBehavior>()
{
  return "hunav_msgs::msg::AgentBehavior";
}

template<>
inline const char * name<hunav_msgs::msg::AgentBehavior>()
{
  return "hunav_msgs/msg/AgentBehavior";
}

template<>
struct has_fixed_size<hunav_msgs::msg::AgentBehavior>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hunav_msgs::msg::AgentBehavior>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hunav_msgs::msg::AgentBehavior>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT_BEHAVIOR__TRAITS_HPP_
