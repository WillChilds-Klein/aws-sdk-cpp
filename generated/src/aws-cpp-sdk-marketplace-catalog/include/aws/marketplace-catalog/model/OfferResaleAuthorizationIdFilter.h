﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer.</p>
   *  <p>Not all offers have a <code>ResaleAuthorizationId</code>. The response
   * will only include offers for which you have permissions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferResaleAuthorizationIdFilter">AWS
   * API Reference</a></p>
   */
  class OfferResaleAuthorizationIdFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter();
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline OfferResaleAuthorizationIdFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline OfferResaleAuthorizationIdFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline OfferResaleAuthorizationIdFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline OfferResaleAuthorizationIdFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline OfferResaleAuthorizationIdFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
