﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/WebACL.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

WebACL::WebACL(JsonView jsonValue)
{
  *this = jsonValue;
}

WebACL& WebACL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetObject("DefaultAction");
    m_defaultActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");
    m_visibilityConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataProtectionConfig"))
  {
    m_dataProtectionConfig = jsonValue.GetObject("DataProtectionConfig");
    m_dataProtectionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");
    m_capacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreProcessFirewallManagerRuleGroups"))
  {
    Aws::Utils::Array<JsonView> preProcessFirewallManagerRuleGroupsJsonList = jsonValue.GetArray("PreProcessFirewallManagerRuleGroups");
    for(unsigned preProcessFirewallManagerRuleGroupsIndex = 0; preProcessFirewallManagerRuleGroupsIndex < preProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++preProcessFirewallManagerRuleGroupsIndex)
    {
      m_preProcessFirewallManagerRuleGroups.push_back(preProcessFirewallManagerRuleGroupsJsonList[preProcessFirewallManagerRuleGroupsIndex].AsObject());
    }
    m_preProcessFirewallManagerRuleGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostProcessFirewallManagerRuleGroups"))
  {
    Aws::Utils::Array<JsonView> postProcessFirewallManagerRuleGroupsJsonList = jsonValue.GetArray("PostProcessFirewallManagerRuleGroups");
    for(unsigned postProcessFirewallManagerRuleGroupsIndex = 0; postProcessFirewallManagerRuleGroupsIndex < postProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++postProcessFirewallManagerRuleGroupsIndex)
    {
      m_postProcessFirewallManagerRuleGroups.push_back(postProcessFirewallManagerRuleGroupsJsonList[postProcessFirewallManagerRuleGroupsIndex].AsObject());
    }
    m_postProcessFirewallManagerRuleGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedByFirewallManager"))
  {
    m_managedByFirewallManager = jsonValue.GetBool("ManagedByFirewallManager");
    m_managedByFirewallManagerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");
    m_labelNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomResponseBodies"))
  {
    Aws::Map<Aws::String, JsonView> customResponseBodiesJsonMap = jsonValue.GetObject("CustomResponseBodies").GetAllObjects();
    for(auto& customResponseBodiesItem : customResponseBodiesJsonMap)
    {
      m_customResponseBodies[customResponseBodiesItem.first] = customResponseBodiesItem.second.AsObject();
    }
    m_customResponseBodiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CaptchaConfig"))
  {
    m_captchaConfig = jsonValue.GetObject("CaptchaConfig");
    m_captchaConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChallengeConfig"))
  {
    m_challengeConfig = jsonValue.GetObject("ChallengeConfig");
    m_challengeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TokenDomains"))
  {
    Aws::Utils::Array<JsonView> tokenDomainsJsonList = jsonValue.GetArray("TokenDomains");
    for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
    {
      m_tokenDomains.push_back(tokenDomainsJsonList[tokenDomainsIndex].AsString());
    }
    m_tokenDomainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationConfig"))
  {
    m_associationConfig = jsonValue.GetObject("AssociationConfig");
    m_associationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrofittedByFirewallManager"))
  {
    m_retrofittedByFirewallManager = jsonValue.GetBool("RetrofittedByFirewallManager");
    m_retrofittedByFirewallManagerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnSourceDDoSProtectionConfig"))
  {
    m_onSourceDDoSProtectionConfig = jsonValue.GetObject("OnSourceDDoSProtectionConfig");
    m_onSourceDDoSProtectionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationConfig"))
  {
    m_applicationConfig = jsonValue.GetObject("ApplicationConfig");
    m_applicationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue WebACL::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("DefaultAction", m_defaultAction.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  if(m_dataProtectionConfigHasBeenSet)
  {
   payload.WithObject("DataProtectionConfig", m_dataProtectionConfig.Jsonize());

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInt64("Capacity", m_capacity);

  }

  if(m_preProcessFirewallManagerRuleGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> preProcessFirewallManagerRuleGroupsJsonList(m_preProcessFirewallManagerRuleGroups.size());
   for(unsigned preProcessFirewallManagerRuleGroupsIndex = 0; preProcessFirewallManagerRuleGroupsIndex < preProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++preProcessFirewallManagerRuleGroupsIndex)
   {
     preProcessFirewallManagerRuleGroupsJsonList[preProcessFirewallManagerRuleGroupsIndex].AsObject(m_preProcessFirewallManagerRuleGroups[preProcessFirewallManagerRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("PreProcessFirewallManagerRuleGroups", std::move(preProcessFirewallManagerRuleGroupsJsonList));

  }

  if(m_postProcessFirewallManagerRuleGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> postProcessFirewallManagerRuleGroupsJsonList(m_postProcessFirewallManagerRuleGroups.size());
   for(unsigned postProcessFirewallManagerRuleGroupsIndex = 0; postProcessFirewallManagerRuleGroupsIndex < postProcessFirewallManagerRuleGroupsJsonList.GetLength(); ++postProcessFirewallManagerRuleGroupsIndex)
   {
     postProcessFirewallManagerRuleGroupsJsonList[postProcessFirewallManagerRuleGroupsIndex].AsObject(m_postProcessFirewallManagerRuleGroups[postProcessFirewallManagerRuleGroupsIndex].Jsonize());
   }
   payload.WithArray("PostProcessFirewallManagerRuleGroups", std::move(postProcessFirewallManagerRuleGroupsJsonList));

  }

  if(m_managedByFirewallManagerHasBeenSet)
  {
   payload.WithBool("ManagedByFirewallManager", m_managedByFirewallManager);

  }

  if(m_labelNamespaceHasBeenSet)
  {
   payload.WithString("LabelNamespace", m_labelNamespace);

  }

  if(m_customResponseBodiesHasBeenSet)
  {
   JsonValue customResponseBodiesJsonMap;
   for(auto& customResponseBodiesItem : m_customResponseBodies)
   {
     customResponseBodiesJsonMap.WithObject(customResponseBodiesItem.first, customResponseBodiesItem.second.Jsonize());
   }
   payload.WithObject("CustomResponseBodies", std::move(customResponseBodiesJsonMap));

  }

  if(m_captchaConfigHasBeenSet)
  {
   payload.WithObject("CaptchaConfig", m_captchaConfig.Jsonize());

  }

  if(m_challengeConfigHasBeenSet)
  {
   payload.WithObject("ChallengeConfig", m_challengeConfig.Jsonize());

  }

  if(m_tokenDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenDomainsJsonList(m_tokenDomains.size());
   for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
   {
     tokenDomainsJsonList[tokenDomainsIndex].AsString(m_tokenDomains[tokenDomainsIndex]);
   }
   payload.WithArray("TokenDomains", std::move(tokenDomainsJsonList));

  }

  if(m_associationConfigHasBeenSet)
  {
   payload.WithObject("AssociationConfig", m_associationConfig.Jsonize());

  }

  if(m_retrofittedByFirewallManagerHasBeenSet)
  {
   payload.WithBool("RetrofittedByFirewallManager", m_retrofittedByFirewallManager);

  }

  if(m_onSourceDDoSProtectionConfigHasBeenSet)
  {
   payload.WithObject("OnSourceDDoSProtectionConfig", m_onSourceDDoSProtectionConfig.Jsonize());

  }

  if(m_applicationConfigHasBeenSet)
  {
   payload.WithObject("ApplicationConfig", m_applicationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
