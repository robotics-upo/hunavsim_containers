// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hunav_msgs:srv/MoveAgent.idl
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
#include "hunav_msgs/srv/detail/move_agent__struct.h"
#include "hunav_msgs/srv/detail/move_agent__functions.h"

bool hunav_msgs__msg__agents__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * hunav_msgs__msg__agents__convert_to_py(void * raw_ros_message);
bool hunav_msgs__msg__agent__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * hunav_msgs__msg__agent__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hunav_msgs__srv__move_agent__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("hunav_msgs.srv._move_agent.MoveAgent_Request", full_classname_dest, 44) == 0);
  }
  hunav_msgs__srv__MoveAgent_Request * ros_message = _ros_message;
  {  // current_agents
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_agents");
    if (!field) {
      return false;
    }
    if (!hunav_msgs__msg__agents__convert_from_py(field, &ros_message->current_agents)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot");
    if (!field) {
      return false;
    }
    if (!hunav_msgs__msg__agent__convert_from_py(field, &ros_message->robot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // agent_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "agent_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->agent_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hunav_msgs__srv__move_agent__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveAgent_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hunav_msgs.srv._move_agent");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveAgent_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hunav_msgs__srv__MoveAgent_Request * ros_message = (hunav_msgs__srv__MoveAgent_Request *)raw_ros_message;
  {  // current_agents
    PyObject * field = NULL;
    field = hunav_msgs__msg__agents__convert_to_py(&ros_message->current_agents);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_agents", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot
    PyObject * field = NULL;
    field = hunav_msgs__msg__agent__convert_to_py(&ros_message->robot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agent_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->agent_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agent_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__struct.h"
// already included above
// #include "hunav_msgs/srv/detail/move_agent__functions.h"

bool hunav_msgs__msg__agent__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * hunav_msgs__msg__agent__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hunav_msgs__srv__move_agent__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("hunav_msgs.srv._move_agent.MoveAgent_Response", full_classname_dest, 45) == 0);
  }
  hunav_msgs__srv__MoveAgent_Response * ros_message = _ros_message;
  {  // updated_agent
    PyObject * field = PyObject_GetAttrString(_pymsg, "updated_agent");
    if (!field) {
      return false;
    }
    if (!hunav_msgs__msg__agent__convert_from_py(field, &ros_message->updated_agent)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hunav_msgs__srv__move_agent__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveAgent_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hunav_msgs.srv._move_agent");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveAgent_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hunav_msgs__srv__MoveAgent_Response * ros_message = (hunav_msgs__srv__MoveAgent_Response *)raw_ros_message;
  {  // updated_agent
    PyObject * field = NULL;
    field = hunav_msgs__msg__agent__convert_to_py(&ros_message->updated_agent);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "updated_agent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
