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

#include "CppRestOpenAPIClient/model/BaseResponseMapobjectobject.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

BaseResponseMapobjectobject::BaseResponseMapobjectobject() {
  m_Code = 0;
  m_CodeIsSet = false;
  m_DataIsSet = false;
  m_Msg = utility::conversions::to_string_t("");
  m_MsgIsSet = false;
  m_Status = 0;
  m_StatusIsSet = false;
}

BaseResponseMapobjectobject::~BaseResponseMapobjectobject() {}

void BaseResponseMapobjectobject::validate() {
  // TODO: implement validation
}

web::json::value BaseResponseMapobjectobject::toJson() const {

  web::json::value val = web::json::value::object();

  if (m_CodeIsSet) {
    val[utility::conversions::to_string_t(U("code"))] =
        ModelBase::toJson(m_Code);
  }
  if (m_DataIsSet) {
    val[utility::conversions::to_string_t(U("data"))] =
        ModelBase::toJson(m_Data);
  }
  if (m_MsgIsSet) {
    val[utility::conversions::to_string_t(U("msg"))] = ModelBase::toJson(m_Msg);
  }
  if (m_StatusIsSet) {
    val[utility::conversions::to_string_t(U("status"))] =
        ModelBase::toJson(m_Status);
  }

  return val;
}

bool BaseResponseMapobjectobject::fromJson(const web::json::value &val) {
  bool ok = true;

  if (val.has_field(utility::conversions::to_string_t(U("code")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("code")));
    if (!fieldValue.is_null()) {
      int32_t refVal_setCode;
      ok &= ModelBase::fromJson(fieldValue, refVal_setCode);
      setCode(refVal_setCode);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("data")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("data")));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Object> refVal_setData;
      ok &= ModelBase::fromJson(fieldValue, refVal_setData);
      setData(refVal_setData);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("msg")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("msg")));
    if (!fieldValue.is_null()) {
      utility::string_t refVal_setMsg;
      ok &= ModelBase::fromJson(fieldValue, refVal_setMsg);
      setMsg(refVal_setMsg);
    }
  }
  if (val.has_field(utility::conversions::to_string_t(U("status")))) {
    const web::json::value &fieldValue =
        val.at(utility::conversions::to_string_t(U("status")));
    if (!fieldValue.is_null()) {
      int32_t refVal_setStatus;
      ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
      setStatus(refVal_setStatus);
    }
  }
  return ok;
}

void BaseResponseMapobjectobject::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }
  if (m_CodeIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("code")), m_Code));
  }
  if (m_DataIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("data")), m_Data));
  }
  if (m_MsgIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("msg")), m_Msg));
  }
  if (m_StatusIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
  }
}

bool BaseResponseMapobjectobject::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t &prefix) {
  bool ok = true;
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(U("."))) {
    namePrefix += utility::conversions::to_string_t(U("."));
  }

  if (multipart->hasContent(utility::conversions::to_string_t(U("code")))) {
    int32_t refVal_setCode;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("code"))),
        refVal_setCode);
    setCode(refVal_setCode);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("data")))) {
    std::shared_ptr<Object> refVal_setData;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("data"))),
        refVal_setData);
    setData(refVal_setData);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("msg")))) {
    utility::string_t refVal_setMsg;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("msg"))),
        refVal_setMsg);
    setMsg(refVal_setMsg);
  }
  if (multipart->hasContent(utility::conversions::to_string_t(U("status")))) {
    int32_t refVal_setStatus;
    ok &= ModelBase::fromHttpContent(
        multipart->getContent(utility::conversions::to_string_t(U("status"))),
        refVal_setStatus);
    setStatus(refVal_setStatus);
  }
  return ok;
}

int32_t BaseResponseMapobjectobject::getCode() const { return m_Code; }

void BaseResponseMapobjectobject::setCode(int32_t value) {
  m_Code = value;
  m_CodeIsSet = true;
}

bool BaseResponseMapobjectobject::codeIsSet() const { return m_CodeIsSet; }

void BaseResponseMapobjectobject::unsetCode() { m_CodeIsSet = false; }
std::shared_ptr<Object> BaseResponseMapobjectobject::getData() const {
  return m_Data;
}

void BaseResponseMapobjectobject::setData(
    const std::shared_ptr<Object> &value) {
  m_Data = value;
  m_DataIsSet = true;
}

bool BaseResponseMapobjectobject::dataIsSet() const { return m_DataIsSet; }

void BaseResponseMapobjectobject::unsetData() { m_DataIsSet = false; }
utility::string_t BaseResponseMapobjectobject::getMsg() const { return m_Msg; }

void BaseResponseMapobjectobject::setMsg(const utility::string_t &value) {
  m_Msg = value;
  m_MsgIsSet = true;
}

bool BaseResponseMapobjectobject::msgIsSet() const { return m_MsgIsSet; }

void BaseResponseMapobjectobject::unsetMsg() { m_MsgIsSet = false; }
int32_t BaseResponseMapobjectobject::getStatus() const { return m_Status; }

void BaseResponseMapobjectobject::setStatus(int32_t value) {
  m_Status = value;
  m_StatusIsSet = true;
}

bool BaseResponseMapobjectobject::statusIsSet() const { return m_StatusIsSet; }

void BaseResponseMapobjectobject::unsetStatus() { m_StatusIsSet = false; }
} // namespace model
} // namespace client
} // namespace openapitools
} // namespace org
