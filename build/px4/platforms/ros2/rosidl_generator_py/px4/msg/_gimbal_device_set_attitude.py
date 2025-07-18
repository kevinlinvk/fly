# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4:msg/GimbalDeviceSetAttitude.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'q'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalDeviceSetAttitude(type):
    """Metaclass of message 'GimbalDeviceSetAttitude'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GIMBAL_DEVICE_FLAGS_RETRACT': 1,
        'GIMBAL_DEVICE_FLAGS_NEUTRAL': 2,
        'GIMBAL_DEVICE_FLAGS_ROLL_LOCK': 4,
        'GIMBAL_DEVICE_FLAGS_PITCH_LOCK': 8,
        'GIMBAL_DEVICE_FLAGS_YAW_LOCK': 16,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4.msg.GimbalDeviceSetAttitude')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_device_set_attitude
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_device_set_attitude
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_device_set_attitude
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_device_set_attitude
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_device_set_attitude

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GIMBAL_DEVICE_FLAGS_RETRACT': cls.__constants['GIMBAL_DEVICE_FLAGS_RETRACT'],
            'GIMBAL_DEVICE_FLAGS_NEUTRAL': cls.__constants['GIMBAL_DEVICE_FLAGS_NEUTRAL'],
            'GIMBAL_DEVICE_FLAGS_ROLL_LOCK': cls.__constants['GIMBAL_DEVICE_FLAGS_ROLL_LOCK'],
            'GIMBAL_DEVICE_FLAGS_PITCH_LOCK': cls.__constants['GIMBAL_DEVICE_FLAGS_PITCH_LOCK'],
            'GIMBAL_DEVICE_FLAGS_YAW_LOCK': cls.__constants['GIMBAL_DEVICE_FLAGS_YAW_LOCK'],
        }

    @property
    def GIMBAL_DEVICE_FLAGS_RETRACT(self):
        """Message constant 'GIMBAL_DEVICE_FLAGS_RETRACT'."""
        return Metaclass_GimbalDeviceSetAttitude.__constants['GIMBAL_DEVICE_FLAGS_RETRACT']

    @property
    def GIMBAL_DEVICE_FLAGS_NEUTRAL(self):
        """Message constant 'GIMBAL_DEVICE_FLAGS_NEUTRAL'."""
        return Metaclass_GimbalDeviceSetAttitude.__constants['GIMBAL_DEVICE_FLAGS_NEUTRAL']

    @property
    def GIMBAL_DEVICE_FLAGS_ROLL_LOCK(self):
        """Message constant 'GIMBAL_DEVICE_FLAGS_ROLL_LOCK'."""
        return Metaclass_GimbalDeviceSetAttitude.__constants['GIMBAL_DEVICE_FLAGS_ROLL_LOCK']

    @property
    def GIMBAL_DEVICE_FLAGS_PITCH_LOCK(self):
        """Message constant 'GIMBAL_DEVICE_FLAGS_PITCH_LOCK'."""
        return Metaclass_GimbalDeviceSetAttitude.__constants['GIMBAL_DEVICE_FLAGS_PITCH_LOCK']

    @property
    def GIMBAL_DEVICE_FLAGS_YAW_LOCK(self):
        """Message constant 'GIMBAL_DEVICE_FLAGS_YAW_LOCK'."""
        return Metaclass_GimbalDeviceSetAttitude.__constants['GIMBAL_DEVICE_FLAGS_YAW_LOCK']


class GimbalDeviceSetAttitude(metaclass=Metaclass_GimbalDeviceSetAttitude):
    """
    Message class 'GimbalDeviceSetAttitude'.

    Constants:
      GIMBAL_DEVICE_FLAGS_RETRACT
      GIMBAL_DEVICE_FLAGS_NEUTRAL
      GIMBAL_DEVICE_FLAGS_ROLL_LOCK
      GIMBAL_DEVICE_FLAGS_PITCH_LOCK
      GIMBAL_DEVICE_FLAGS_YAW_LOCK
    """

    __slots__ = [
        '_timestamp',
        '_target_system',
        '_target_component',
        '_flags',
        '_q',
        '_angular_velocity_x',
        '_angular_velocity_y',
        '_angular_velocity_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'target_system': 'uint8',
        'target_component': 'uint8',
        'flags': 'uint16',
        'q': 'float[4]',
        'angular_velocity_x': 'float',
        'angular_velocity_y': 'float',
        'angular_velocity_z': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.target_system = kwargs.get('target_system', int())
        self.target_component = kwargs.get('target_component', int())
        self.flags = kwargs.get('flags', int())
        if 'q' not in kwargs:
            self.q = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float32)
            assert self.q.shape == (4, )
        self.angular_velocity_x = kwargs.get('angular_velocity_x', float())
        self.angular_velocity_y = kwargs.get('angular_velocity_y', float())
        self.angular_velocity_z = kwargs.get('angular_velocity_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.target_system != other.target_system:
            return False
        if self.target_component != other.target_component:
            return False
        if self.flags != other.flags:
            return False
        if any(self.q != other.q):
            return False
        if self.angular_velocity_x != other.angular_velocity_x:
            return False
        if self.angular_velocity_y != other.angular_velocity_y:
            return False
        if self.angular_velocity_z != other.angular_velocity_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def target_system(self):
        """Message field 'target_system'."""
        return self._target_system

    @target_system.setter
    def target_system(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_system' field must be an unsigned integer in [0, 255]"
        self._target_system = value

    @builtins.property
    def target_component(self):
        """Message field 'target_component'."""
        return self._target_component

    @target_component.setter
    def target_component(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_component' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_component' field must be an unsigned integer in [0, 255]"
        self._target_component = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'flags' field must be an unsigned integer in [0, 65535]"
        self._flags = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'q' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'q' numpy.ndarray() must have a size of 4"
                self._q = value
                return
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def angular_velocity_x(self):
        """Message field 'angular_velocity_x'."""
        return self._angular_velocity_x

    @angular_velocity_x.setter
    def angular_velocity_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_x = value

    @builtins.property
    def angular_velocity_y(self):
        """Message field 'angular_velocity_y'."""
        return self._angular_velocity_y

    @angular_velocity_y.setter
    def angular_velocity_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_y = value

    @builtins.property
    def angular_velocity_z(self):
        """Message field 'angular_velocity_z'."""
        return self._angular_velocity_z

    @angular_velocity_z.setter
    def angular_velocity_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_z = value
