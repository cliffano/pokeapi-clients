/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Net;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Azure.WebJobs;
using Microsoft.Azure.WebJobs.Extensions.Http;

namespace Org.OpenAPITools.Apis
{ 
    public partial class EncounterMethodApi
    { 
        [FunctionName("EncounterMethodApi_EncounterMethodList")]
        public async Task<IActionResult> _EncounterMethodList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/encounter-method/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("EncounterMethodList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("EncounterMethodApi_EncounterMethodRead")]
        public async Task<IActionResult> _EncounterMethodRead([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/encounter-method/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("EncounterMethodRead");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}
