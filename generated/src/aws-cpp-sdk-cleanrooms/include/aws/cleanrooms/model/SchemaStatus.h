﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class SchemaStatus
  {
    NOT_SET,
    READY,
    NOT_READY
  };

namespace SchemaStatusMapper
{
AWS_CLEANROOMS_API SchemaStatus GetSchemaStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSchemaStatus(SchemaStatus value);
} // namespace SchemaStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
