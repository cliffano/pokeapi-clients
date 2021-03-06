# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 20220523
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title EvolutionChain operations
#' @description openapi.EvolutionChain
#' @format An \code{R6Class} generator object
#' @field apiClient Handles the client-server communication.
#'
#' @section Methods:
#' \describe{
#' \strong{ EvolutionChainList } \emph{  }
#' 
#'
#' \itemize{
#' \item \emph{ @param } limit integer
#' \item \emph{ @param } offset integer
#'
#'
#' \item status code : 0 | Default response
#'
#' \item return type : character 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' }
#'
#' \strong{ EvolutionChainRead } \emph{  }
#' 
#'
#' \itemize{
#' \item \emph{ @param } id integer
#'
#'
#' \item status code : 0 | Default response
#'
#' \item return type : character 
#' \item response headers :
#'
#' \tabular{ll}{
#' }
#' }
#'
#' }
#'
#'
#' @examples
#' \dontrun{
#' ####################  EvolutionChainList  ####################
#'
#' library(openapi)
#' var.limit <- 56 # integer | 
#' var.offset <- 56 # integer | 
#'
#' api.instance <- EvolutionChainApi$new()
#'
#' result <- api.instance$EvolutionChainList(limit=var.limit, offset=var.offset)
#'
#'
#' ####################  EvolutionChainRead  ####################
#'
#' library(openapi)
#' var.id <- 56 # integer | 
#'
#' api.instance <- EvolutionChainApi$new()
#'
#' result <- api.instance$EvolutionChainRead(var.id)
#'
#'
#' }
#' @importFrom R6 R6Class
#' @importFrom base64enc base64encode
#' @export
EvolutionChainApi <- R6::R6Class(
  'EvolutionChainApi',
  public = list(
    apiClient = NULL,
    initialize = function(apiClient){
      if (!missing(apiClient)) {
        self$apiClient <- apiClient
      }
      else {
        self$apiClient <- ApiClient$new()
      }
    },
    EvolutionChainList = function(limit=NULL, offset=NULL, ...){
      apiResponse <- self$EvolutionChainListWithHttpInfo(limit, offset, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    EvolutionChainListWithHttpInfo = function(limit=NULL, offset=NULL, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      queryParams['limit'] <- limit

      queryParams['offset'] <- offset

      body <- NULL
      urlPath <- "/api/v2/evolution-chain/"

      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        deserializedRespObj <- tryCatch(
          self$apiClient$deserialize(resp, "character", loadNamespace("openapi")),
          error = function(e){
             stop("Failed to deserialize response")
          }
        )
        ApiResponse$new(deserializedRespObj, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    },
    EvolutionChainRead = function(id, ...){
      apiResponse <- self$EvolutionChainReadWithHttpInfo(id, ...)
      resp <- apiResponse$response
      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        apiResponse$content
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        apiResponse
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        apiResponse
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        apiResponse
      }
    },

    EvolutionChainReadWithHttpInfo = function(id, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`id`)) {
        stop("Missing required parameter `id`.")
      }

      body <- NULL
      urlPath <- "/api/v2/evolution-chain/{id}/"
      if (!missing(`id`)) {
        urlPath <- gsub(paste0("\\{", "id", "\\}"), URLencode(as.character(`id`), reserved = TRUE), urlPath)
      }


      resp <- self$apiClient$CallApi(url = paste0(self$apiClient$basePath, urlPath),
                                 method = "GET",
                                 queryParams = queryParams,
                                 headerParams = headerParams,
                                 body = body,
                                 ...)

      if (httr::status_code(resp) >= 200 && httr::status_code(resp) <= 299) {
        deserializedRespObj <- tryCatch(
          self$apiClient$deserialize(resp, "character", loadNamespace("openapi")),
          error = function(e){
             stop("Failed to deserialize response")
          }
        )
        ApiResponse$new(deserializedRespObj, resp)
      } else if (httr::status_code(resp) >= 300 && httr::status_code(resp) <= 399) {
        ApiResponse$new(paste("Server returned " , httr::status_code(resp) , " response status code."), resp)
      } else if (httr::status_code(resp) >= 400 && httr::status_code(resp) <= 499) {
        ApiResponse$new("API client error", resp)
      } else if (httr::status_code(resp) >= 500 && httr::status_code(resp) <= 599) {
        ApiResponse$new("API server error", resp)
      }
    }
  )
)
