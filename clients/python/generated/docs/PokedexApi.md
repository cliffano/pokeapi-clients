# pokeapiclient.PokedexApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**pokedex_list**](PokedexApi.md#pokedex_list) | **GET** /api/v2/pokedex/ | 
[**pokedex_read**](PokedexApi.md#pokedex_read) | **GET** /api/v2/pokedex/{id}/ | 


# **pokedex_list**
> str pokedex_list()



### Example


```python
import time
import pokeapiclient
from pokeapiclient.api import pokedex_api
from pprint import pprint
# Defining the host is optional and defaults to https://pokeapi.co
# See configuration.py for a list of all supported configuration parameters.
configuration = pokeapiclient.Configuration(
    host = "https://pokeapi.co"
)


# Enter a context with an instance of the API client
with pokeapiclient.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = pokedex_api.PokedexApi(api_client)
    limit = 1 # int |  (optional)
    offset = 1 # int |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.pokedex_list(limit=limit, offset=offset)
        pprint(api_response)
    except pokeapiclient.ApiException as e:
        print("Exception when calling PokedexApi->pokedex_list: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**|  | [optional]
 **offset** | **int**|  | [optional]

### Return type

**str**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pokedex_read**
> str pokedex_read(id)



### Example


```python
import time
import pokeapiclient
from pokeapiclient.api import pokedex_api
from pprint import pprint
# Defining the host is optional and defaults to https://pokeapi.co
# See configuration.py for a list of all supported configuration parameters.
configuration = pokeapiclient.Configuration(
    host = "https://pokeapi.co"
)


# Enter a context with an instance of the API client
with pokeapiclient.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = pokedex_api.PokedexApi(api_client)
    id = 1 # int | 

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.pokedex_read(id)
        pprint(api_response)
    except pokeapiclient.ApiException as e:
        print("Exception when calling PokedexApi->pokedex_read: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**|  |

### Return type

**str**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

