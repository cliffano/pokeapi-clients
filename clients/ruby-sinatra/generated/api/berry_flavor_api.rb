require 'json'


MyApp.add_route('GET', '/api/v2/berry-flavor/', {
  "resourcePath" => "/BerryFlavor",
  "summary" => "",
  "nickname" => "berry_flavor_list",
  "responseClass" => "String",
  "endpoint" => "/api/v2/berry-flavor/",
  "notes" => "",
  "parameters" => [
    {
      "name" => "limit",
      "description" => "",
      "dataType" => "Integer",
      "allowableValues" => "",
      "paramType" => "query",
    },
    {
      "name" => "offset",
      "description" => "",
      "dataType" => "Integer",
      "allowableValues" => "",
      "paramType" => "query",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/api/v2/berry-flavor/{id}/', {
  "resourcePath" => "/BerryFlavor",
  "summary" => "",
  "nickname" => "berry_flavor_read",
  "responseClass" => "String",
  "endpoint" => "/api/v2/berry-flavor/{id}/",
  "notes" => "",
  "parameters" => [
    {
      "name" => "id",
      "description" => "",
      "dataType" => "Integer",
      "paramType" => "path",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end

