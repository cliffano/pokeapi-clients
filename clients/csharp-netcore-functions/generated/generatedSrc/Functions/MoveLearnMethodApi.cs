/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
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
    public partial class MoveLearnMethodApi
    { 
        [FunctionName("MoveLearnMethodApi_MoveLearnMethodList")]
        public async Task<IActionResult> _MoveLearnMethodList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move-learn-method/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("MoveLearnMethodList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("MoveLearnMethodApi_MoveLearnMethodRead")]
        public async Task<IActionResult> _MoveLearnMethodRead([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move-learn-method/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("MoveLearnMethodRead");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}

