# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 20220523
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title MoveAilment operations
#' @description openapi.MoveAilment
#' @format An \code{R6Class} generator object
#' @field apiClient Handles the client-server communication.
#'
#' @section Methods:
#' \describe{
#' \strong{ MoveAilmentList } \emph{  }
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
#' \strong{ MoveAilmentRead } \emph{  }
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
#' ####################  MoveAilmentList  ####################
#'
#' library(openapi)
#' var.limit <- 56 # integer | 
#' var.offset <- 56 # integer | 
#'
#' api.instance <- MoveAilmentApi$new()
#'
#' result <- api.instance$MoveAilmentList(limit=var.limit, offset=var.offset)
#'
#'
#' ####################  MoveAilmentRead  ####################
#'
#' library(openapi)
#' var.id <- 56 # integer | 
#'
#' api.instance <- MoveAilmentApi$new()
#'
#' result <- api.instance$MoveAilmentRead(var.id)
#'
#'
#' }
#' @importFrom R6 R6Class
#' @importFrom base64enc base64encode
#' @export
MoveAilmentApi <- R6::R6Class(
  'MoveAilmentApi',
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
    MoveAilmentList = function(limit=NULL, offset=NULL, ...){
      apiResponse <- self$MoveAilmentListWithHttpInfo(limit, offset, ...)
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

    MoveAilmentListWithHttpInfo = function(limit=NULL, offset=NULL, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      queryParams['limit'] <- limit

      queryParams['offset'] <- offset

      body <- NULL
      urlPath <- "/api/v2/move-ailment/"

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
    MoveAilmentRead = function(id, ...){
      apiResponse <- self$MoveAilmentReadWithHttpInfo(id, ...)
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

    MoveAilmentReadWithHttpInfo = function(id, ...){
      args <- list(...)
      queryParams <- list()
      headerParams <- c()

      if (missing(`id`)) {
        stop("Missing required parameter `id`.")
      }

      body <- NULL
      urlPath <- "/api/v2/move-ailment/{id}/"
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
