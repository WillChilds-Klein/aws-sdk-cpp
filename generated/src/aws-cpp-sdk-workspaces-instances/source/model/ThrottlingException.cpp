﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

ThrottlingException::ThrottlingException(JsonView jsonValue)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuotaCode"))
  {
    m_quotaCode = jsonValue.GetString("QuotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryAfterSeconds"))
  {
    m_retryAfterSeconds = jsonValue.GetInteger("RetryAfterSeconds");
    m_retryAfterSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_retryAfterSecondsHasBeenSet)
  {
   payload.WithInteger("RetryAfterSeconds", m_retryAfterSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
