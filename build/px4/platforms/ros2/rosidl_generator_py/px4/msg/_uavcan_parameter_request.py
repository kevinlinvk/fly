# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4:msg/UavcanParameterRequest.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'param_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UavcanParameterRequest(type):
    """Metaclass of message 'UavcanParameterRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_TYPE_PARAM_REQUEST_READ': 20,
        'MESSAGE_TYPE_PARAM_REQUEST_LIST': 21,
        'MESSAGE_TYPE_PARAM_SET': 23,
        'NODE_ID_ALL': 0,
        'PARAM_TYPE_UINT8': 1,
        'PARAM_TYPE_INT64': 8,
        'PARAM_TYPE_REAL32': 9,
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
                'px4.msg.UavcanParameterRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uavcan_parameter_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uavcan_parameter_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uavcan_parameter_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uavcan_parameter_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uavcan_parameter_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_TYPE_PARAM_REQUEST_READ': cls.__constants['MESSAGE_TYPE_PARAM_REQUEST_READ'],
            'MESSAGE_TYPE_PARAM_REQUEST_LIST': cls.__constants['MESSAGE_TYPE_PARAM_REQUEST_LIST'],
            'MESSAGE_TYPE_PARAM_SET': cls.__constants['MESSAGE_TYPE_PARAM_SET'],
            'NODE_ID_ALL': cls.__constants['NODE_ID_ALL'],
            'PARAM_TYPE_UINT8': cls.__constants['PARAM_TYPE_UINT8'],
            'PARAM_TYPE_INT64': cls.__constants['PARAM_TYPE_INT64'],
            'PARAM_TYPE_REAL32': cls.__constants['PARAM_TYPE_REAL32'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def MESSAGE_TYPE_PARAM_REQUEST_READ(self):
        """Message constant 'MESSAGE_TYPE_PARAM_REQUEST_READ'."""
        return Metaclass_UavcanParameterRequest.__constants['MESSAGE_TYPE_PARAM_REQUEST_READ']

    @property
    def MESSAGE_TYPE_PARAM_REQUEST_LIST(self):
        """Message constant 'MESSAGE_TYPE_PARAM_REQUEST_LIST'."""
        return Metaclass_UavcanParameterRequest.__constants['MESSAGE_TYPE_PARAM_REQUEST_LIST']

    @property
    def MESSAGE_TYPE_PARAM_SET(self):
        """Message constant 'MESSAGE_TYPE_PARAM_SET'."""
        return Metaclass_UavcanParameterRequest.__constants['MESSAGE_TYPE_PARAM_SET']

    @property
    def NODE_ID_ALL(self):
        """Message constant 'NODE_ID_ALL'."""
        return Metaclass_UavcanParameterRequest.__constants['NODE_ID_ALL']

    @property
    def PARAM_TYPE_UINT8(self):
        """Message constant 'PARAM_TYPE_UINT8'."""
        return Metaclass_UavcanParameterRequest.__constants['PARAM_TYPE_UINT8']

    @property
    def PARAM_TYPE_INT64(self):
        """Message constant 'PARAM_TYPE_INT64'."""
        return Metaclass_UavcanParameterRequest.__constants['PARAM_TYPE_INT64']

    @property
    def PARAM_TYPE_REAL32(self):
        """Message constant 'PARAM_TYPE_REAL32'."""
        return Metaclass_UavcanParameterRequest.__constants['PARAM_TYPE_REAL32']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_UavcanParameterRequest.__constants['ORB_QUEUE_LENGTH']


class UavcanParameterRequest(metaclass=Metaclass_UavcanParameterRequest):
    """
    Message class 'UavcanParameterRequest'.

    Constants:
      MESSAGE_TYPE_PARAM_REQUEST_READ
      MESSAGE_TYPE_PARAM_REQUEST_LIST
      MESSAGE_TYPE_PARAM_SET
      NODE_ID_ALL
      PARAM_TYPE_UINT8
      PARAM_TYPE_INT64
      PARAM_TYPE_REAL32
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_message_type',
        '_node_id',
        '_param_id',
        '_param_index',
        '_param_type',
        '_int_value',
        '_real_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'message_type': 'uint8',
        'node_id': 'uint8',
        'param_id': 'uint8[17]',
        'param_index': 'int16',
        'param_type': 'uint8',
        'int_value': 'int64',
        'real_value': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 17),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.message_type = kwargs.get('message_type', int())
        self.node_id = kwargs.get('node_id', int())
        if 'param_id' not in kwargs:
            self.param_id = numpy.zeros(17, dtype=numpy.uint8)
        else:
            self.param_id = numpy.array(kwargs.get('param_id'), dtype=numpy.uint8)
            assert self.param_id.shape == (17, )
        self.param_index = kwargs.get('param_index', int())
        self.param_type = kwargs.get('param_type', int())
        self.int_value = kwargs.get('int_value', int())
        self.real_value = kwargs.get('real_value', float())

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
        if self.message_type != other.message_type:
            return False
        if self.node_id != other.node_id:
            return False
        if any(self.param_id != other.param_id):
            return False
        if self.param_index != other.param_index:
            return False
        if self.param_type != other.param_type:
            return False
        if self.int_value != other.int_value:
            return False
        if self.real_value != other.real_value:
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
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'message_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'message_type' field must be an unsigned integer in [0, 255]"
        self._message_type = value

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'node_id' field must be an unsigned integer in [0, 255]"
        self._node_id = value

    @builtins.property
    def param_id(self):
        """Message field 'param_id'."""
        return self._param_id

    @param_id.setter
    def param_id(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'param_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 17, \
                    "The 'param_id' numpy.ndarray() must have a size of 17"
                self._param_id = value
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
                 len(value) == 17 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'param_id' field must be a set or sequence with length 17 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._param_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def param_index(self):
        """Message field 'param_index'."""
        return self._param_index

    @param_index.setter
    def param_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'param_index' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'param_index' field must be an integer in [-32768, 32767]"
        self._param_index = value

    @builtins.property
    def param_type(self):
        """Message field 'param_type'."""
        return self._param_type

    @param_type.setter
    def param_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'param_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'param_type' field must be an unsigned integer in [0, 255]"
        self._param_type = value

    @builtins.property
    def int_value(self):
        """Message field 'int_value'."""
        return self._int_value

    @int_value.setter
    def int_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'int_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._int_value = value

    @builtins.property
    def real_value(self):
        """Message field 'real_value'."""
        return self._real_value

    @real_value.setter
    def real_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'real_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'real_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._real_value = value
