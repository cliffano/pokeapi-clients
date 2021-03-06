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


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/uri.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

#include "VersionApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

VersionApiException::VersionApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int VersionApiException::getStatus() const
{
    return m_status;
}
const char* VersionApiException::what() const noexcept
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

VersionApiApiV2VersionResource::VersionApiApiV2VersionResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/version//");
	this->set_method_handler("GET",
		std::bind(&VersionApiApiV2VersionResource::handler_GET_internal, this,
			std::placeholders::_1));
}

VersionApiApiV2VersionResource::~VersionApiApiV2VersionResource()
{
}

std::pair<int, std::string> VersionApiApiV2VersionResource::handleVersionApiException(const VersionApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> VersionApiApiV2VersionResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> VersionApiApiV2VersionResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void VersionApiApiV2VersionResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void VersionApiApiV2VersionResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void VersionApiApiV2VersionResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void VersionApiApiV2VersionResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const VersionApiException& e) {
        std::tie(status_code, result) = handleVersionApiException(e);
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


std::pair<int, std::string> VersionApiApiV2VersionResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw VersionApiException(501, "Not implemented");
}


std::string VersionApiApiV2VersionResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
VersionApiApiV2VersionIdResource::VersionApiApiV2VersionIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/version/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&VersionApiApiV2VersionIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

VersionApiApiV2VersionIdResource::~VersionApiApiV2VersionIdResource()
{
}

std::pair<int, std::string> VersionApiApiV2VersionIdResource::handleVersionApiException(const VersionApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> VersionApiApiV2VersionIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> VersionApiApiV2VersionIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void VersionApiApiV2VersionIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void VersionApiApiV2VersionIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void VersionApiApiV2VersionIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void VersionApiApiV2VersionIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const VersionApiException& e) {
        std::tie(status_code, result) = handleVersionApiException(e);
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


std::pair<int, std::string> VersionApiApiV2VersionIdResource::handler_GET(
        int32_t const & id)
{
    throw VersionApiException(501, "Not implemented");
}


std::string VersionApiApiV2VersionIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

VersionApi::VersionApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

VersionApi::~VersionApi() {}

void VersionApi::setVersionApiApiV2VersionResource(std::shared_ptr<VersionApiApiV2VersionResource> spVersionApiApiV2VersionResource) {
    m_spVersionApiApiV2VersionResource = spVersionApiApiV2VersionResource;
    m_service->publish(m_spVersionApiApiV2VersionResource);
}
void VersionApi::setVersionApiApiV2VersionIdResource(std::shared_ptr<VersionApiApiV2VersionIdResource> spVersionApiApiV2VersionIdResource) {
    m_spVersionApiApiV2VersionIdResource = spVersionApiApiV2VersionIdResource;
    m_service->publish(m_spVersionApiApiV2VersionIdResource);
}


void VersionApi::publishDefaultResources() {
    if (!m_spVersionApiApiV2VersionResource) {
        setVersionApiApiV2VersionResource(std::make_shared<VersionApiApiV2VersionResource>());
    }
    if (!m_spVersionApiApiV2VersionIdResource) {
        setVersionApiApiV2VersionIdResource(std::make_shared<VersionApiApiV2VersionIdResource>());
    }
}

std::shared_ptr<restbed::Service> VersionApi::service() {
    return m_service;
}


}
}
}
}

