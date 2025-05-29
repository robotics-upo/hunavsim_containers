# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hunav_msgs:msg/AgentBehavior.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentBehavior(type):
    """Metaclass of message 'AgentBehavior'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BEH_REGULAR': 1,
        'BEH_IMPASSIVE': 2,
        'BEH_SURPRISED': 3,
        'BEH_SCARED': 4,
        'BEH_CURIOUS': 5,
        'BEH_THREATENING': 6,
        'BEH_NO_ACTIVE': 0,
        'BEH_ACTIVE_1': 1,
        'BEH_ACTIVE_2': 2,
        'BEH_CONF_DEFAULT': 0,
        'BEH_CONF_CUSTOM': 1,
        'BEH_CONF_RANDOM_NORMAL': 2,
        'BEH_CONF_RANDOM_UNIFORM': 3,
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
                'hunav_msgs.msg.AgentBehavior')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_behavior
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_behavior
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_behavior
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_behavior
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_behavior

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BEH_REGULAR': cls.__constants['BEH_REGULAR'],
            'BEH_IMPASSIVE': cls.__constants['BEH_IMPASSIVE'],
            'BEH_SURPRISED': cls.__constants['BEH_SURPRISED'],
            'BEH_SCARED': cls.__constants['BEH_SCARED'],
            'BEH_CURIOUS': cls.__constants['BEH_CURIOUS'],
            'BEH_THREATENING': cls.__constants['BEH_THREATENING'],
            'BEH_NO_ACTIVE': cls.__constants['BEH_NO_ACTIVE'],
            'BEH_ACTIVE_1': cls.__constants['BEH_ACTIVE_1'],
            'BEH_ACTIVE_2': cls.__constants['BEH_ACTIVE_2'],
            'BEH_CONF_DEFAULT': cls.__constants['BEH_CONF_DEFAULT'],
            'BEH_CONF_CUSTOM': cls.__constants['BEH_CONF_CUSTOM'],
            'BEH_CONF_RANDOM_NORMAL': cls.__constants['BEH_CONF_RANDOM_NORMAL'],
            'BEH_CONF_RANDOM_UNIFORM': cls.__constants['BEH_CONF_RANDOM_UNIFORM'],
        }

    @property
    def BEH_REGULAR(self):
        """Message constant 'BEH_REGULAR'."""
        return Metaclass_AgentBehavior.__constants['BEH_REGULAR']

    @property
    def BEH_IMPASSIVE(self):
        """Message constant 'BEH_IMPASSIVE'."""
        return Metaclass_AgentBehavior.__constants['BEH_IMPASSIVE']

    @property
    def BEH_SURPRISED(self):
        """Message constant 'BEH_SURPRISED'."""
        return Metaclass_AgentBehavior.__constants['BEH_SURPRISED']

    @property
    def BEH_SCARED(self):
        """Message constant 'BEH_SCARED'."""
        return Metaclass_AgentBehavior.__constants['BEH_SCARED']

    @property
    def BEH_CURIOUS(self):
        """Message constant 'BEH_CURIOUS'."""
        return Metaclass_AgentBehavior.__constants['BEH_CURIOUS']

    @property
    def BEH_THREATENING(self):
        """Message constant 'BEH_THREATENING'."""
        return Metaclass_AgentBehavior.__constants['BEH_THREATENING']

    @property
    def BEH_NO_ACTIVE(self):
        """Message constant 'BEH_NO_ACTIVE'."""
        return Metaclass_AgentBehavior.__constants['BEH_NO_ACTIVE']

    @property
    def BEH_ACTIVE_1(self):
        """Message constant 'BEH_ACTIVE_1'."""
        return Metaclass_AgentBehavior.__constants['BEH_ACTIVE_1']

    @property
    def BEH_ACTIVE_2(self):
        """Message constant 'BEH_ACTIVE_2'."""
        return Metaclass_AgentBehavior.__constants['BEH_ACTIVE_2']

    @property
    def BEH_CONF_DEFAULT(self):
        """Message constant 'BEH_CONF_DEFAULT'."""
        return Metaclass_AgentBehavior.__constants['BEH_CONF_DEFAULT']

    @property
    def BEH_CONF_CUSTOM(self):
        """Message constant 'BEH_CONF_CUSTOM'."""
        return Metaclass_AgentBehavior.__constants['BEH_CONF_CUSTOM']

    @property
    def BEH_CONF_RANDOM_NORMAL(self):
        """Message constant 'BEH_CONF_RANDOM_NORMAL'."""
        return Metaclass_AgentBehavior.__constants['BEH_CONF_RANDOM_NORMAL']

    @property
    def BEH_CONF_RANDOM_UNIFORM(self):
        """Message constant 'BEH_CONF_RANDOM_UNIFORM'."""
        return Metaclass_AgentBehavior.__constants['BEH_CONF_RANDOM_UNIFORM']


class AgentBehavior(metaclass=Metaclass_AgentBehavior):
    """
    Message class 'AgentBehavior'.

    Constants:
      BEH_REGULAR
      BEH_IMPASSIVE
      BEH_SURPRISED
      BEH_SCARED
      BEH_CURIOUS
      BEH_THREATENING
      BEH_NO_ACTIVE
      BEH_ACTIVE_1
      BEH_ACTIVE_2
      BEH_CONF_DEFAULT
      BEH_CONF_CUSTOM
      BEH_CONF_RANDOM_NORMAL
      BEH_CONF_RANDOM_UNIFORM
    """

    __slots__ = [
        '_type',
        '_state',
        '_configuration',
        '_duration',
        '_once',
        '_vel',
        '_dist',
        '_social_force_factor',
        '_goal_force_factor',
        '_obstacle_force_factor',
        '_other_force_factor',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'state': 'uint8',
        'configuration': 'uint8',
        'duration': 'float',
        'once': 'boolean',
        'vel': 'float',
        'dist': 'float',
        'social_force_factor': 'float',
        'goal_force_factor': 'float',
        'obstacle_force_factor': 'float',
        'other_force_factor': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.state = kwargs.get('state', int())
        self.configuration = kwargs.get('configuration', int())
        self.duration = kwargs.get('duration', float())
        self.once = kwargs.get('once', bool())
        self.vel = kwargs.get('vel', float())
        self.dist = kwargs.get('dist', float())
        self.social_force_factor = kwargs.get('social_force_factor', float())
        self.goal_force_factor = kwargs.get('goal_force_factor', float())
        self.obstacle_force_factor = kwargs.get('obstacle_force_factor', float())
        self.other_force_factor = kwargs.get('other_force_factor', float())

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
        if self.type != other.type:
            return False
        if self.state != other.state:
            return False
        if self.configuration != other.configuration:
            return False
        if self.duration != other.duration:
            return False
        if self.once != other.once:
            return False
        if self.vel != other.vel:
            return False
        if self.dist != other.dist:
            return False
        if self.social_force_factor != other.social_force_factor:
            return False
        if self.goal_force_factor != other.goal_force_factor:
            return False
        if self.obstacle_force_factor != other.obstacle_force_factor:
            return False
        if self.other_force_factor != other.other_force_factor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def configuration(self):
        """Message field 'configuration'."""
        return self._configuration

    @configuration.setter
    def configuration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'configuration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'configuration' field must be an unsigned integer in [0, 255]"
        self._configuration = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration = value

    @builtins.property
    def once(self):
        """Message field 'once'."""
        return self._once

    @once.setter
    def once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'once' field must be of type 'bool'"
        self._once = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel = value

    @builtins.property
    def dist(self):
        """Message field 'dist'."""
        return self._dist

    @dist.setter
    def dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist = value

    @builtins.property
    def social_force_factor(self):
        """Message field 'social_force_factor'."""
        return self._social_force_factor

    @social_force_factor.setter
    def social_force_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'social_force_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'social_force_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._social_force_factor = value

    @builtins.property
    def goal_force_factor(self):
        """Message field 'goal_force_factor'."""
        return self._goal_force_factor

    @goal_force_factor.setter
    def goal_force_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_force_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_force_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_force_factor = value

    @builtins.property
    def obstacle_force_factor(self):
        """Message field 'obstacle_force_factor'."""
        return self._obstacle_force_factor

    @obstacle_force_factor.setter
    def obstacle_force_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_force_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'obstacle_force_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._obstacle_force_factor = value

    @builtins.property
    def other_force_factor(self):
        """Message field 'other_force_factor'."""
        return self._other_force_factor

    @other_force_factor.setter
    def other_force_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'other_force_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'other_force_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._other_force_factor = value
