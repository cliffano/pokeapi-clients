/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using Xunit;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;

namespace Org.OpenAPITools.Test.Api
{
    /// <summary>
    ///  Class for testing PokemonFormApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class PokemonFormApiTests : IDisposable
    {
        private PokemonFormApi instance;

        public PokemonFormApiTests()
        {
            instance = new PokemonFormApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of PokemonFormApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' PokemonFormApi
            //Assert.IsType<PokemonFormApi>(instance);
        }

        /// <summary>
        /// Test PokemonFormList
        /// </summary>
        [Fact]
        public void PokemonFormListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? limit = null;
            //int? offset = null;
            //var response = instance.PokemonFormList(limit, offset);
            //Assert.IsType<string>(response);
        }

        /// <summary>
        /// Test PokemonFormRead
        /// </summary>
        [Fact]
        public void PokemonFormReadTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int id = null;
            //var response = instance.PokemonFormRead(id);
            //Assert.IsType<string>(response);
        }
    }
}