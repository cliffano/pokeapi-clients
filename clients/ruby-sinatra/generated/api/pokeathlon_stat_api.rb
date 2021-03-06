require 'json'


MyApp.add_route('GET', '/api/v2/pokeathlon-stat/', {
  "resourcePath" => "/PokeathlonStat",
  "summary" => "",
  "nickname" => "pokeathlon_stat_list",
  "responseClass" => "String",
  "endpoint" => "/api/v2/pokeathlon-stat/",
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


MyApp.add_route('GET', '/api/v2/pokeathlon-stat/{id}/', {
  "resourcePath" => "/PokeathlonStat",
  "summary" => "",
  "nickname" => "pokeathlon_stat_read",
  "responseClass" => "String",
  "endpoint" => "/api/v2/pokeathlon-stat/{id}/",
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

