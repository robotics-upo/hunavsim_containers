// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:srv/ResetAgents.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__TRAITS_HPP_
#define HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/srv/detail/reset_agents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_agents'
#include "hunav_msgs/msg/detail/agents__traits.hpp"
// Member 'robot'
#include "hunav_msgs/msg/detail/agent__traits.hpp"

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetAgents_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_agents
  {
    out << "current_agents: ";
    to_flow_style_yaml(msg.current_agents, out);
    out << ", ";
  }

  // member: robot
  {
    out << "robot: ";
    to_flow_style_yaml(msg.robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetAgents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_agents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_agents:\n";
    to_block_style_yaml(msg.current_agents, out, indentation + 2);
  }

  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot:\n";
    to_block_style_yaml(msg.robot, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetAgents_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hunav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hunav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hunav_msgs::srv::ResetAgents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::ResetAgents_Request & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::ResetAgents_Request>()
{
  return "hunav_msgs::srv::ResetAgents_Request";
}

template<>
inline const char * name<hunav_msgs::srv::ResetAgents_Request>()
{
  return "hunav_msgs/srv/ResetAgents_Request";
}

template<>
struct has_fixed_size<hunav_msgs::srv::ResetAgents_Request>
  : std::integral_constant<bool, has_fixed_size<hunav_msgs::msg::Agent>::value && has_fixed_size<hunav_msgs::msg::Agents>::value> {};

template<>
struct has_bounded_size<hunav_msgs::srv::ResetAgents_Request>
  : std::integral_constant<bool, has_bounded_size<hunav_msgs::msg::Agent>::value && has_bounded_size<hunav_msgs::msg::Agents>::value> {};

template<>
struct is_message<hunav_msgs::srv::ResetAgents_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetAgents_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetAgents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetAgents_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hunav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hunav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hunav_msgs::srv::ResetAgents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::ResetAgents_Response & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::ResetAgents_Response>()
{
  return "hunav_msgs::srv::ResetAgents_Response";
}

template<>
inline const char * name<hunav_msgs::srv::ResetAgents_Response>()
{
  return "hunav_msgs/srv/ResetAgents_Response";
}

template<>
struct has_fixed_size<hunav_msgs::srv::ResetAgents_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hunav_msgs::srv::ResetAgents_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hunav_msgs::srv::ResetAgents_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hunav_msgs::srv::ResetAgents>()
{
  return "hunav_msgs::srv::ResetAgents";
}

template<>
inline const char * name<hunav_msgs::srv::ResetAgents>()
{
  return "hunav_msgs/srv/ResetAgents";
}

template<>
struct has_fixed_size<hunav_msgs::srv::ResetAgents>
  : std::integral_constant<
    bool,
    has_fixed_size<hunav_msgs::srv::ResetAgents_Request>::value &&
    has_fixed_size<hunav_msgs::srv::ResetAgents_Response>::value
  >
{
};

template<>
struct has_bounded_size<hunav_msgs::srv::ResetAgents>
  : std::integral_constant<
    bool,
    has_bounded_size<hunav_msgs::srv::ResetAgents_Request>::value &&
    has_bounded_size<hunav_msgs::srv::ResetAgents_Response>::value
  >
{
};

template<>
struct is_service<hunav_msgs::srv::ResetAgents>
  : std::true_type
{
};

template<>
struct is_service_request<hunav_msgs::srv::ResetAgents_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hunav_msgs::srv::ResetAgents_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__SRV__DETAIL__RESET_AGENTS__TRAITS_HPP_
