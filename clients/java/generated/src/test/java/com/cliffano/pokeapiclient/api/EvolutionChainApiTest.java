/*
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pokeapiclient.api;

import com.cliffano.pokeapiclient.ApiException;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for EvolutionChainApi
 */
@Ignore
public class EvolutionChainApiTest {

    private final EvolutionChainApi api = new EvolutionChainApi();

    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void evolutionChainListTest() throws ApiException {
        Integer limit = null;
        Integer offset = null;
                String response = api.evolutionChainList(limit, offset);
        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void evolutionChainReadTest() throws ApiException {
        Integer id = null;
                String response = api.evolutionChainRead(id);
        // TODO: test validations
    }
    
}