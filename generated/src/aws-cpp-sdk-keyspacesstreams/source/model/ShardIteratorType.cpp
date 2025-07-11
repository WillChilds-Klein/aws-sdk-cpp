﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/ShardIteratorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KeyspacesStreams
  {
    namespace Model
    {
      namespace ShardIteratorTypeMapper
      {

        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");
        static const int AT_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AT_SEQUENCE_NUMBER");
        static const int AFTER_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AFTER_SEQUENCE_NUMBER");


        ShardIteratorType GetShardIteratorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return ShardIteratorType::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return ShardIteratorType::LATEST;
          }
          else if (hashCode == AT_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AT_SEQUENCE_NUMBER;
          }
          else if (hashCode == AFTER_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AFTER_SEQUENCE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShardIteratorType>(hashCode);
          }

          return ShardIteratorType::NOT_SET;
        }

        Aws::String GetNameForShardIteratorType(ShardIteratorType enumValue)
        {
          switch(enumValue)
          {
          case ShardIteratorType::NOT_SET:
            return {};
          case ShardIteratorType::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case ShardIteratorType::LATEST:
            return "LATEST";
          case ShardIteratorType::AT_SEQUENCE_NUMBER:
            return "AT_SEQUENCE_NUMBER";
          case ShardIteratorType::AFTER_SEQUENCE_NUMBER:
            return "AFTER_SEQUENCE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShardIteratorTypeMapper
    } // namespace Model
  } // namespace KeyspacesStreams
} // namespace Aws
