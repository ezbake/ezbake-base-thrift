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


struct PlatformObjectVisibilities{
    /* indicates the platform-wide object read authorizations of a requestor */
    1: optional set<i64> platformObjectReadVisibility,

    /* indicates the platform-wide object discovery authorizations of a
       requestor */
    2: optional set<i64> platformObjectDiscoverVisibility,

    /* indicates the platform-wide object write authorizations of a requestor */
    3: optional set<i64> platformObjectWriteVisibility,

    /* indicates the platform-wide object management authorizations of a
       requestor */
    4: optional set<i64> platformObjectManageVisibility
}

struct AdvancedMarkings{
    /* the visibility controls for the object where the controls are based
       on permissions set in an external system */
    1: optional string externalCommunityVisibility,

    /* the visibility controls for the object based on permissions set
       in the platform object permission management service */
    2: optional PlatformObjectVisibilities platformObjectVisibility,

    /* When the object is registered with the provenance service, it gets
       a unique ID for provenance/purge/ageoff uses.
    */
    3: optional i64 id,

    /* For purge / ageoff. If this field is not set, a system-level purge or
       age-off call to the dataset where this record matches will cause the
       record to be expunged.

       That behavior may not be appropriate for composite objects like counts
       or data derived from multiple provenance sources.*/
    4: optional bool composite,

    /* If a system-level purge matches this row but the composite field was
       set at the time of the match, the access layer *may* add the purge ID to
       this set as a mechanism to track that the data needs attention to
       fulfill a purge.

       This may not make sense for all databases. Consequently, the access
       layer can choose to record the information elsewhere as long as the
       access layer has an easy mechanism to determine exactly what data
       is still subject to an incomplete purge operation
    */
    5: optional set<i64> purgeIds,
}

struct Visibility{
    /* while obviously not strictly required, at least one of
            formalVisibility
            externalCommunityVisibility
            platformObjectVisibility
       should be set. Without one of those set, the object
       will be accessible by all
     */

    /* the formal visibility controls for the object */
    1: optional string formalVisibility,

    2: optional AdvancedMarkings advancedMarkings,
}
