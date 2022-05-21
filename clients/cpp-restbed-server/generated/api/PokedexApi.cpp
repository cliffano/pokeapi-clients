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


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/uri.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

#include "PokedexApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

PokedexApiException::PokedexApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int PokedexApiException::getStatus() const
{
    return m_status;
}
const char* PokedexApiException::what() const noexcept
{
    return m_what.c_str();
}


template<class MODEL_T>
std::shared_ptr<MODEL_T> extractJsonModelBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto model = std::make_shared<MODEL_T>(pt);
    return model;
}

template<class MODEL_T>
std::vector<std::shared_ptr<MODEL_T>> extractJsonArrayBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto arrayRet = std::vector<std::shared_ptr<MODEL_T>>();
    for (const auto& child: pt) {
        arrayRet.emplace_back(std::make_shared<MODEL_T>(child.second));
    }
    return arrayRet;
}

template <class KEY_T, class VAL_T>
std::string convertMapResponse(const std::map<KEY_T, VAL_T>& map)
{
    boost::property_tree::ptree pt;
    for(const auto &kv: map) {
    pt.push_back(boost::property_tree::ptree::value_type(
        boost::lexical_cast<std::string>(kv.first),
        boost::property_tree::ptree(
        boost::lexical_cast<std::string>(kv.second))));
    }
    std::stringstream sstream;
    write_json(sstream, pt);
    std::string result = sstream.str();
    return result;
}

PokedexApiApiV2PokedexResource::PokedexApiApiV2PokedexResource(const std::string& context /* = "/api/v2" */)
{
	this->set_path(context + "/api/v2/pokedex//");
	this->set_method_handler("GET",
		std::bind(&PokedexApiApiV2PokedexResource::handler_GET_internal, this,
			std::placeholders::_1));
}

PokedexApiApiV2PokedexResource::~PokedexApiApiV2PokedexResource()
{
}

std::pair<int, std::string> PokedexApiApiV2PokedexResource::handlePokedexApiException(const PokedexApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> PokedexApiApiV2PokedexResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> PokedexApiApiV2PokedexResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void PokedexApiApiV2PokedexResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void PokedexApiApiV2PokedexResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void PokedexApiApiV2PokedexResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void PokedexApiApiV2PokedexResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();


    // Getting the query params
    const int32_t limit = getQueryParam_limit(request);
    const int32_t offset = getQueryParam_offset(request);


    int status_code = 500;
    std::string resultObject = "";
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(limit, offset);
    }
    catch(const PokedexApiException& e) {
        std::tie(status_code, result) = handlePokedexApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 0) {
        result = resultObject;

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Default response" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::string> PokedexApiApiV2PokedexResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw PokedexApiException(501, "Not implemented");
}


std::string PokedexApiApiV2PokedexResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}
PokedexApiApiV2PokedexIdResource::PokedexApiApiV2PokedexIdResource(const std::string& context /* = "/api/v2" */)
{
	this->set_path(context + "/api/v2/pokedex/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&PokedexApiApiV2PokedexIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

PokedexApiApiV2PokedexIdResource::~PokedexApiApiV2PokedexIdResource()
{
}

std::pair<int, std::string> PokedexApiApiV2PokedexIdResource::handlePokedexApiException(const PokedexApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> PokedexApiApiV2PokedexIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> PokedexApiApiV2PokedexIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void PokedexApiApiV2PokedexIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void PokedexApiApiV2PokedexIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void PokedexApiApiV2PokedexIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void PokedexApiApiV2PokedexIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();

    // Getting the path params
    const int32_t id = getPathParam_id(request);



    int status_code = 500;
    std::string resultObject = "";
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(id);
    }
    catch(const PokedexApiException& e) {
        std::tie(status_code, result) = handlePokedexApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 0) {
        result = resultObject;

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Default response" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::string> PokedexApiApiV2PokedexIdResource::handler_GET(
        int32_t const & id)
{
    throw PokedexApiException(501, "Not implemented");
}


std::string PokedexApiApiV2PokedexIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}

PokedexApi::PokedexApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

PokedexApi::~PokedexApi() {}

void PokedexApi::setPokedexApiApiV2PokedexResource(std::shared_ptr<PokedexApiApiV2PokedexResource> spPokedexApiApiV2PokedexResource) {
    m_spPokedexApiApiV2PokedexResource = spPokedexApiApiV2PokedexResource;
    m_service->publish(m_spPokedexApiApiV2PokedexResource);
}
void PokedexApi::setPokedexApiApiV2PokedexIdResource(std::shared_ptr<PokedexApiApiV2PokedexIdResource> spPokedexApiApiV2PokedexIdResource) {
    m_spPokedexApiApiV2PokedexIdResource = spPokedexApiApiV2PokedexIdResource;
    m_service->publish(m_spPokedexApiApiV2PokedexIdResource);
}


void PokedexApi::publishDefaultResources() {
    if (!m_spPokedexApiApiV2PokedexResource) {
        setPokedexApiApiV2PokedexResource(std::make_shared<PokedexApiApiV2PokedexResource>());
    }
    if (!m_spPokedexApiApiV2PokedexIdResource) {
        setPokedexApiApiV2PokedexIdResource(std::make_shared<PokedexApiApiV2PokedexIdResource>());
    }
}

std::shared_ptr<restbed::Service> PokedexApi::service() {
    return m_service;
}


}
}
}
}
