package api

import play.api.libs.json._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-16T10:34:47.121763Z[Etc/UTC]")
trait MoveLearnMethodApi {
  /**
    */
  def moveLearnMethodList(limit: Option[Int], offset: Option[Int]): String

  /**
    */
  def moveLearnMethodRead(id: Int): String
}