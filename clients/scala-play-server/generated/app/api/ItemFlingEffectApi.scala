package api

import play.api.libs.json._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-24T08:45:05.479546Z[Etc/UTC]")
trait ItemFlingEffectApi {
  /**
    */
  def itemFlingEffectList(limit: Option[Int], offset: Option[Int]): String

  /**
    */
  def itemFlingEffectRead(id: Int): String
}
