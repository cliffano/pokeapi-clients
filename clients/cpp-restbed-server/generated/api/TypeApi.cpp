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

#include "TypeApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

TypeApiException::TypeApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int TypeApiException::getStatus() const
{
    return m_status;
}
const char* TypeApiException::what() const noexcept
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

TypeApiApiV2TypeResource::TypeApiApiV2TypeResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/type//");
	this->set_method_handler("GET",
		std::bind(&TypeApiApiV2TypeResource::handler_GET_internal, this,
			std::placeholders::_1));
}

TypeApiApiV2TypeResource::~TypeApiApiV2TypeResource()
{
}

std::pair<int, std::string> TypeApiApiV2TypeResource::handleTypeApiException(const TypeApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> TypeApiApiV2TypeResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> TypeApiApiV2TypeResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void TypeApiApiV2TypeResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void TypeApiApiV2TypeResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void TypeApiApiV2TypeResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void TypeApiApiV2TypeResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const TypeApiException& e) {
        std::tie(status_code, result) = handleTypeApiException(e);
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


std::pair<int, std::string> TypeApiApiV2TypeResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw TypeApiException(501, "Not implemented");
}


std::string TypeApiApiV2TypeResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
TypeApiApiV2TypeIdResource::TypeApiApiV2TypeIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/type/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&TypeApiApiV2TypeIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

TypeApiApiV2TypeIdResource::~TypeApiApiV2TypeIdResource()
{
}

std::pair<int, std::string> TypeApiApiV2TypeIdResource::handleTypeApiException(const TypeApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> TypeApiApiV2TypeIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> TypeApiApiV2TypeIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void TypeApiApiV2TypeIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void TypeApiApiV2TypeIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void TypeApiApiV2TypeIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void TypeApiApiV2TypeIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const TypeApiException& e) {
        std::tie(status_code, result) = handleTypeApiException(e);
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


std::pair<int, std::string> TypeApiApiV2TypeIdResource::handler_GET(
        int32_t const & id)
{
    throw TypeApiException(501, "Not implemented");
}


std::string TypeApiApiV2TypeIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

TypeApi::TypeApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

TypeApi::~TypeApi() {}

void TypeApi::setTypeApiApiV2TypeResource(std::shared_ptr<TypeApiApiV2TypeResource> spTypeApiApiV2TypeResource) {
    m_spTypeApiApiV2TypeResource = spTypeApiApiV2TypeResource;
    m_service->publish(m_spTypeApiApiV2TypeResource);
}
void TypeApi::setTypeApiApiV2TypeIdResource(std::shared_ptr<TypeApiApiV2TypeIdResource> spTypeApiApiV2TypeIdResource) {
    m_spTypeApiApiV2TypeIdResource = spTypeApiApiV2TypeIdResource;
    m_service->publish(m_spTypeApiApiV2TypeIdResource);
}


void TypeApi::publishDefaultResources() {
    if (!m_spTypeApiApiV2TypeResource) {
        setTypeApiApiV2TypeResource(std::make_shared<TypeApiApiV2TypeResource>());
    }
    if (!m_spTypeApiApiV2TypeIdResource) {
        setTypeApiApiV2TypeIdResource(std::make_shared<TypeApiApiV2TypeIdResource>());
    }
}

std::shared_ptr<restbed::Service> TypeApi::service() {
    return m_service;
}


}
}
}
}

