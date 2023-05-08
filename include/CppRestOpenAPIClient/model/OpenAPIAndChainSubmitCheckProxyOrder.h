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
 * OpenAPIAndChainSubmitCheckProxyOrder.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndChainSubmitCheckProxyOrder_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndChainSubmitCheckProxyOrder_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class OpenAPIAndChainSubmitCheckProxyOrder : public ModelBase {
public:
  OpenAPIAndChainSubmitCheckProxyOrder();
  virtual ~OpenAPIAndChainSubmitCheckProxyOrder();

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
  /// OpenAPIAndChainSubmitCheckProxyOrder members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getCertHash() const;
  bool certHashIsSet() const;
  void unsetCertHash();

  void setCertHash(const utility::string_t &value);

protected:
  utility::string_t m_CertHash;
  bool m_CertHashIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndChainSubmitCheckProxyOrder_H_ \
        */
