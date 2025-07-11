﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CreateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithObject("schemaDefinition", m_schemaDefinition.Jsonize());

  }

  if(m_commentHasBeenSet)
  {
   payload.WithObject("comment", m_comment.Jsonize());

  }

  if(m_capacitySpecificationHasBeenSet)
  {
   payload.WithObject("capacitySpecification", m_capacitySpecification.Jsonize());

  }

  if(m_encryptionSpecificationHasBeenSet)
  {
   payload.WithObject("encryptionSpecification", m_encryptionSpecification.Jsonize());

  }

  if(m_pointInTimeRecoveryHasBeenSet)
  {
   payload.WithObject("pointInTimeRecovery", m_pointInTimeRecovery.Jsonize());

  }

  if(m_ttlHasBeenSet)
  {
   payload.WithObject("ttl", m_ttl.Jsonize());

  }

  if(m_defaultTimeToLiveHasBeenSet)
  {
   payload.WithInteger("defaultTimeToLive", m_defaultTimeToLive);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_clientSideTimestampsHasBeenSet)
  {
   payload.WithObject("clientSideTimestamps", m_clientSideTimestamps.Jsonize());

  }

  if(m_autoScalingSpecificationHasBeenSet)
  {
   payload.WithObject("autoScalingSpecification", m_autoScalingSpecification.Jsonize());

  }

  if(m_replicaSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaSpecificationsJsonList(m_replicaSpecifications.size());
   for(unsigned replicaSpecificationsIndex = 0; replicaSpecificationsIndex < replicaSpecificationsJsonList.GetLength(); ++replicaSpecificationsIndex)
   {
     replicaSpecificationsJsonList[replicaSpecificationsIndex].AsObject(m_replicaSpecifications[replicaSpecificationsIndex].Jsonize());
   }
   payload.WithArray("replicaSpecifications", std::move(replicaSpecificationsJsonList));

  }

  if(m_cdcSpecificationHasBeenSet)
  {
   payload.WithObject("cdcSpecification", m_cdcSpecification.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesService.CreateTable"));
  return headers;

}




