/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// ContestEffectApiController binds http requests to an api service and writes the service results to the http response
type ContestEffectApiController struct {
	service ContestEffectApiServicer
	errorHandler ErrorHandler
}

// ContestEffectApiOption for how the controller is set up.
type ContestEffectApiOption func(*ContestEffectApiController)

// WithContestEffectApiErrorHandler inject ErrorHandler into controller
func WithContestEffectApiErrorHandler(h ErrorHandler) ContestEffectApiOption {
	return func(c *ContestEffectApiController) {
		c.errorHandler = h
	}
}

// NewContestEffectApiController creates a default api controller
func NewContestEffectApiController(s ContestEffectApiServicer, opts ...ContestEffectApiOption) Router {
	controller := &ContestEffectApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the ContestEffectApiController
func (c *ContestEffectApiController) Routes() Routes {
	return Routes{ 
		{
			"ContestEffectList",
			strings.ToUpper("Get"),
			"/api/v2/contest-effect/",
			c.ContestEffectList,
		},
		{
			"ContestEffectRead",
			strings.ToUpper("Get"),
			"/api/v2/contest-effect/{id}/",
			c.ContestEffectRead,
		},
	}
}

// ContestEffectList - 
func (c *ContestEffectApiController) ContestEffectList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	limitParam, err := parseInt32Parameter(query.Get("limit"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	offsetParam, err := parseInt32Parameter(query.Get("offset"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.ContestEffectList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ContestEffectRead - 
func (c *ContestEffectApiController) ContestEffectRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.ContestEffectRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}