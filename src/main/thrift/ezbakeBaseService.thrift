/*   Copyright (C) 2013-2014 Computer Sciences Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

namespace java ezbake.base.thrift
namespace cpp ezbake.base.thrift
namespace js ezbake.base.thrift

include "ezbakeBaseTypes.thrift"
include "ezmetrics.thrift"

service EzBakeBaseService
{
    /**
     * This method is used to ping a service and can be used for health checking.
     *
     * @returns true or false depending on whether service is healthy or not.
     */
	bool ping();
    
    /**
     * This method is used to grab a metrics registry
     */
   ezmetrics.MetricRegistryThrift getMetricRegistryThrift();
}
