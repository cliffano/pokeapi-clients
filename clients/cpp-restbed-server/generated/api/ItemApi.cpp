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

#include "ItemApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ItemApiException::ItemApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int ItemApiException::getStatus() const
{
    return m_status;
}
const char* ItemApiException::what() const noexcept
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

ItemApiApiV2ItemResource::ItemApiApiV2ItemResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/item//");
	this->set_method_handler("GET",
		std::bind(&ItemApiApiV2ItemResource::handler_GET_internal, this,
			std::placeholders::_1));
}

ItemApiApiV2ItemResource::~ItemApiApiV2ItemResource()
{
}

std::pair<int, std::string> ItemApiApiV2ItemResource::handleItemApiException(const ItemApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> ItemApiApiV2ItemResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> ItemApiApiV2ItemResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void ItemApiApiV2ItemResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void ItemApiApiV2ItemResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void ItemApiApiV2ItemResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void ItemApiApiV2ItemResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const ItemApiException& e) {
        std::tie(status_code, result) = handleItemApiException(e);
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


std::pair<int, std::string> ItemApiApiV2ItemResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw ItemApiException(501, "Not implemented");
}


std::string ItemApiApiV2ItemResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
ItemApiApiV2ItemIdResource::ItemApiApiV2ItemIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/item/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&ItemApiApiV2ItemIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

ItemApiApiV2ItemIdResource::~ItemApiApiV2ItemIdResource()
{
}

std::pair<int, std::string> ItemApiApiV2ItemIdResource::handleItemApiException(const ItemApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> ItemApiApiV2ItemIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> ItemApiApiV2ItemIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void ItemApiApiV2ItemIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void ItemApiApiV2ItemIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void ItemApiApiV2ItemIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void ItemApiApiV2ItemIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const ItemApiException& e) {
        std::tie(status_code, result) = handleItemApiException(e);
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


std::pair<int, std::string> ItemApiApiV2ItemIdResource::handler_GET(
        int32_t const & id)
{
    throw ItemApiException(501, "Not implemented");
}


std::string ItemApiApiV2ItemIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

ItemApi::ItemApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

ItemApi::~ItemApi() {}

void ItemApi::setItemApiApiV2ItemResource(std::shared_ptr<ItemApiApiV2ItemResource> spItemApiApiV2ItemResource) {
    m_spItemApiApiV2ItemResource = spItemApiApiV2ItemResource;
    m_service->publish(m_spItemApiApiV2ItemResource);
}
void ItemApi::setItemApiApiV2ItemIdResource(std::shared_ptr<ItemApiApiV2ItemIdResource> spItemApiApiV2ItemIdResource) {
    m_spItemApiApiV2ItemIdResource = spItemApiApiV2ItemIdResource;
    m_service->publish(m_spItemApiApiV2ItemIdResource);
}


void ItemApi::publishDefaultResources() {
    if (!m_spItemApiApiV2ItemResource) {
        setItemApiApiV2ItemResource(std::make_shared<ItemApiApiV2ItemResource>());
    }
    if (!m_spItemApiApiV2ItemIdResource) {
        setItemApiApiV2ItemIdResource(std::make_shared<ItemApiApiV2ItemIdResource>());
    }
}

std::shared_ptr<restbed::Service> ItemApi::service() {
    return m_service;
}


}
}
}
}

