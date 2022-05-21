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

package org.openapitools.controller;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.Nullable;
import io.micronaut.core.convert.format.Format;
import io.micronaut.security.annotation.Secured;
import io.micronaut.security.rules.SecurityRule;
import reactor.core.publisher.Mono;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.annotations.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-16T10:28:11.042090Z[Etc/UTC]")
@Controller("${context-path}")
public class PokemonHabitatController {
    /**
     * pokemonHabitatList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @ApiOperation(
        value = "",
        nickname = "pokemonHabitatList",
        response = String.class,
        authorizations = {},
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 0, message = "Default response", response = String.class)})
    @Get(uri="/api/v2/pokemon-habitat/")
    @Produces(value = {"text/plain"})
    @Secured(SecurityRule.IS_ANONYMOUS)
    public Mono<String> pokemonHabitatList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
    ) {
        // TODO implement pokemonHabitatList() body;
        Mono<String> result = Mono.empty();
        return result;
    }

    /**
     * pokemonHabitatRead
     *
     * @param id  (required)
     * @return String
     */
    @ApiOperation(
        value = "",
        nickname = "pokemonHabitatRead",
        response = String.class,
        authorizations = {},
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 0, message = "Default response", response = String.class)})
    @Get(uri="/api/v2/pokemon-habitat/{id}/")
    @Produces(value = {"text/plain"})
    @Secured(SecurityRule.IS_ANONYMOUS)
    public Mono<String> pokemonHabitatRead(
        @PathVariable(value="id") @NotNull Integer id
    ) {
        // TODO implement pokemonHabitatRead() body;
        Mono<String> result = Mono.empty();
        return result;
    }
}