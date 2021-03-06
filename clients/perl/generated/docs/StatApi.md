# WWW::OpenAPIClient::StatApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::StatApi;
```

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**stat_list**](StatApi.md#stat_list) | **GET** /api/v2/stat/ | 
[**stat_read**](StatApi.md#stat_read) | **GET** /api/v2/stat/{id}/ | 


# **stat_list**
> string stat_list(limit => $limit, offset => $offset)



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::StatApi;
my $api_instance = WWW::OpenAPIClient::StatApi->new(
);

my $limit = 56; # int | 
my $offset = 56; # int | 

eval {
    my $result = $api_instance->stat_list(limit => $limit, offset => $offset);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling StatApi->stat_list: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**|  | [optional] 
 **offset** | **int**|  | [optional] 

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **stat_read**
> string stat_read(id => $id)



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::StatApi;
my $api_instance = WWW::OpenAPIClient::StatApi->new(
);

my $id = 56; # int | 

eval {
    my $result = $api_instance->stat_read(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling StatApi->stat_read: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**|  | 

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

