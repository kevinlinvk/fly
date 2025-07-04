# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4:msg/SensorGyroFifo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'x'
# Member 'y'
# Member 'z'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorGyroFifo(type):
    """Metaclass of message 'SensorGyroFifo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ORB_QUEUE_LENGTH': 4,
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
                'px4.msg.SensorGyroFifo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_gyro_fifo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_gyro_fifo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_gyro_fifo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_gyro_fifo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_gyro_fifo

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_SensorGyroFifo.__constants['ORB_QUEUE_LENGTH']


class SensorGyroFifo(metaclass=Metaclass_SensorGyroFifo):
    """
    Message class 'SensorGyroFifo'.

    Constants:
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_device_id',
        '_dt',
        '_scale',
        '_samples',
        '_x',
        '_y',
        '_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'device_id': 'uint32',
        'dt': 'float',
        'scale': 'float',
        'samples': 'uint8',
        'x': 'int16[32]',
        'y': 'int16[32]',
        'z': 'int16[32]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 32),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 32),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 32),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.device_id = kwargs.get('device_id', int())
        self.dt = kwargs.get('dt', float())
        self.scale = kwargs.get('scale', float())
        self.samples = kwargs.get('samples', int())
        if 'x' not in kwargs:
            self.x = numpy.zeros(32, dtype=numpy.int16)
        else:
            self.x = numpy.array(kwargs.get('x'), dtype=numpy.int16)
            assert self.x.shape == (32, )
        if 'y' not in kwargs:
            self.y = numpy.zeros(32, dtype=numpy.int16)
        else:
            self.y = numpy.array(kwargs.get('y'), dtype=numpy.int16)
            assert self.y.shape == (32, )
        if 'z' not in kwargs:
            self.z = numpy.zeros(32, dtype=numpy.int16)
        else:
            self.z = numpy.array(kwargs.get('z'), dtype=numpy.int16)
            assert self.z.shape == (32, )

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.device_id != other.device_id:
            return False
        if self.dt != other.dt:
            return False
        if self.scale != other.scale:
            return False
        if self.samples != other.samples:
            return False
        if any(self.x != other.x):
            return False
        if any(self.y != other.y):
            return False
        if any(self.z != other.z):
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def dt(self):
        """Message field 'dt'."""
        return self._dt

    @dt.setter
    def dt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt = value

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale = value

    @builtins.property
    def samples(self):
        """Message field 'samples'."""
        return self._samples

    @samples.setter
    def samples(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'samples' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'samples' field must be an unsigned integer in [0, 255]"
        self._samples = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'x' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 32, \
                    "The 'x' numpy.ndarray() must have a size of 32"
                self._x = value
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'x' field must be a set or sequence with length 32 and each value of type 'int' and each integer in [-32768, 32767]"
        self._x = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'y' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 32, \
                    "The 'y' numpy.ndarray() must have a size of 32"
                self._y = value
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'y' field must be a set or sequence with length 32 and each value of type 'int' and each integer in [-32768, 32767]"
        self._y = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'z' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 32, \
                    "The 'z' numpy.ndarray() must have a size of 32"
                self._z = value
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'z' field must be a set or sequence with length 32 and each value of type 'int' and each integer in [-32768, 32767]"
        self._z = numpy.array(value, dtype=numpy.int16)
