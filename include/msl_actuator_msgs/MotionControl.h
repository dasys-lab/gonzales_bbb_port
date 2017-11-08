// Generated by gencpp from file msl_actuator_msgs/MotionControl.msg
// DO NOT EDIT!


#ifndef MSL_ACTUATOR_MSGS_MESSAGE_MOTIONCONTROL_H
#define MSL_ACTUATOR_MSGS_MESSAGE_MOTIONCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msl_msgs/MotionInfo.h>

namespace msl_actuator_msgs
{
template <class ContainerAllocator>
struct MotionControl_
{
  typedef MotionControl_<ContainerAllocator> Type;

  MotionControl_()
    : senderID(0)
    , motion()
    , timestamp(0)  {
    }
  MotionControl_(const ContainerAllocator& _alloc)
    : senderID(0)
    , motion(_alloc)
    , timestamp(0)  {
  (void)_alloc;
    }



   typedef int32_t _senderID_type;
  _senderID_type senderID;

   typedef  ::msl_msgs::MotionInfo_<ContainerAllocator>  _motion_type;
  _motion_type motion;

   typedef uint64_t _timestamp_type;
  _timestamp_type timestamp;




  typedef boost::shared_ptr< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> const> ConstPtr;

}; // struct MotionControl_

typedef ::msl_actuator_msgs::MotionControl_<std::allocator<void> > MotionControl;

typedef boost::shared_ptr< ::msl_actuator_msgs::MotionControl > MotionControlPtr;
typedef boost::shared_ptr< ::msl_actuator_msgs::MotionControl const> MotionControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msl_actuator_msgs::MotionControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msl_actuator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'msl_msgs': ['/home/paspartout/cnws/src/cnc-msl/msl_msgs/msg'], 'std_msgs': ['/home/paspartout/dev/pro/ros-void/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/paspartout/cnws/src/common_msgs/geometry_msgs/msg'], 'msl_actuator_msgs': ['/home/paspartout/cnws/src/cnc-msl/msl_actuator_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "523610abda9431556f02e384f8ffd094";
  }

  static const char* value(const ::msl_actuator_msgs::MotionControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x523610abda943155ULL;
  static const uint64_t static_value2 = 0x6f02e384f8ffd094ULL;
};

template<class ContainerAllocator>
struct DataType< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msl_actuator_msgs/MotionControl";
  }

  static const char* value(const ::msl_actuator_msgs::MotionControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 senderID\n\
msl_msgs/MotionInfo motion\n\
uint64 timestamp\n\
\n\
================================================================================\n\
MSG: msl_msgs/MotionInfo\n\
float64 angle\n\
float64 translation\n\
float64 rotation\n\
";
  }

  static const char* value(const ::msl_actuator_msgs::MotionControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.senderID);
      stream.next(m.motion);
      stream.next(m.timestamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msl_actuator_msgs::MotionControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msl_actuator_msgs::MotionControl_<ContainerAllocator>& v)
  {
    s << indent << "senderID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.senderID);
    s << indent << "motion: ";
    s << std::endl;
    Printer< ::msl_msgs::MotionInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.motion);
    s << indent << "timestamp: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timestamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSL_ACTUATOR_MSGS_MESSAGE_MOTIONCONTROL_H