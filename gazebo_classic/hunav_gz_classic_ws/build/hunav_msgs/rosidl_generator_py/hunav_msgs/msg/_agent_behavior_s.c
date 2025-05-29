// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hunav_msgs:msg/AgentBehavior.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hunav_msgs/msg/detail/agent_behavior__struct.h"
#include "hunav_msgs/msg/detail/agent_behavior__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hunav_msgs__msg__agent_behavior__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hunav_msgs.msg._agent_behavior.AgentBehavior", full_classname_dest, 44) == 0);
  }
  hunav_msgs__msg__AgentBehavior * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // configuration
    PyObject * field = PyObject_GetAttrString(_pymsg, "configuration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->configuration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // once
    PyObject * field = PyObject_GetAttrString(_pymsg, "once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // social_force_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "social_force_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->social_force_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_force_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_force_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_force_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_force_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_force_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_force_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // other_force_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "other_force_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->other_force_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hunav_msgs__msg__agent_behavior__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AgentBehavior */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hunav_msgs.msg._agent_behavior");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AgentBehavior");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hunav_msgs__msg__AgentBehavior * ros_message = (hunav_msgs__msg__AgentBehavior *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // configuration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->configuration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "configuration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // social_force_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->social_force_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "social_force_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_force_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_force_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_force_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_force_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_force_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_force_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // other_force_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->other_force_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "other_force_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
