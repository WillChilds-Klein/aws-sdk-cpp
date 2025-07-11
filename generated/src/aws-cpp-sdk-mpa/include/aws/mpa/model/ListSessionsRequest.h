﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/Filter.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class ListSessionsRequest : public MPARequest
  {
  public:
    AWS_MPA_API ListSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSessions"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the approval team.</p>
     */
    inline const Aws::String& GetApprovalTeamArn() const { return m_approvalTeamArn; }
    inline bool ApprovalTeamArnHasBeenSet() const { return m_approvalTeamArnHasBeenSet; }
    template<typename ApprovalTeamArnT = Aws::String>
    void SetApprovalTeamArn(ApprovalTeamArnT&& value) { m_approvalTeamArnHasBeenSet = true; m_approvalTeamArn = std::forward<ApprovalTeamArnT>(value); }
    template<typename ApprovalTeamArnT = Aws::String>
    ListSessionsRequest& WithApprovalTeamArn(ApprovalTeamArnT&& value) { SetApprovalTeamArn(std::forward<ApprovalTeamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that you can retrieve the remaining results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a next call to the operation to get more output. You can repeat this until
     * the <code>NextToken</code> response element returns <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Filter</code> objects. Contains the filter to apply when
     * listing sessions.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListSessionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListSessionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_approvalTeamArn;
    bool m_approvalTeamArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
