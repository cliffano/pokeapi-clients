# PokeapiClient.EggGroupApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**eggGroupList**](EggGroupApi.md#eggGroupList) | **GET** /api/v2/egg-group/ | 
[**eggGroupRead**](EggGroupApi.md#eggGroupRead) | **GET** /api/v2/egg-group/{id}/ | 



## eggGroupList

> String eggGroupList(opts)



### Example

```javascript
import PokeapiClient from 'pokeapi-client';

let apiInstance = new PokeapiClient.EggGroupApi();
let opts = {
  'limit': 56, // Number | 
  'offset': 56 // Number | 
};
apiInstance.eggGroupList(opts, (error, data, response) => {
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


## eggGroupRead

> String eggGroupRead(id)



### Example

```javascript
import PokeapiClient from 'pokeapi-client';

let apiInstance = new PokeapiClient.EggGroupApi();
let id = 56; // Number | 
apiInstance.eggGroupRead(id, (error, data, response) => {
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

