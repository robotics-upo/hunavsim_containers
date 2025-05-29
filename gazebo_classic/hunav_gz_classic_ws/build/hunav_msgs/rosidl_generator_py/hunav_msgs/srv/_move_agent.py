# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hunav_msgs:srv/MoveAgent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveAgent_Request(type):
    """Metaclass of message 'MoveAgent_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.MoveAgent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_agent__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_agent__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_agent__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_agent__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_agent__request

            from hunav_msgs.msg import Agent
            if Agent.__class__._TYPE_SUPPORT is None:
                Agent.__class__.__import_type_support__()

            from hunav_msgs.msg import Agents
            if Agents.__class__._TYPE_SUPPORT is None:
                Agents.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveAgent_Request(metaclass=Metaclass_MoveAgent_Request):
    """Message class 'MoveAgent_Request'."""

    __slots__ = [
        '_current_agents',
        '_robot',
        '_agent_id',
    ]

    _fields_and_field_types = {
        'current_agents': 'hunav_msgs/Agents',
        'robot': 'hunav_msgs/Agent',
        'agent_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['hunav_msgs', 'msg'], 'Agents'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hunav_msgs', 'msg'], 'Agent'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from hunav_msgs.msg import Agents
        self.current_agents = kwargs.get('current_agents', Agents())
        from hunav_msgs.msg import Agent
        self.robot = kwargs.get('robot', Agent())
        self.agent_id = kwargs.get('agent_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_agents != other.current_agents:
            return False
        if self.robot != other.robot:
            return False
        if self.agent_id != other.agent_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_agents(self):
        """Message field 'current_agents'."""
        return self._current_agents

    @current_agents.setter
    def current_agents(self, value):
        if __debug__:
            from hunav_msgs.msg import Agents
            assert \
                isinstance(value, Agents), \
                "The 'current_agents' field must be a sub message of type 'Agents'"
        self._current_agents = value

    @builtins.property
    def robot(self):
        """Message field 'robot'."""
        return self._robot

    @robot.setter
    def robot(self, value):
        if __debug__:
            from hunav_msgs.msg import Agent
            assert \
                isinstance(value, Agent), \
                "The 'robot' field must be a sub message of type 'Agent'"
        self._robot = value

    @builtins.property
    def agent_id(self):
        """Message field 'agent_id'."""
        return self._agent_id

    @agent_id.setter
    def agent_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'agent_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'agent_id' field must be an integer in [-2147483648, 2147483647]"
        self._agent_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveAgent_Response(type):
    """Metaclass of message 'MoveAgent_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.MoveAgent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_agent__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_agent__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_agent__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_agent__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_agent__response

            from hunav_msgs.msg import Agent
            if Agent.__class__._TYPE_SUPPORT is None:
                Agent.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveAgent_Response(metaclass=Metaclass_MoveAgent_Response):
    """Message class 'MoveAgent_Response'."""

    __slots__ = [
        '_updated_agent',
    ]

    _fields_and_field_types = {
        'updated_agent': 'hunav_msgs/Agent',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['hunav_msgs', 'msg'], 'Agent'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from hunav_msgs.msg import Agent
        self.updated_agent = kwargs.get('updated_agent', Agent())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.updated_agent != other.updated_agent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def updated_agent(self):
        """Message field 'updated_agent'."""
        return self._updated_agent

    @updated_agent.setter
    def updated_agent(self, value):
        if __debug__:
            from hunav_msgs.msg import Agent
            assert \
                isinstance(value, Agent), \
                "The 'updated_agent' field must be a sub message of type 'Agent'"
        self._updated_agent = value


class Metaclass_MoveAgent(type):
    """Metaclass of service 'MoveAgent'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.MoveAgent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_agent

            from hunav_msgs.srv import _move_agent
            if _move_agent.Metaclass_MoveAgent_Request._TYPE_SUPPORT is None:
                _move_agent.Metaclass_MoveAgent_Request.__import_type_support__()
            if _move_agent.Metaclass_MoveAgent_Response._TYPE_SUPPORT is None:
                _move_agent.Metaclass_MoveAgent_Response.__import_type_support__()


class MoveAgent(metaclass=Metaclass_MoveAgent):
    from hunav_msgs.srv._move_agent import MoveAgent_Request as Request
    from hunav_msgs.srv._move_agent import MoveAgent_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
