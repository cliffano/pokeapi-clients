/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIPokeathlonStatApiRequest.h"

namespace OpenAPI {

OAIPokeathlonStatApiRequest::OAIPokeathlonStatApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIPokeathlonStatApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIPokeathlonStatApiRequest::~OAIPokeathlonStatApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIPokeathlonStatApiRequest::~OAIPokeathlonStatApiRequest()";
}

QMap<QString, QString>
OAIPokeathlonStatApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIPokeathlonStatApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIPokeathlonStatApiRequest::getRawSocket(){
    return socket;
}


void OAIPokeathlonStatApiRequest::pokeathlonStatListRequest(){
    qDebug() << "/api/v2/api/v2/pokeathlon-stat/";
    connect(this, &OAIPokeathlonStatApiRequest::pokeathlonStatList, handler.data(), &OAIPokeathlonStatApiHandler::pokeathlonStatList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    emit pokeathlonStatList(limit, offset);
}


void OAIPokeathlonStatApiRequest::pokeathlonStatReadRequest(const QString& idstr){
    qDebug() << "/api/v2/api/v2/pokeathlon-stat/{id}/";
    connect(this, &OAIPokeathlonStatApiRequest::pokeathlonStatRead, handler.data(), &OAIPokeathlonStatApiHandler::pokeathlonStatRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    emit pokeathlonStatRead(id);
}



void OAIPokeathlonStatApiRequest::pokeathlonStatListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokeathlonStatApiRequest::pokeathlonStatReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokeathlonStatApiRequest::pokeathlonStatListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokeathlonStatApiRequest::pokeathlonStatReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokeathlonStatApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokeathlonStatApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}