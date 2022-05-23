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
    public partial class PokemonFormApi
    { 
        [FunctionName("PokemonFormApi_PokemonFormList")]
        public async Task<IActionResult> _PokemonFormList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/pokemon-form/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("PokemonFormList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("PokemonFormApi_PokemonFormRead")]
        public async Task<IActionResult> _PokemonFormRead([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/pokemon-form/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("PokemonFormRead");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}
