﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API ActivateUserRequest : public WorkDocsRequest
  {
  public:
    ActivateUserRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline ActivateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline ActivateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline ActivateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline ActivateUserRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline ActivateUserRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. This field should not be set when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline ActivateUserRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}

  private:
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
