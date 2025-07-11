﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_protocolDetailsHasBeenSet)
  {
   payload.WithObject("ProtocolDetails", m_protocolDetails.Jsonize());

  }

  if(m_endpointDetailsHasBeenSet)
  {
   payload.WithObject("EndpointDetails", m_endpointDetails.Jsonize());

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_hostKeyHasBeenSet)
  {
   payload.WithString("HostKey", m_hostKey);

  }

  if(m_identityProviderDetailsHasBeenSet)
  {
   payload.WithObject("IdentityProviderDetails", m_identityProviderDetails.Jsonize());

  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_postAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PostAuthenticationLoginBanner", m_postAuthenticationLoginBanner);

  }

  if(m_preAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PreAuthenticationLoginBanner", m_preAuthenticationLoginBanner);

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_securityPolicyNameHasBeenSet)
  {
   payload.WithString("SecurityPolicyName", m_securityPolicyName);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_workflowDetailsHasBeenSet)
  {
   payload.WithObject("WorkflowDetails", m_workflowDetails.Jsonize());

  }

  if(m_structuredLogDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> structuredLogDestinationsJsonList(m_structuredLogDestinations.size());
   for(unsigned structuredLogDestinationsIndex = 0; structuredLogDestinationsIndex < structuredLogDestinationsJsonList.GetLength(); ++structuredLogDestinationsIndex)
   {
     structuredLogDestinationsJsonList[structuredLogDestinationsIndex].AsString(m_structuredLogDestinations[structuredLogDestinationsIndex]);
   }
   payload.WithArray("StructuredLogDestinations", std::move(structuredLogDestinationsJsonList));

  }

  if(m_s3StorageOptionsHasBeenSet)
  {
   payload.WithObject("S3StorageOptions", m_s3StorageOptions.Jsonize());

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateServer"));
  return headers;

}




