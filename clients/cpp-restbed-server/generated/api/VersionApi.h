/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * VersionApi.h
 *
 * 
 */

#ifndef VersionApi_H_
#define VersionApi_H_


#include <memory>
#include <utility>
#include <exception>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  VersionApiException: public std::exception
{
public:
    VersionApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  VersionApiApiV2VersionResource: public restbed::Resource
{
public:
    VersionApiApiV2VersionResource(const std::string& context = "");
    virtual ~VersionApiApiV2VersionResource();

protected:
    //////////////////////////////////////////////////////////
    // Override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t const & limit, int32_t const & offset);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);

    virtual int32_t getQueryParam_limit(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_query_parameter("limit", 0);
    }

    virtual int32_t getQueryParam_offset(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_query_parameter("offset", 0);
    }



    virtual std::pair<int, std::string> handleVersionApiException(const VersionApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);


    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, const std::string& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};


/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  VersionApiApiV2VersionIdResource: public restbed::Resource
{
public:
    VersionApiApiV2VersionIdResource(const std::string& context = "");
    virtual ~VersionApiApiV2VersionIdResource();

protected:
    //////////////////////////////////////////////////////////
    // Override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t const & id);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);

    virtual int32_t getPathParam_id(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_path_parameter("id", 0);
    }



    virtual std::pair<int, std::string> handleVersionApiException(const VersionApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);


    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, const std::string& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};



//
// The restbed service to actually implement the REST server
//
class  VersionApi
{
public:
    explicit VersionApi(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~VersionApi();

    virtual void setVersionApiApiV2VersionResource(std::shared_ptr<VersionApiApiV2VersionResource> spVersionApiApiV2VersionResource);
    virtual void setVersionApiApiV2VersionIdResource(std::shared_ptr<VersionApiApiV2VersionIdResource> spVersionApiApiV2VersionIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<VersionApiApiV2VersionResource> m_spVersionApiApiV2VersionResource;
	std::shared_ptr<VersionApiApiV2VersionIdResource> m_spVersionApiApiV2VersionIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* VersionApi_H_ */
