# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hunav_msgs:msg/Agent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Agent(type):
    """Metaclass of message 'Agent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PERSON': 1,
        'ROBOT': 2,
        'OTHER': 3,
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
                'hunav_msgs.msg.Agent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from hunav_msgs.msg import AgentBehavior
            if AgentBehavior.__class__._TYPE_SUPPORT is None:
                AgentBehavior.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PERSON': cls.__constants['PERSON'],
            'ROBOT': cls.__constants['ROBOT'],
            'OTHER': cls.__constants['OTHER'],
        }

    @property
    def PERSON(self):
        """Message constant 'PERSON'."""
        return Metaclass_Agent.__constants['PERSON']

    @property
    def ROBOT(self):
        """Message constant 'ROBOT'."""
        return Metaclass_Agent.__constants['ROBOT']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_Agent.__constants['OTHER']


class Agent(metaclass=Metaclass_Agent):
    """
    Message class 'Agent'.

    Constants:
      PERSON
      ROBOT
      OTHER
    """

    __slots__ = [
        '_id',
        '_type',
        '_skin',
        '_name',
        '_group_id',
        '_position',
        '_yaw',
        '_velocity',
        '_desired_velocity',
        '_radius',
        '_linear_vel',
        '_angular_vel',
        '_behavior',
        '_goals',
        '_cyclic_goals',
        '_goal_radius',
        '_closest_obs',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'type': 'uint8',
        'skin': 'uint8',
        'name': 'string',
        'group_id': 'int8',
        'position': 'geometry_msgs/Pose',
        'yaw': 'float',
        'velocity': 'geometry_msgs/Twist',
        'desired_velocity': 'float',
        'radius': 'float',
        'linear_vel': 'float',
        'angular_vel': 'float',
        'behavior': 'hunav_msgs/AgentBehavior',
        'goals': 'sequence<geometry_msgs/Pose>',
        'cyclic_goals': 'boolean',
        'goal_radius': 'float',
        'closest_obs': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hunav_msgs', 'msg'], 'AgentBehavior'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.skin = kwargs.get('skin', int())
        self.name = kwargs.get('name', str())
        self.group_id = kwargs.get('group_id', int())
        from geometry_msgs.msg import Pose
        self.position = kwargs.get('position', Pose())
        self.yaw = kwargs.get('yaw', float())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        self.desired_velocity = kwargs.get('desired_velocity', float())
        self.radius = kwargs.get('radius', float())
        self.linear_vel = kwargs.get('linear_vel', float())
        self.angular_vel = kwargs.get('angular_vel', float())
        from hunav_msgs.msg import AgentBehavior
        self.behavior = kwargs.get('behavior', AgentBehavior())
        self.goals = kwargs.get('goals', [])
        self.cyclic_goals = kwargs.get('cyclic_goals', bool())
        self.goal_radius = kwargs.get('goal_radius', float())
        self.closest_obs = kwargs.get('closest_obs', [])

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.skin != other.skin:
            return False
        if self.name != other.name:
            return False
        if self.group_id != other.group_id:
            return False
        if self.position != other.position:
            return False
        if self.yaw != other.yaw:
            return False
        if self.velocity != other.velocity:
            return False
        if self.desired_velocity != other.desired_velocity:
            return False
        if self.radius != other.radius:
            return False
        if self.linear_vel != other.linear_vel:
            return False
        if self.angular_vel != other.angular_vel:
            return False
        if self.behavior != other.behavior:
            return False
        if self.goals != other.goals:
            return False
        if self.cyclic_goals != other.cyclic_goals:
            return False
        if self.goal_radius != other.goal_radius:
            return False
        if self.closest_obs != other.closest_obs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

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
    def skin(self):
        """Message field 'skin'."""
        return self._skin

    @skin.setter
    def skin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'skin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'skin' field must be an unsigned integer in [0, 255]"
        self._skin = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def group_id(self):
        """Message field 'group_id'."""
        return self._group_id

    @group_id.setter
    def group_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'group_id' field must be an integer in [-128, 127]"
        self._group_id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'position' field must be a sub message of type 'Pose'"
        self._position = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

    @builtins.property
    def desired_velocity(self):
        """Message field 'desired_velocity'."""
        return self._desired_velocity

    @desired_velocity.setter
    def desired_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'desired_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._desired_velocity = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._radius = value

    @builtins.property
    def linear_vel(self):
        """Message field 'linear_vel'."""
        return self._linear_vel

    @linear_vel.setter
    def linear_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_vel = value

    @builtins.property
    def angular_vel(self):
        """Message field 'angular_vel'."""
        return self._angular_vel

    @angular_vel.setter
    def angular_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_vel = value

    @builtins.property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            from hunav_msgs.msg import AgentBehavior
            assert \
                isinstance(value, AgentBehavior), \
                "The 'behavior' field must be a sub message of type 'AgentBehavior'"
        self._behavior = value

    @builtins.property
    def goals(self):
        """Message field 'goals'."""
        return self._goals

    @goals.setter
    def goals(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'goals' field must be a set or sequence and each value of type 'Pose'"
        self._goals = value

    @builtins.property
    def cyclic_goals(self):
        """Message field 'cyclic_goals'."""
        return self._cyclic_goals

    @cyclic_goals.setter
    def cyclic_goals(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cyclic_goals' field must be of type 'bool'"
        self._cyclic_goals = value

    @builtins.property
    def goal_radius(self):
        """Message field 'goal_radius'."""
        return self._goal_radius

    @goal_radius.setter
    def goal_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_radius = value

    @builtins.property
    def closest_obs(self):
        """Message field 'closest_obs'."""
        return self._closest_obs

    @closest_obs.setter
    def closest_obs(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'closest_obs' field must be a set or sequence and each value of type 'Point'"
        self._closest_obs = value
