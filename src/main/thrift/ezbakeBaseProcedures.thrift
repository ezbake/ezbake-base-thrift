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

namespace java ezbake.base.thrift.procedures
namespace cpp ezbake.base.thrift.procedures
namespace js ezbake.base.thrift.procedures

include "ezbakeBaseTypes.thrift"
include "ezbakeBaseService.thrift"

service BaseProcedure extends ezbakeBaseService.EzBakeBaseService
{
    ezbakeBaseTypes.SSR getStandardSearchResultForURI(1:string uri, 2:ezbakeBaseTypes.EzSecurityToken userToken);
    ezbakeBaseTypes.SSR getStandardSearchResultForURIs(1:list<string> uris, 2:ezbakeBaseTypes.EzSecurityToken userToken);
}
