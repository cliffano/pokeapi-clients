# EncounterConditionApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**encounterConditionList**](EncounterConditionApi.md#encounterConditionList) | **GET** /api/v2/encounter-condition/ | 
[**encounterConditionRead**](EncounterConditionApi.md#encounterConditionRead) | **GET** /api/v2/encounter-condition/{id}/ | 



## encounterConditionList



### Example

```bash
 encounterConditionList  limit=value  offset=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **integer** |  | [optional] [default to null]
 **offset** | **integer** |  | [optional] [default to null]

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## encounterConditionRead



### Example

```bash
 encounterConditionRead id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** |  | [default to null]

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

