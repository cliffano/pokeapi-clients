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
    public partial class MoveDamageClassApi
    { 
        [FunctionName("MoveDamageClassApi_MoveDamageClassList")]
        public async Task<IActionResult> _MoveDamageClassList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move-damage-class/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("MoveDamageClassList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("MoveDamageClassApi_MoveDamageClassRead")]
        public async Task<IActionResult> _MoveDamageClassRead([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move-damage-class/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("MoveDamageClassRead");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}

