/**
 * Open API
 * Open API
 *
 * The version of the OpenAPI document: 1.0
 * Contact: liuxiaobin@chainge.finance
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BaseResponseMapstringobject.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BaseResponseMapstringobject_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BaseResponseMapstringobject_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/Object.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class BaseResponseMapstringobject : public ModelBase {
public:
  BaseResponseMapstringobject();
  virtual ~BaseResponseMapstringobject();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  bool fromJson(const web::json::value &json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t &namePrefix) const override;
  bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t &namePrefix) override;

  /////////////////////////////////////////////
  /// BaseResponseMapstringobject members

  /// <summary>
  ///
  /// </summary>
  int32_t getCode() const;
  bool codeIsSet() const;
  void unsetCode();

  void setCode(int32_t value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<Object> getData() const;
  bool dataIsSet() const;
  void unsetData();

  void setData(const std::shared_ptr<Object> &value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getMsg() const;
  bool msgIsSet() const;
  void unsetMsg();

  void setMsg(const utility::string_t &value);

  /// <summary>
  ///
  /// </summary>
  int32_t getStatus() const;
  bool statusIsSet() const;
  void unsetStatus();

  void setStatus(int32_t value);

protected:
  int32_t m_Code;
  bool m_CodeIsSet;
  std::shared_ptr<Object> m_Data;
  bool m_DataIsSet;
  utility::string_t m_Msg;
  bool m_MsgIsSet;
  int32_t m_Status;
  bool m_StatusIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BaseResponseMapstringobject_H_ */
