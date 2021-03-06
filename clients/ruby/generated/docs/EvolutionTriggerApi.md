# PokeApiClient::EvolutionTriggerApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**evolution_trigger_list**](EvolutionTriggerApi.md#evolution_trigger_list) | **GET** /api/v2/evolution-trigger/ |  |
| [**evolution_trigger_read**](EvolutionTriggerApi.md#evolution_trigger_read) | **GET** /api/v2/evolution-trigger/{id}/ |  |


## evolution_trigger_list

> String evolution_trigger_list(opts)



### Examples

```ruby
require 'time'
require 'pokeapi_client'

api_instance = PokeApiClient::EvolutionTriggerApi.new
opts = {
  limit: 56, # Integer | 
  offset: 56 # Integer | 
}

begin
  
  result = api_instance.evolution_trigger_list(opts)
  p result
rescue PokeApiClient::ApiError => e
  puts "Error when calling EvolutionTriggerApi->evolution_trigger_list: #{e}"
end
```

#### Using the evolution_trigger_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> evolution_trigger_list_with_http_info(opts)

```ruby
begin
  
  data, status_code, headers = api_instance.evolution_trigger_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue PokeApiClient::ApiError => e
  puts "Error when calling EvolutionTriggerApi->evolution_trigger_list_with_http_info: #{e}"
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


## evolution_trigger_read

> String evolution_trigger_read(id)



### Examples

```ruby
require 'time'
require 'pokeapi_client'

api_instance = PokeApiClient::EvolutionTriggerApi.new
id = 56 # Integer | 

begin
  
  result = api_instance.evolution_trigger_read(id)
  p result
rescue PokeApiClient::ApiError => e
  puts "Error when calling EvolutionTriggerApi->evolution_trigger_read: #{e}"
end
```

#### Using the evolution_trigger_read_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> evolution_trigger_read_with_http_info(id)

```ruby
begin
  
  data, status_code, headers = api_instance.evolution_trigger_read_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue PokeApiClient::ApiError => e
  puts "Error when calling EvolutionTriggerApi->evolution_trigger_read_with_http_info: #{e}"
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

