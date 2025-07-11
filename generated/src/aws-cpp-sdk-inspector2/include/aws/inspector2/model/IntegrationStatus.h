﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class IntegrationStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    ACTIVE,
    INACTIVE,
    DISABLING
  };

namespace IntegrationStatusMapper
{
AWS_INSPECTOR2_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
} // namespace IntegrationStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
