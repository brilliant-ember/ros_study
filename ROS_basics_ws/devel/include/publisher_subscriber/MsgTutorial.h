// Generated by gencpp from file publisher_subscriber/MsgTutorial.msg
// DO NOT EDIT!


#ifndef PUBLISHER_SUBSCRIBER_MESSAGE_MSGTUTORIAL_H
#define PUBLISHER_SUBSCRIBER_MESSAGE_MSGTUTORIAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace publisher_subscriber
{
template <class ContainerAllocator>
struct MsgTutorial_
{
  typedef MsgTutorial_<ContainerAllocator> Type;

  MsgTutorial_()
    : stamp()
    , data(0)  {
    }
  MsgTutorial_(const ContainerAllocator& _alloc)
    : stamp()
    , data(0)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> const> ConstPtr;

}; // struct MsgTutorial_

typedef ::publisher_subscriber::MsgTutorial_<std::allocator<void> > MsgTutorial;

typedef boost::shared_ptr< ::publisher_subscriber::MsgTutorial > MsgTutorialPtr;
typedef boost::shared_ptr< ::publisher_subscriber::MsgTutorial const> MsgTutorialConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::publisher_subscriber::MsgTutorial_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::publisher_subscriber::MsgTutorial_<ContainerAllocator1> & lhs, const ::publisher_subscriber::MsgTutorial_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::publisher_subscriber::MsgTutorial_<ContainerAllocator1> & lhs, const ::publisher_subscriber::MsgTutorial_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace publisher_subscriber

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc5a8a0aefee54a11d41536be86744a6";
  }

  static const char* value(const ::publisher_subscriber::MsgTutorial_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc5a8a0aefee54a1ULL;
  static const uint64_t static_value2 = 0x1d41536be86744a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "publisher_subscriber/MsgTutorial";
  }

  static const char* value(const ::publisher_subscriber::MsgTutorial_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n"
"int32 data\n"
;
  }

  static const char* value(const ::publisher_subscriber::MsgTutorial_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgTutorial_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::publisher_subscriber::MsgTutorial_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::publisher_subscriber::MsgTutorial_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PUBLISHER_SUBSCRIBER_MESSAGE_MSGTUTORIAL_H