// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:msg/Agent.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__MSG__DETAIL__AGENT__TRAITS_HPP_
#define HUNAV_MSGS__MSG__DETAIL__AGENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/msg/detail/agent__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'goals'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'behavior'
#include "hunav_msgs/msg/detail/agent_behavior__traits.hpp"
// Member 'closest_obs'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace hunav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Agent & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: skin
  {
    out << "skin: ";
    rosidl_generator_traits::value_to_yaml(msg.skin, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: group_id
  {
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: desired_velocity
  {
    out << "desired_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_velocity, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: linear_vel
  {
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << ", ";
  }

  // member: angular_vel
  {
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
    out << ", ";
  }

  // member: behavior
  {
    out << "behavior: ";
    to_flow_style_yaml(msg.behavior, out);
    out << ", ";
  }

  // member: goals
  {
    if (msg.goals.size() == 0) {
      out << "goals: []";
    } else {
      out << "goals: [";
      size_t pending_items = msg.goals.size();
      for (auto item : msg.goals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cyclic_goals
  {
    out << "cyclic_goals: ";
    rosidl_generator_traits::value_to_yaml(msg.cyclic_goals, out);
    out << ", ";
  }

  // member: goal_radius
  {
    out << "goal_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_radius, out);
    out << ", ";
  }

  // member: closest_obs
  {
    if (msg.closest_obs.size() == 0) {
      out << "closest_obs: []";
    } else {
      out << "closest_obs: [";
      size_t pending_items = msg.closest_obs.size();
      for (auto item : msg.closest_obs) {
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
  const Agent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: skin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skin: ";
    rosidl_generator_traits::value_to_yaml(msg.skin, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: desired_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_velocity, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << "\n";
  }

  // member: angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
    out << "\n";
  }

  // member: behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior:\n";
    to_block_style_yaml(msg.behavior, out, indentation + 2);
  }

  // member: goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals.size() == 0) {
      out << "goals: []\n";
    } else {
      out << "goals:\n";
      for (auto item : msg.goals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cyclic_goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cyclic_goals: ";
    rosidl_generator_traits::value_to_yaml(msg.cyclic_goals, out);
    out << "\n";
  }

  // member: goal_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_radius, out);
    out << "\n";
  }

  // member: closest_obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.closest_obs.size() == 0) {
      out << "closest_obs: []\n";
    } else {
      out << "closest_obs:\n";
      for (auto item : msg.closest_obs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Agent & msg, bool use_flow_style = false)
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
  const hunav_msgs::msg::Agent & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::msg::Agent & msg)
{
  return hunav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::msg::Agent>()
{
  return "hunav_msgs::msg::Agent";
}

template<>
inline const char * name<hunav_msgs::msg::Agent>()
{
  return "hunav_msgs/msg/Agent";
}

template<>
struct has_fixed_size<hunav_msgs::msg::Agent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hunav_msgs::msg::Agent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hunav_msgs::msg::Agent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__MSG__DETAIL__AGENT__TRAITS_HPP_
