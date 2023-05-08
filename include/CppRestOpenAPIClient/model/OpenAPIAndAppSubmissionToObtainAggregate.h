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
 * OpenAPIAndAppSubmissionToObtainAggregate.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmissionToObtainAggregate_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmissionToObtainAggregate_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class OpenAPIAndAppSubmissionToObtainAggregate : public ModelBase {
public:
  OpenAPIAndAppSubmissionToObtainAggregate();
  virtual ~OpenAPIAndAppSubmissionToObtainAggregate();

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
  /// OpenAPIAndAppSubmissionToObtainAggregate members

  /// <summary>
  ///
  /// </summary>
  double getAmount() const;
  bool amountIsSet() const;
  void unsetAmount();

  void setAmount(double value);

  /// <summary>
  /// Chain
  /// </summary>
  utility::string_t getChain() const;
  bool chainIsSet() const;
  void unsetChain();

  void setChain(const utility::string_t &value);

  /// <summary>
  /// EVM Address
  /// </summary>
  utility::string_t getEvmAddress() const;
  bool evmAddressIsSet() const;
  void unsetEvmAddress();

  void setEvmAddress(const utility::string_t &value);

  /// <summary>
  /// Source Address
  /// </summary>
  utility::string_t getFromAddress() const;
  bool fromAddressIsSet() const;
  void unsetFromAddress();

  void setFromAddress(const utility::string_t &value);

  /// <summary>
  /// Token
  /// </summary>
  utility::string_t getToken() const;
  bool tokenIsSet() const;
  void unsetToken();

  void setToken(const utility::string_t &value);

protected:
  double m_Amount;
  bool m_AmountIsSet;
  utility::string_t m_Chain;
  bool m_ChainIsSet;
  utility::string_t m_EvmAddress;
  bool m_EvmAddressIsSet;
  utility::string_t m_FromAddress;
  bool m_FromAddressIsSet;
  utility::string_t m_Token;
  bool m_TokenIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmissionToObtainAggregate_H_ \
        */
