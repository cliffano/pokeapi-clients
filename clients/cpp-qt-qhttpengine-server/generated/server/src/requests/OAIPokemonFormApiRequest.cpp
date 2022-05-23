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
#include "OAIPokemonFormApiRequest.h"

namespace OpenAPI {

OAIPokemonFormApiRequest::OAIPokemonFormApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIPokemonFormApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIPokemonFormApiRequest::~OAIPokemonFormApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIPokemonFormApiRequest::~OAIPokemonFormApiRequest()";
}

QMap<QString, QString>
OAIPokemonFormApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIPokemonFormApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIPokemonFormApiRequest::getRawSocket(){
    return socket;
}


void OAIPokemonFormApiRequest::pokemonFormListRequest(){
    qDebug() << "/api/v2/pokemon-form/";
    connect(this, &OAIPokemonFormApiRequest::pokemonFormList, handler.data(), &OAIPokemonFormApiHandler::pokemonFormList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    emit pokemonFormList(limit, offset);
}


void OAIPokemonFormApiRequest::pokemonFormReadRequest(const QString& idstr){
    qDebug() << "/api/v2/pokemon-form/{id}/";
    connect(this, &OAIPokemonFormApiRequest::pokemonFormRead, handler.data(), &OAIPokemonFormApiHandler::pokemonFormRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    emit pokemonFormRead(id);
}



void OAIPokemonFormApiRequest::pokemonFormListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonFormApiRequest::pokemonFormReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokemonFormApiRequest::pokemonFormListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonFormApiRequest::pokemonFormReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokemonFormApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonFormApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}