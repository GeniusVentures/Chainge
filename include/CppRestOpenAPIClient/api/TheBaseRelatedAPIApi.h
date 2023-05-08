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
 * TheBaseRelatedAPIApi.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_TheBaseRelatedAPIApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_TheBaseRelatedAPIApi_H_

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/BaseResponseMapobjectobject.h"
#include "CppRestOpenAPIClient/model/BaseResponseMapstringobject.h"
#include <boost/optional.hpp>
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

class TheBaseRelatedAPIApi {
public:
  explicit TheBaseRelatedAPIApi(std::shared_ptr<const ApiClient> apiClient);

  virtual ~TheBaseRelatedAPIApi();

  /// <summary>
  /// Get all chains
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getAllChainsUsingGET(boost::optional<utility::string_t> appKey,
                       boost::optional<utility::string_t> expireTime,
                       boost::optional<utility::string_t> signature,
                       boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get All External Chain Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getAllExternalChainInfoUsingGET(
      boost::optional<utility::string_t> appKey,
      boost::optional<utility::string_t> expireTime,
      boost::optional<utility::string_t> signature,
      boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get fee level info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getFeeLevelInfoUsingGET(boost::optional<utility::string_t> appKey,
                          boost::optional<utility::string_t> expireTime,
                          boost::optional<utility::string_t> signature,
                          boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get server time
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getServerTimeUsingGET(boost::optional<utility::string_t> appKey,
                        boost::optional<utility::string_t> expireTime,
                        boost::optional<utility::string_t> signature,
                        boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get support chain and tokens
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="chain">chain (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getSupportChainAndTokenUsingGET(
      boost::optional<utility::string_t> appKey,
      boost::optional<utility::string_t> chain,
      boost::optional<utility::string_t> expireTime,
      boost::optional<utility::string_t> signature,
      boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get support chains
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getSupportChainUsingGET(boost::optional<utility::string_t> appKey,
                          boost::optional<utility::string_t> expireTime,
                          boost::optional<utility::string_t> signature,
                          boost::optional<utility::string_t> timestamp) const;
  /// <summary>
  /// Get token price
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="token">token (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapstringobject>>
  getTokenPriceUsingGET(boost::optional<utility::string_t> appKey,
                        boost::optional<utility::string_t> expireTime,
                        boost::optional<utility::string_t> signature,
                        boost::optional<utility::string_t> timestamp,
                        boost::optional<utility::string_t> token) const;
  /// <summary>
  /// Get Token Sort ByKey
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appKey">appKey (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="expireTime">expireTime (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="key">key (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="signature">signature (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param> <param
  /// name="timestamp">timestamp (optional, default to
  /// utility::conversions::to_string_t(&quot;&quot;))</param>
  pplx::task<std::shared_ptr<BaseResponseMapobjectobject>>
  getTokenSortByKeyUsingGET(boost::optional<utility::string_t> appKey,
                            boost::optional<utility::string_t> expireTime,
                            boost::optional<utility::string_t> key,
                            boost::optional<utility::string_t> signature,
                            boost::optional<utility::string_t> timestamp) const;

protected:
  std::shared_ptr<const ApiClient> m_ApiClient;
};

} // namespace api
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_API_TheBaseRelatedAPIApi_H_ */
