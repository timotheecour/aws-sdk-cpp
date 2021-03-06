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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ConnectivityInfo.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   * connectivity info request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfoRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API UpdateConnectivityInfoRequest : public GreengrassRequest
  {
  public:
    UpdateConnectivityInfoRequest();
    Aws::String SerializePayload() const override;

    /**
     * Connectivity info array
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * Connectivity info array
     */
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = value; }

    /**
     * Connectivity info array
     */
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::move(value); }

    /**
     * Connectivity info array
     */
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}

    /**
     * Connectivity info array
     */
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}

    /**
     * Connectivity info array
     */
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(value); return *this; }

    /**
     * Connectivity info array
     */
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(std::move(value)); return *this; }

    /**
     * Thing Name
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * Thing Name
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * Thing Name
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * Thing Name
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * Thing Name
     */
    inline UpdateConnectivityInfoRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * Thing Name
     */
    inline UpdateConnectivityInfoRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * Thing Name
     */
    inline UpdateConnectivityInfoRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

  private:
    Aws::Vector<ConnectivityInfo> m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet;
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
