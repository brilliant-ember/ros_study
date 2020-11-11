// Generated by gencpp from file server_client/SrvTutorialRequest.msg
// DO NOT EDIT!


#ifndef SERVER_CLIENT_MESSAGE_SRVTUTORIALREQUEST_H
#define SERVER_CLIENT_MESSAGE_SRVTUTORIALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace server_client
{
template <class ContainerAllocator>
struct SrvTutorialRequest_
{
  typedef SrvTutorialRequest_<ContainerAllocator> Type;

  SrvTutorialRequest_()
    : a(0)
    , b(0)  {
    }
  SrvTutorialRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::server_client::SrvTutorialRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::server_client::SrvTutorialRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SrvTutorialRequest_

typedef ::server_client::SrvTutorialRequest_<std::allocator<void> > SrvTutorialRequest;

typedef boost::shared_ptr< ::server_client::SrvTutorialRequest > SrvTutorialRequestPtr;
typedef boost::shared_ptr< ::server_client::SrvTutorialRequest const> SrvTutorialRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::server_client::SrvTutorialRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::server_client::SrvTutorialRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::server_client::SrvTutorialRequest_<ContainerAllocator1> & lhs, const ::server_client::SrvTutorialRequest_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::server_client::SrvTutorialRequest_<ContainerAllocator1> & lhs, const ::server_client::SrvTutorialRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace server_client

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::server_client::SrvTutorialRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::server_client::SrvTutorialRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::server_client::SrvTutorialRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d09b846be0b371c5f190354dd3153e";
  }

  static const char* value(const ::server_client::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
  static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
};

template<class ContainerAllocator>
struct DataType< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "server_client/SrvTutorialRequest";
  }

  static const char* value(const ::server_client::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n"
"int64 b\n"
;
  }

  static const char* value(const ::server_client::SrvTutorialRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SrvTutorialRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::server_client::SrvTutorialRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::server_client::SrvTutorialRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVER_CLIENT_MESSAGE_SRVTUTORIALREQUEST_H
