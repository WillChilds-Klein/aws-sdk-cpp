﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/EventBridgeEndpointRules.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

namespace Aws
{
namespace EventBridge
{
const size_t EventBridgeEndpointRules::RulesBlobStrLen = 6176;
const size_t EventBridgeEndpointRules::RulesBlobSize = 6177;

using RulesBlobT = Aws::Array<const char, EventBridgeEndpointRules::RulesBlobSize>;
static constexpr RulesBlobT RulesBlob = {{
'{','"','v','e','r','s','i','o','n','"',':','"','1','.','0','"',',','"','p','a','r','a','m','e','t',
'e','r','s','"',':','{','"','R','e','g','i','o','n','"',':','{','"','b','u','i','l','t','I','n','"',
':','"','A','W','S',':',':','R','e','g','i','o','n','"',',','"','r','e','q','u','i','r','e','d','"',
':','f','a','l','s','e',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','T',
'h','e',' ','A','W','S',' ','r','e','g','i','o','n',' ','u','s','e','d',' ','t','o',' ','d','i','s',
'p','a','t','c','h',' ','t','h','e',' ','r','e','q','u','e','s','t','.','"',',','"','t','y','p','e',
'"',':','"','S','t','r','i','n','g','"','}',',','"','U','s','e','D','u','a','l','S','t','a','c','k',
'"',':','{','"','b','u','i','l','t','I','n','"',':','"','A','W','S',':',':','U','s','e','D','u','a',
'l','S','t','a','c','k','"',',','"','r','e','q','u','i','r','e','d','"',':','t','r','u','e',',','"',
'd','e','f','a','u','l','t','"',':','f','a','l','s','e',',','"','d','o','c','u','m','e','n','t','a',
't','i','o','n','"',':','"','W','h','e','n',' ','t','r','u','e',',',' ','u','s','e',' ','t','h','e',
' ','d','u','a','l','-','s','t','a','c','k',' ','e','n','d','p','o','i','n','t','.',' ','I','f',' ',
't','h','e',' ','c','o','n','f','i','g','u','r','e','d',' ','e','n','d','p','o','i','n','t',' ','d',
'o','e','s',' ','n','o','t',' ','s','u','p','p','o','r','t',' ','d','u','a','l','-','s','t','a','c',
'k',',',' ','d','i','s','p','a','t','c','h','i','n','g',' ','t','h','e',' ','r','e','q','u','e','s',
't',' ','M','A','Y',' ','r','e','t','u','r','n',' ','a','n',' ','e','r','r','o','r','.','"',',','"',
't','y','p','e','"',':','"','B','o','o','l','e','a','n','"','}',',','"','U','s','e','F','I','P','S',
'"',':','{','"','b','u','i','l','t','I','n','"',':','"','A','W','S',':',':','U','s','e','F','I','P',
'S','"',',','"','r','e','q','u','i','r','e','d','"',':','t','r','u','e',',','"','d','e','f','a','u',
'l','t','"',':','f','a','l','s','e',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',
':','"','W','h','e','n',' ','t','r','u','e',',',' ','s','e','n','d',' ','t','h','i','s',' ','r','e',
'q','u','e','s','t',' ','t','o',' ','t','h','e',' ','F','I','P','S','-','c','o','m','p','l','i','a',
'n','t',' ','r','e','g','i','o','n','a','l',' ','e','n','d','p','o','i','n','t','.',' ','I','f',' ',
't','h','e',' ','c','o','n','f','i','g','u','r','e','d',' ','e','n','d','p','o','i','n','t',' ','d',
'o','e','s',' ','n','o','t',' ','h','a','v','e',' ','a',' ','F','I','P','S',' ','c','o','m','p','l',
'i','a','n','t',' ','e','n','d','p','o','i','n','t',',',' ','d','i','s','p','a','t','c','h','i','n',
'g',' ','t','h','e',' ','r','e','q','u','e','s','t',' ','w','i','l','l',' ','r','e','t','u','r','n',
' ','a','n',' ','e','r','r','o','r','.','"',',','"','t','y','p','e','"',':','"','B','o','o','l','e',
'a','n','"','}',',','"','E','n','d','p','o','i','n','t','"',':','{','"','b','u','i','l','t','I','n',
'"',':','"','S','D','K',':',':','E','n','d','p','o','i','n','t','"',',','"','r','e','q','u','i','r',
'e','d','"',':','f','a','l','s','e',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',
':','"','O','v','e','r','r','i','d','e',' ','t','h','e',' ','e','n','d','p','o','i','n','t',' ','u',
's','e','d',' ','t','o',' ','s','e','n','d',' ','t','h','i','s',' ','r','e','q','u','e','s','t','"',
',','"','t','y','p','e','"',':','"','S','t','r','i','n','g','"','}',',','"','E','n','d','p','o','i',
'n','t','I','d','"',':','{','"','r','e','q','u','i','r','e','d','"',':','f','a','l','s','e',',','"',
'd','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','O','p','e','r','a','t','i','o','n',
' ','p','a','r','a','m','e','t','e','r',' ','f','o','r',' ','E','n','d','p','o','i','n','t','I','d',
'"',',','"','t','y','p','e','"',':','"','S','t','r','i','n','g','"','}','}',',','"','r','u','l','e',
's','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':',
'"','n','o','t','"',',','"','a','r','g','v','"',':','[','{','"','f','n','"',':','"','i','s','S','e',
't','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o','i',
'n','t','"','}',']','}',']','}',',','{','"','f','n','"',':','"','i','s','S','e','t','"',',','"','a',
'r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']','}',',',
'{','"','f','n','"',':','"','a','w','s','.','p','a','r','t','i','t','i','o','n','"',',','"','a','r',
'g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']',',','"','a',
's','s','i','g','n','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','"','}',
',','{','"','f','n','"',':','"','s','t','r','i','n','g','E','q','u','a','l','s','"',',','"','a','r',
'g','v','"',':','[','{','"','f','n','"',':','"','g','e','t','A','t','t','r','"',',','"','a','r','g',
'v','"',':','[','{','"','r','e','f','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u',
'l','t','"','}',',','"','n','a','m','e','"',']','}',',','"','a','w','s','-','u','s','-','g','o','v',
'"',']','}',',','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l','s','"',
',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','F','I','P','S','"',
'}',',','t','r','u','e',']','}',',','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q',
'u','a','l','s','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e',
'D','u','a','l','S','t','a','c','k','"','}',',','t','r','u','e',']','}',']',',','"','e','n','d','p',
'o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/','/','e','v','e',
'n','t','s','.','{','R','e','g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e',
's','u','l','t','#','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','}','"',
',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s',
'"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',',',
'{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S',
'e','t','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o',
'i','n','t','I','d','"','}',']','}',',','{','"','f','n','"',':','"','i','s','S','e','t','"',',','"',
'a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']','}',
',','{','"','f','n','"',':','"','a','w','s','.','p','a','r','t','i','t','i','o','n','"',',','"','a',
'r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']',',','"',
'a','s','s','i','g','n','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','"',
'}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',
':','[','{','"','f','n','"',':','"','i','s','V','a','l','i','d','H','o','s','t','L','a','b','e','l',
'"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o','i','n',
't','I','d','"','}',',','t','r','u','e',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e',
'a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':',
'"','U','s','e','F','I','P','S','"','}',',','f','a','l','s','e',']','}',']',',','"','r','u','l','e',
's','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':',
'"','i','s','S','e','t','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E',
'n','d','p','o','i','n','t','"','}',']','}',']',',','"','e','n','d','p','o','i','n','t','"',':','{',
'"','u','r','l','"',':','{','"','r','e','f','"',':','"','E','n','d','p','o','i','n','t','"','}',',',
'"','p','r','o','p','e','r','t','i','e','s','"',':','{','"','a','u','t','h','S','c','h','e','m','e',
's','"',':','[','{','"','n','a','m','e','"',':','"','s','i','g','v','4','a','"',',','"','s','i','g',
'n','i','n','g','N','a','m','e','"',':','"','e','v','e','n','t','s','"',',','"','s','i','g','n','i',
'n','g','R','e','g','i','o','n','S','e','t','"',':','[','"','*','"',']','}',']','}',',','"','h','e',
'a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i',
'n','t','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',
':','"','b','o','o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[',
'{','"','r','e','f','"',':','"','U','s','e','D','u','a','l','S','t','a','c','k','"','}',',','t','r',
'u','e',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o',
'n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l','s',
'"',',','"','a','r','g','v','"',':','[','t','r','u','e',',','{','"','f','n','"',':','"','g','e','t',
'A','t','t','r','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','P','a','r',
't','i','t','i','o','n','R','e','s','u','l','t','"','}',',','"','s','u','p','p','o','r','t','s','D',
'u','a','l','S','t','a','c','k','"',']','}',']','}',']',',','"','r','u','l','e','s','"',':','[','{',
'"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','n','d','p','o','i','n','t',
'"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/','/','{','E','n','d','p','o','i',
'n','t','I','d','}','.','e','n','d','p','o','i','n','t','.','e','v','e','n','t','s','.','{','P','a',
'r','t','i','t','i','o','n','R','e','s','u','l','t','#','d','u','a','l','S','t','a','c','k','D','n',
's','S','u','f','f','i','x','}','"',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','"',
'a','u','t','h','S','c','h','e','m','e','s','"',':','[','{','"','n','a','m','e','"',':','"','s','i',
'g','v','4','a','"',',','"','s','i','g','n','i','n','g','N','a','m','e','"',':','"','e','v','e','n',
't','s','"',',','"','s','i','g','n','i','n','g','R','e','g','i','o','n','S','e','t','"',':','[','"',
'*','"',']','}',']','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p',
'e','"',':','"','e','n','d','p','o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t',
'r','e','e','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e',
'r','r','o','r','"',':','"','D','u','a','l','S','t','a','c','k',' ','i','s',' ','e','n','a','b','l',
'e','d',' ','b','u','t',' ','t','h','i','s',' ','p','a','r','t','i','t','i','o','n',' ','d','o','e',
's',' ','n','o','t',' ','s','u','p','p','o','r','t',' ','D','u','a','l','S','t','a','c','k','"',',',
'"','t','y','p','e','"',':','"','e','r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"',
't','r','e','e','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"',
'e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/',
'/','{','E','n','d','p','o','i','n','t','I','d','}','.','e','n','d','p','o','i','n','t','.','e','v',
'e','n','t','s','.','{','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','#','d','n','s',
'S','u','f','f','i','x','}','"',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','"','a',
'u','t','h','S','c','h','e','m','e','s','"',':','[','{','"','n','a','m','e','"',':','"','s','i','g',
'v','4','a','"',',','"','s','i','g','n','i','n','g','N','a','m','e','"',':','"','e','v','e','n','t',
's','"',',','"','s','i','g','n','i','n','g','R','e','g','i','o','n','S','e','t','"',':','[','"','*',
'"',']','}',']','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e',
'"',':','"','e','n','d','p','o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r',
'e','e','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','r',
'r','o','r','"',':','"','I','n','v','a','l','i','d',' ','C','o','n','f','i','g','u','r','a','t','i',
'o','n',':',' ','F','I','P','S',' ','i','s',' ','n','o','t',' ','s','u','p','p','o','r','t','e','d',
' ','w','i','t','h',' ','E','v','e','n','t','B','r','i','d','g','e',' ','m','u','l','t','i','-','r',
'e','g','i','o','n',' ','e','n','d','p','o','i','n','t','s','.','"',',','"','t','y','p','e','"',':',
'"','e','r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',',
'{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','r','r','o','r','"',':',
'"','E','n','d','p','o','i','n','t','I','d',' ','m','u','s','t',' ','b','e',' ','a',' ','v','a','l',
'i','d',' ','h','o','s','t',' ','l','a','b','e','l','.','"',',','"','t','y','p','e','"',':','"','e',
'r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S','e','t',
'"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o','i','n',
't','"','}',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l',
's','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','F','I','P',
'S','"','}',',','t','r','u','e',']','}',']',',','"','e','r','r','o','r','"',':','"','I','n','v','a',
'l','i','d',' ','C','o','n','f','i','g','u','r','a','t','i','o','n',':',' ','F','I','P','S',' ','a',
'n','d',' ','c','u','s','t','o','m',' ','e','n','d','p','o','i','n','t',' ','a','r','e',' ','n','o',
't',' ','s','u','p','p','o','r','t','e','d','"',',','"','t','y','p','e','"',':','"','e','r','r','o',
'r','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':',
'"','b','o','o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','{',
'"','r','e','f','"',':','"','U','s','e','D','u','a','l','S','t','a','c','k','"','}',',','t','r','u',
'e',']','}',']',',','"','e','r','r','o','r','"',':','"','I','n','v','a','l','i','d',' ','C','o','n',
'f','i','g','u','r','a','t','i','o','n',':',' ','D','u','a','l','s','t','a','c','k',' ','a','n','d',
' ','c','u','s','t','o','m',' ','e','n','d','p','o','i','n','t',' ','a','r','e',' ','n','o','t',' ',
's','u','p','p','o','r','t','e','d','"',',','"','t','y','p','e','"',':','"','e','r','r','o','r','"',
'}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','n','d','p','o',
'i','n','t','"',':','{','"','u','r','l','"',':','{','"','r','e','f','"',':','"','E','n','d','p','o',
'i','n','t','"','}',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h','e',
'a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i',
'n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"','c','o',
'n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S','e','t','"',',',
'"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']',
'}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',
':','[','{','"','f','n','"',':','"','a','w','s','.','p','a','r','t','i','t','i','o','n','"',',','"',
'a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']',',',
'"','a','s','s','i','g','n','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t',
'"','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s',
'"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l','s','"',',',
'"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','F','I','P','S','"','}',
',','t','r','u','e',']','}',',','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u',
'a','l','s','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','D',
'u','a','l','S','t','a','c','k','"','}',',','t','r','u','e',']','}',']',',','"','r','u','l','e','s',
'"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"',
'b','o','o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','t','r',
'u','e',',','{','"','f','n','"',':','"','g','e','t','A','t','t','r','"',',','"','a','r','g','v','"',
':','[','{','"','r','e','f','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t',
'"','}',',','"','s','u','p','p','o','r','t','s','F','I','P','S','"',']','}',']','}',',','{','"','f',
'n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',
':','[','t','r','u','e',',','{','"','f','n','"',':','"','g','e','t','A','t','t','r','"',',','"','a',
'r','g','v','"',':','[','{','"','r','e','f','"',':','"','P','a','r','t','i','t','i','o','n','R','e',
's','u','l','t','"','}',',','"','s','u','p','p','o','r','t','s','D','u','a','l','S','t','a','c','k',
'"',']','}',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[',']',',','"','e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',
':','"','h','t','t','p','s',':','/','/','e','v','e','n','t','s','-','f','i','p','s','.','{','R','e',
'g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','#','d','u',
'a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','}','"',',','"','p','r','o','p','e',
'r','t','i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"',
't','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',']',',','"','t','y','p','e','"',
':','"','t','r','e','e','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',
',','"','e','r','r','o','r','"',':','"','F','I','P','S',' ','a','n','d',' ','D','u','a','l','S','t',
'a','c','k',' ','a','r','e',' ','e','n','a','b','l','e','d',',',' ','b','u','t',' ','t','h','i','s',
' ','p','a','r','t','i','t','i','o','n',' ','d','o','e','s',' ','n','o','t',' ','s','u','p','p','o',
'r','t',' ','o','n','e',' ','o','r',' ','b','o','t','h','"',',','"','t','y','p','e','"',':','"','e',
'r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e',
'a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':',
'"','U','s','e','F','I','P','S','"','}',',','t','r','u','e',']','}',']',',','"','r','u','l','e','s',
'"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"',
'b','o','o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','{','"',
'f','n','"',':','"','g','e','t','A','t','t','r','"',',','"','a','r','g','v','"',':','[','{','"','r',
'e','f','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','"','}',',','"','s',
'u','p','p','o','r','t','s','F','I','P','S','"',']','}',',','t','r','u','e',']','}',']',',','"','r',
'u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f',
'n','"',':','"','s','t','r','i','n','g','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':',
'[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',',','"','u','s','-','g','o','v',
'-','e','a','s','t','-','1','"',']','}',']',',','"','e','n','d','p','o','i','n','t','"',':','{','"',
'u','r','l','"',':','"','h','t','t','p','s',':','/','/','e','v','e','n','t','s','.','u','s','-','g',
'o','v','-','e','a','s','t','-','1','.','a','m','a','z','o','n','a','w','s','.','c','o','m','"',',',
'"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s','"',
':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',',','{',
'"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','s','t','r','i',
'n','g','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':',
'"','R','e','g','i','o','n','"','}',',','"','u','s','-','g','o','v','-','w','e','s','t','-','1','"',
']','}',']',',','"','e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t',
't','p','s',':','/','/','e','v','e','n','t','s','.','u','s','-','g','o','v','-','w','e','s','t','-',
'1','.','a','m','a','z','o','n','a','w','s','.','c','o','m','"',',','"','p','r','o','p','e','r','t',
'i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y',
'p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',',','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[',']',',','"','e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',
':','"','h','t','t','p','s',':','/','/','e','v','e','n','t','s','-','f','i','p','s','.','{','R','e',
'g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','#','d','n',
's','S','u','f','f','i','x','}','"',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',
',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n',
'd','p','o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',',
'{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','r','r','o','r','"',':',
'"','F','I','P','S',' ','i','s',' ','e','n','a','b','l','e','d',' ','b','u','t',' ','t','h','i','s',
' ','p','a','r','t','i','t','i','o','n',' ','d','o','e','s',' ','n','o','t',' ','s','u','p','p','o',
'r','t',' ','F','I','P','S','"',',','"','t','y','p','e','"',':','"','e','r','r','o','r','"','}',']',
',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l',
's','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','D','u','a',
'l','S','t','a','c','k','"','}',',','t','r','u','e',']','}',']',',','"','r','u','l','e','s','"',':',
'[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','b','o',
'o','l','e','a','n','E','q','u','a','l','s','"',',','"','a','r','g','v','"',':','[','t','r','u','e',
',','{','"','f','n','"',':','"','g','e','t','A','t','t','r','"',',','"','a','r','g','v','"',':','[',
'{','"','r','e','f','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t','"','}',
',','"','s','u','p','p','o','r','t','s','D','u','a','l','S','t','a','c','k','"',']','}',']','}',']',
',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',
']',',','"','e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t','t','p',
's',':','/','/','e','v','e','n','t','s','.','{','R','e','g','i','o','n','}','.','{','P','a','r','t',
'i','t','i','o','n','R','e','s','u','l','t','#','d','u','a','l','S','t','a','c','k','D','n','s','S',
'u','f','f','i','x','}','"',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"',
'h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p',
'o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','r','r','o','r','"',':','"','D',
'u','a','l','S','t','a','c','k',' ','i','s',' ','e','n','a','b','l','e','d',' ','b','u','t',' ','t',
'h','i','s',' ','p','a','r','t','i','t','i','o','n',' ','d','o','e','s',' ','n','o','t',' ','s','u',
'p','p','o','r','t',' ','D','u','a','l','S','t','a','c','k','"',',','"','t','y','p','e','"',':','"',
'e','r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{',
'"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','n','d','p','o','i','n','t',
'"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/','/','e','v','e','n','t','s','.',
'{','R','e','g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e','s','u','l','t',
'#','d','n','s','S','u','f','f','i','x','}','"',',','"','p','r','o','p','e','r','t','i','e','s','"',
':','{','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':',
'"','e','n','d','p','o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e',
'"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"','c','o','n','d',
'i','t','i','o','n','s','"',':','[',']',',','"','e','r','r','o','r','"',':','"','I','n','v','a','l',
'i','d',' ','C','o','n','f','i','g','u','r','a','t','i','o','n',':',' ','M','i','s','s','i','n','g',
' ','R','e','g','i','o','n','"',',','"','t','y','p','e','"',':','"','e','r','r','o','r','"','}',']',
'}','\0'
}};

const char* EventBridgeEndpointRules::GetRulesBlob()
{
    return RulesBlob.data();
}

} // namespace EventBridge
} // namespace Aws
