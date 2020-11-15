// Generated by gencpp from file server_client/SrvTutorial.msg
// DO NOT EDIT!


#ifndef SERVER_CLIENT_MESSAGE_SRVTUTORIAL_H
#define SERVER_CLIENT_MESSAGE_SRVTUTORIAL_H

#include <ros/service_traits.h>


#include <server_client/SrvTutorialRequest.h>
#include <server_client/SrvTutorialResponse.h>


namespace server_client
{

struct SrvTutorial
{

typedef SrvTutorialRequest Request;
typedef SrvTutorialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTutorial
} // namespace server_client


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::server_client::SrvTutorial > {
  static const char* value()
  {
    return "d431cae597499d244ef1c576e21358c8";
  }

  static const char* value(const ::server_client::SrvTutorial&) { return value(); }
};

template<>
struct DataType< ::server_client::SrvTutorial > {
  static const char* value()
  {
    return "server_client/SrvTutorial";
  }

  static const char* value(const ::server_client::SrvTutorial&) { return value(); }
};


// service_traits::MD5Sum< ::server_client::SrvTutorialRequest> should match
// service_traits::MD5Sum< ::server_client::SrvTutorial >
template<>
struct MD5Sum< ::server_client::SrvTutorialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::server_client::SrvTutorial >::value();
  }
  static const char* value(const ::server_client::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::server_client::SrvTutorialRequest> should match
// service_traits::DataType< ::server_client::SrvTutorial >
template<>
struct DataType< ::server_client::SrvTutorialRequest>
{
  static const char* value()
  {
    return DataType< ::server_client::SrvTutorial >::value();
  }
  static const char* value(const ::server_client::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::server_client::SrvTutorialResponse> should match
// service_traits::MD5Sum< ::server_client::SrvTutorial >
template<>
struct MD5Sum< ::server_client::SrvTutorialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::server_client::SrvTutorial >::value();
  }
  static const char* value(const ::server_client::SrvTutorialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::server_client::SrvTutorialResponse> should match
// service_traits::DataType< ::server_client::SrvTutorial >
template<>
struct DataType< ::server_client::SrvTutorialResponse>
{
  static const char* value()
  {
    return DataType< ::server_client::SrvTutorial >::value();
  }
  static const char* value(const ::server_client::SrvTutorialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERVER_CLIENT_MESSAGE_SRVTUTORIAL_H