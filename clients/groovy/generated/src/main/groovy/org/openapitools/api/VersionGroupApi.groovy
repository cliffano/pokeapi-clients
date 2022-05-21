package org.openapitools.api;

import org.openapitools.api.ApiUtils

class VersionGroupApi {
    String basePath = "https://pokeapi.co/api/v2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def versionGroupList ( Integer limit, Integer offset, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/api/v2/version-group/"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType


        if (limit != null) {
            queryParams.put("limit", limit)
        }
        if (offset != null) {
            queryParams.put("offset", offset)
        }




        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    String.class )

    }

    def versionGroupRead ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/api/v2/version-group/${id}/"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    String.class )

    }

}