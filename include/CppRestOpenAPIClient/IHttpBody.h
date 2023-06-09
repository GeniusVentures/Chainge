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
 * IHttpBody.h
 *
 * This is the interface for contents that can be sent to a remote HTTP server.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_

#include <iostream>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class IHttpBody {
public:
  virtual ~IHttpBody() {}

  virtual void writeTo(std::ostream &stream) = 0;
};

} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_ */
