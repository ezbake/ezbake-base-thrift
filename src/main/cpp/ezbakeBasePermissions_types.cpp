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

/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ezbakeBasePermissions_types.h"

#include <algorithm>

namespace ezbake { namespace base { namespace thrift {

int _kPermissionValues[] = {
  Permission::READ,
  Permission::WRITE,
  Permission::MANAGE_VISIBILITY,
  Permission::DISCOVER
};
const char* _kPermissionNames[] = {
  "READ",
  "WRITE",
  "MANAGE_VISIBILITY",
  "DISCOVER"
};
const std::map<int, const char*> _Permission_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kPermissionValues, _kPermissionNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

}}} // namespace
