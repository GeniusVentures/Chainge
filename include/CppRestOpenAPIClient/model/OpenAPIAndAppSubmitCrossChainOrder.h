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
 * OpenAPIAndAppSubmitCrossChainOrder.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmitCrossChainOrder_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmitCrossChainOrder_H_

#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class OpenAPIAndAppSubmitCrossChainOrder : public ModelBase {
public:
  OpenAPIAndAppSubmitCrossChainOrder();
  virtual ~OpenAPIAndAppSubmitCrossChainOrder();

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
  /// OpenAPIAndAppSubmitCrossChainOrder members

  /// <summary>
  /// Certificate Hash
  /// </summary>
  utility::string_t getCertHash() const;
  bool certHashIsSet() const;
  void unsetCertHash();

  void setCertHash(const utility::string_t &value);

  /// <summary>
  /// EVM Address
  /// </summary>
  utility::string_t getEvmAddress() const;
  bool evmAddressIsSet() const;
  void unsetEvmAddress();

  void setEvmAddress(const utility::string_t &value);

  /// <summary>
  /// Fee Level
  /// </summary>
  int32_t getFeeLevel() const;
  bool feeLevelIsSet() const;
  void unsetFeeLevel();

  void setFeeLevel(int32_t value);

  /// <summary>
  /// Source Address
  /// </summary>
  utility::string_t getFromAddress() const;
  bool fromAddressIsSet() const;
  void unsetFromAddress();

  void setFromAddress(const utility::string_t &value);

  /// <summary>
  /// Source Amount
  /// </summary>
  double getFromAmount() const;
  bool fromAmountIsSet() const;
  void unsetFromAmount();

  void setFromAmount(double value);

  /// <summary>
  /// Source Chain
  /// </summary>
  utility::string_t getFromChain() const;
  bool fromChainIsSet() const;
  void unsetFromChain();

  void setFromChain(const utility::string_t &value);

  /// <summary>
  /// Source Token
  /// </summary>
  utility::string_t getFromToken() const;
  bool fromTokenIsSet() const;
  void unsetFromToken();

  void setFromToken(const utility::string_t &value);

  /// <summary>
  /// Destination Chain
  /// </summary>
  utility::string_t getToChain() const;
  bool toChainIsSet() const;
  void unsetToChain();

  void setToChain(const utility::string_t &value);

protected:
  utility::string_t m_CertHash;
  bool m_CertHashIsSet;
  utility::string_t m_EvmAddress;
  bool m_EvmAddressIsSet;
  int32_t m_FeeLevel;
  bool m_FeeLevelIsSet;
  utility::string_t m_FromAddress;
  bool m_FromAddressIsSet;
  double m_FromAmount;
  bool m_FromAmountIsSet;
  utility::string_t m_FromChain;
  bool m_FromChainIsSet;
  utility::string_t m_FromToken;
  bool m_FromTokenIsSet;
  utility::string_t m_ToChain;
  bool m_ToChainIsSet;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OpenAPIAndAppSubmitCrossChainOrder_H_  \
        */