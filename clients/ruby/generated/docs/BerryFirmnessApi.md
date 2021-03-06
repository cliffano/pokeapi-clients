# PokeApiClient::BerryFirmnessApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**berry_firmness_list**](BerryFirmnessApi.md#berry_firmness_list) | **GET** /api/v2/berry-firmness/ |  |
| [**berry_firmness_read**](BerryFirmnessApi.md#berry_firmness_read) | **GET** /api/v2/berry-firmness/{id}/ |  |


## berry_firmness_list

> String berry_firmness_list(opts)



### Examples

```ruby
require 'time'
require 'pokeapi_client'

api_instance = PokeApiClient::BerryFirmnessApi.new
opts = {
  limit: 56, # Integer | 
  offset: 56 # Integer | 
}

begin
  
  result = api_instance.berry_firmness_list(opts)
  p result
rescue PokeApiClient::ApiError => e
  puts "Error when calling BerryFirmnessApi->berry_firmness_list: #{e}"
end
```

#### Using the berry_firmness_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> berry_firmness_list_with_http_info(opts)

```ruby
begin
  
  data, status_code, headers = api_instance.berry_firmness_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue PokeApiClient::ApiError => e
  puts "Error when calling BerryFirmnessApi->berry_firmness_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **limit** | **Integer** |  | [optional] |
| **offset** | **Integer** |  | [optional] |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain


## berry_firmness_read

> String berry_firmness_read(id)



### Examples

```ruby
require 'time'
require 'pokeapi_client'

api_instance = PokeApiClient::BerryFirmnessApi.new
id = 56 # Integer | 

begin
  
  result = api_instance.berry_firmness_read(id)
  p result
rescue PokeApiClient::ApiError => e
  puts "Error when calling BerryFirmnessApi->berry_firmness_read: #{e}"
end
```

#### Using the berry_firmness_read_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> berry_firmness_read_with_http_info(id)

```ruby
begin
  
  data, status_code, headers = api_instance.berry_firmness_read_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue PokeApiClient::ApiError => e
  puts "Error when calling BerryFirmnessApi->berry_firmness_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain

