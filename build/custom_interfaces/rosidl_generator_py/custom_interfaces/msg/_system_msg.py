# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/SystemMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'system_size'
# Member 'free_space'
# Member 'frequency'
# Member 'core_temp'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemMsg(type):
    """Metaclass of message 'SystemMsg'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.msg.SystemMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemMsg(metaclass=Metaclass_SystemMsg):
    """Message class 'SystemMsg'."""

    __slots__ = [
        '_device_name',
        '_linux_version',
        '_cpu_model_name',
        '_user_name',
        '_partitions',
        '_system_size',
        '_free_space',
        '_ram_size',
        '_used_ram',
        '_available_ram',
        '_cpu_processor',
        '_frequency',
        '_cpu_temp',
        '_core_temp',
    ]

    _fields_and_field_types = {
        'device_name': 'string',
        'linux_version': 'string',
        'cpu_model_name': 'string',
        'user_name': 'string',
        'partitions': 'sequence<string>',
        'system_size': 'sequence<float>',
        'free_space': 'sequence<float>',
        'ram_size': 'double',
        'used_ram': 'double',
        'available_ram': 'double',
        'cpu_processor': 'uint32',
        'frequency': 'sequence<float>',
        'cpu_temp': 'double',
        'core_temp': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_name = kwargs.get('device_name', str())
        self.linux_version = kwargs.get('linux_version', str())
        self.cpu_model_name = kwargs.get('cpu_model_name', str())
        self.user_name = kwargs.get('user_name', str())
        self.partitions = kwargs.get('partitions', [])
        self.system_size = array.array('f', kwargs.get('system_size', []))
        self.free_space = array.array('f', kwargs.get('free_space', []))
        self.ram_size = kwargs.get('ram_size', float())
        self.used_ram = kwargs.get('used_ram', float())
        self.available_ram = kwargs.get('available_ram', float())
        self.cpu_processor = kwargs.get('cpu_processor', int())
        self.frequency = array.array('f', kwargs.get('frequency', []))
        self.cpu_temp = kwargs.get('cpu_temp', float())
        self.core_temp = array.array('f', kwargs.get('core_temp', []))

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
        if self.device_name != other.device_name:
            return False
        if self.linux_version != other.linux_version:
            return False
        if self.cpu_model_name != other.cpu_model_name:
            return False
        if self.user_name != other.user_name:
            return False
        if self.partitions != other.partitions:
            return False
        if self.system_size != other.system_size:
            return False
        if self.free_space != other.free_space:
            return False
        if self.ram_size != other.ram_size:
            return False
        if self.used_ram != other.used_ram:
            return False
        if self.available_ram != other.available_ram:
            return False
        if self.cpu_processor != other.cpu_processor:
            return False
        if self.frequency != other.frequency:
            return False
        if self.cpu_temp != other.cpu_temp:
            return False
        if self.core_temp != other.core_temp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def device_name(self):
        """Message field 'device_name'."""
        return self._device_name

    @device_name.setter
    def device_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_name' field must be of type 'str'"
        self._device_name = value

    @property
    def linux_version(self):
        """Message field 'linux_version'."""
        return self._linux_version

    @linux_version.setter
    def linux_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'linux_version' field must be of type 'str'"
        self._linux_version = value

    @property
    def cpu_model_name(self):
        """Message field 'cpu_model_name'."""
        return self._cpu_model_name

    @cpu_model_name.setter
    def cpu_model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cpu_model_name' field must be of type 'str'"
        self._cpu_model_name = value

    @property
    def user_name(self):
        """Message field 'user_name'."""
        return self._user_name

    @user_name.setter
    def user_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_name' field must be of type 'str'"
        self._user_name = value

    @property
    def partitions(self):
        """Message field 'partitions'."""
        return self._partitions

    @partitions.setter
    def partitions(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'partitions' field must be a set or sequence and each value of type 'str'"
        self._partitions = value

    @property
    def system_size(self):
        """Message field 'system_size'."""
        return self._system_size

    @system_size.setter
    def system_size(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'system_size' array.array() must have the type code of 'f'"
            self._system_size = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'system_size' field must be a set or sequence and each value of type 'float'"
        self._system_size = array.array('f', value)

    @property
    def free_space(self):
        """Message field 'free_space'."""
        return self._free_space

    @free_space.setter
    def free_space(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'free_space' array.array() must have the type code of 'f'"
            self._free_space = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'free_space' field must be a set or sequence and each value of type 'float'"
        self._free_space = array.array('f', value)

    @property
    def ram_size(self):
        """Message field 'ram_size'."""
        return self._ram_size

    @ram_size.setter
    def ram_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ram_size' field must be of type 'float'"
        self._ram_size = value

    @property
    def used_ram(self):
        """Message field 'used_ram'."""
        return self._used_ram

    @used_ram.setter
    def used_ram(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'used_ram' field must be of type 'float'"
        self._used_ram = value

    @property
    def available_ram(self):
        """Message field 'available_ram'."""
        return self._available_ram

    @available_ram.setter
    def available_ram(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'available_ram' field must be of type 'float'"
        self._available_ram = value

    @property
    def cpu_processor(self):
        """Message field 'cpu_processor'."""
        return self._cpu_processor

    @cpu_processor.setter
    def cpu_processor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cpu_processor' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cpu_processor' field must be an unsigned integer in [0, 4294967295]"
        self._cpu_processor = value

    @property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'frequency' array.array() must have the type code of 'f'"
            self._frequency = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'frequency' field must be a set or sequence and each value of type 'float'"
        self._frequency = array.array('f', value)

    @property
    def cpu_temp(self):
        """Message field 'cpu_temp'."""
        return self._cpu_temp

    @cpu_temp.setter
    def cpu_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_temp' field must be of type 'float'"
        self._cpu_temp = value

    @property
    def core_temp(self):
        """Message field 'core_temp'."""
        return self._core_temp

    @core_temp.setter
    def core_temp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'core_temp' array.array() must have the type code of 'f'"
            self._core_temp = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'core_temp' field must be a set or sequence and each value of type 'float'"
        self._core_temp = array.array('f', value)
