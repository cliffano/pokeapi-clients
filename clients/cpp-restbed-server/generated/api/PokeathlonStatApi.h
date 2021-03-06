/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PokeathlonStatApi.h
 *
 * 
 */

#ifndef PokeathlonStatApi_H_
#define PokeathlonStatApi_H_


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
class  PokeathlonStatApiException: public std::exception
{
public:
    PokeathlonStatApiException(int status_code, std::string what);

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
class  PokeathlonStatApiApiV2Pokeathlon-statResource: public restbed::Resource
{
public:
    PokeathlonStatApiApiV2Pokeathlon-statResource(const std::string& context = "");
    virtual ~PokeathlonStatApiApiV2Pokeathlon-statResource();

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



    virtual std::pair<int, std::string> handlePokeathlonStatApiException(const PokeathlonStatApiException& e);
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
class  PokeathlonStatApiApiV2Pokeathlon-statIdResource: public restbed::Resource
{
public:
    PokeathlonStatApiApiV2Pokeathlon-statIdResource(const std::string& context = "");
    virtual ~PokeathlonStatApiApiV2Pokeathlon-statIdResource();

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



    virtual std::pair<int, std::string> handlePokeathlonStatApiException(const PokeathlonStatApiException& e);
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
class  PokeathlonStatApi
{
public:
    explicit PokeathlonStatApi(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~PokeathlonStatApi();

    virtual void setPokeathlonStatApiApiV2Pokeathlon-statResource(std::shared_ptr<PokeathlonStatApiApiV2Pokeathlon-statResource> spPokeathlonStatApiApiV2Pokeathlon-statResource);
    virtual void setPokeathlonStatApiApiV2Pokeathlon-statIdResource(std::shared_ptr<PokeathlonStatApiApiV2Pokeathlon-statIdResource> spPokeathlonStatApiApiV2Pokeathlon-statIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<PokeathlonStatApiApiV2Pokeathlon-statResource> m_spPokeathlonStatApiApiV2Pokeathlon-statResource;
	std::shared_ptr<PokeathlonStatApiApiV2Pokeathlon-statIdResource> m_spPokeathlonStatApiApiV2Pokeathlon-statIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* PokeathlonStatApi_H_ */

