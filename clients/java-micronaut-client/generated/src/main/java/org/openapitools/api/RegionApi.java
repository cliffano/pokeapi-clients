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

package org.openapitools.api;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.*;
import io.micronaut.http.client.annotation.Client;
import io.micronaut.core.convert.format.Format;
import reactor.core.publisher.Mono;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.validation.Valid;
import javax.validation.constraints.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-21T03:59:22.494959Z[Etc/UTC]")
@Client("${base-path}")
public interface RegionApi {
    /**
     * regionList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @Get(uri="/api/v2/region/")
    @Consumes(value={"text/plain"})
    Mono<String> regionList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
  );
    /**
     * regionRead
     *
     * @param id  (required)
     * @return String
     */
    @Get(uri="/api/v2/region/{id}/")
    @Consumes(value={"text/plain"})
    Mono<String> regionRead(
        @PathVariable(name="id") @NotNull Integer id
  );
}