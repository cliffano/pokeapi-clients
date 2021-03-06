// tslint:disable
/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { Observable } from 'rxjs';
import { BaseAPI, HttpQuery, throwIfNullOrUndefined, encodeURI, OperationOpts, RawAjaxResponse } from '../runtime';

export interface GenderListRequest {
    limit?: number;
    offset?: number;
}

export interface GenderReadRequest {
    id: number;
}

/**
 * no description
 */
export class GenderApi extends BaseAPI {

    /**
     */
    genderList({ limit, offset }: GenderListRequest): Observable<string>
    genderList({ limit, offset }: GenderListRequest, opts?: OperationOpts): Observable<RawAjaxResponse<string>>
    genderList({ limit, offset }: GenderListRequest, opts?: OperationOpts): Observable<string | RawAjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/gender/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    genderRead({ id }: GenderReadRequest): Observable<string>
    genderRead({ id }: GenderReadRequest, opts?: OperationOpts): Observable<RawAjaxResponse<string>>
    genderRead({ id }: GenderReadRequest, opts?: OperationOpts): Observable<string | RawAjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'genderRead');

        return this.request<string>({
            url: '/api/v2/gender/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
