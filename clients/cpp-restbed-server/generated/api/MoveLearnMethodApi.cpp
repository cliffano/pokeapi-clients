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

#include "MoveLearnMethodApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

MoveLearnMethodApiException::MoveLearnMethodApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int MoveLearnMethodApiException::getStatus() const
{
    return m_status;
}
const char* MoveLearnMethodApiException::what() const noexcept
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

MoveLearnMethodApiApiV2Move-learn-methodResource::MoveLearnMethodApiApiV2Move-learn-methodResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/move-learn-method//");
	this->set_method_handler("GET",
		std::bind(&MoveLearnMethodApiApiV2Move-learn-methodResource::handler_GET_internal, this,
			std::placeholders::_1));
}

MoveLearnMethodApiApiV2Move-learn-methodResource::~MoveLearnMethodApiApiV2Move-learn-methodResource()
{
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodResource::handleMoveLearnMethodApiException(const MoveLearnMethodApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void MoveLearnMethodApiApiV2Move-learn-methodResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void MoveLearnMethodApiApiV2Move-learn-methodResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void MoveLearnMethodApiApiV2Move-learn-methodResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void MoveLearnMethodApiApiV2Move-learn-methodResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const MoveLearnMethodApiException& e) {
        std::tie(status_code, result) = handleMoveLearnMethodApiException(e);
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


std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw MoveLearnMethodApiException(501, "Not implemented");
}


std::string MoveLearnMethodApiApiV2Move-learn-methodResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
MoveLearnMethodApiApiV2Move-learn-methodIdResource::MoveLearnMethodApiApiV2Move-learn-methodIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/move-learn-method/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&MoveLearnMethodApiApiV2Move-learn-methodIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

MoveLearnMethodApiApiV2Move-learn-methodIdResource::~MoveLearnMethodApiApiV2Move-learn-methodIdResource()
{
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodIdResource::handleMoveLearnMethodApiException(const MoveLearnMethodApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void MoveLearnMethodApiApiV2Move-learn-methodIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void MoveLearnMethodApiApiV2Move-learn-methodIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void MoveLearnMethodApiApiV2Move-learn-methodIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void MoveLearnMethodApiApiV2Move-learn-methodIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const MoveLearnMethodApiException& e) {
        std::tie(status_code, result) = handleMoveLearnMethodApiException(e);
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


std::pair<int, std::string> MoveLearnMethodApiApiV2Move-learn-methodIdResource::handler_GET(
        int32_t const & id)
{
    throw MoveLearnMethodApiException(501, "Not implemented");
}


std::string MoveLearnMethodApiApiV2Move-learn-methodIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

MoveLearnMethodApi::MoveLearnMethodApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

MoveLearnMethodApi::~MoveLearnMethodApi() {}

void MoveLearnMethodApi::setMoveLearnMethodApiApiV2Move-learn-methodResource(std::shared_ptr<MoveLearnMethodApiApiV2Move-learn-methodResource> spMoveLearnMethodApiApiV2Move-learn-methodResource) {
    m_spMoveLearnMethodApiApiV2Move-learn-methodResource = spMoveLearnMethodApiApiV2Move-learn-methodResource;
    m_service->publish(m_spMoveLearnMethodApiApiV2Move-learn-methodResource);
}
void MoveLearnMethodApi::setMoveLearnMethodApiApiV2Move-learn-methodIdResource(std::shared_ptr<MoveLearnMethodApiApiV2Move-learn-methodIdResource> spMoveLearnMethodApiApiV2Move-learn-methodIdResource) {
    m_spMoveLearnMethodApiApiV2Move-learn-methodIdResource = spMoveLearnMethodApiApiV2Move-learn-methodIdResource;
    m_service->publish(m_spMoveLearnMethodApiApiV2Move-learn-methodIdResource);
}


void MoveLearnMethodApi::publishDefaultResources() {
    if (!m_spMoveLearnMethodApiApiV2Move-learn-methodResource) {
        setMoveLearnMethodApiApiV2Move-learn-methodResource(std::make_shared<MoveLearnMethodApiApiV2Move-learn-methodResource>());
    }
    if (!m_spMoveLearnMethodApiApiV2Move-learn-methodIdResource) {
        setMoveLearnMethodApiApiV2Move-learn-methodIdResource(std::make_shared<MoveLearnMethodApiApiV2Move-learn-methodIdResource>());
    }
}

std::shared_ptr<restbed::Service> MoveLearnMethodApi::service() {
    return m_service;
}


}
}
}
}

