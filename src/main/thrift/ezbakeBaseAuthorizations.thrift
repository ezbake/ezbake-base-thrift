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

/**
 This exception describes when an application or user attempts to
 write or manage the visibility of data that they do not have authorization
 to write or manage. This exception should NOT be used in cases where the
 user or application does not have proper READ or DISCOVER permissions.
 */
exception EzBakeAccessDenied {
    1: optional string message;
}

struct Authorizations{
    /* the requestor's formal authorizations */
    1: optional set<string> formalAuthorizations,

    /* the requestor's authorizations derived from external community
       memberships */
    2: optional set<string> externalCommunityAuthorizations,

    /* the requestor's authorizationd derived from the platform's object
       security management service */
    3: optional set<i64> platformObjectAuthorizations,
}

