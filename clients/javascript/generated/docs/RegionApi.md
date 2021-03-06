# PokeapiClient.RegionApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**regionList**](RegionApi.md#regionList) | **GET** /api/v2/region/ | 
[**regionRead**](RegionApi.md#regionRead) | **GET** /api/v2/region/{id}/ | 



## regionList

> String regionList(opts)



### Example

```javascript
import PokeapiClient from 'pokeapi-client';

let apiInstance = new PokeapiClient.RegionApi();
let opts = {
  'limit': 56, // Number | 
  'offset': 56 // Number | 
};
apiInstance.regionList(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **Number**|  | [optional] 
 **offset** | **Number**|  | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain


## regionRead

> String regionRead(id)



### Example

```javascript
import PokeapiClient from 'pokeapi-client';

let apiInstance = new PokeapiClient.RegionApi();
let id = 56; // Number | 
apiInstance.regionRead(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**|  | 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain

