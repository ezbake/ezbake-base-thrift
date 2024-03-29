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
#include "ezbakeBasePurgeService_types.h"

#include <algorithm>

namespace ezbake { namespace base { namespace thrift {

int _kCancelStatusValues[] = {
  CancelStatus::NOT_CANCELED,
  CancelStatus::CANCELED,
  CancelStatus::CANCEL_IN_PROGRESS,
  CancelStatus::CANNOT_CANCEL
};
const char* _kCancelStatusNames[] = {
  "NOT_CANCELED",
  "CANCELED",
  "CANCEL_IN_PROGRESS",
  "CANNOT_CANCEL"
};
const std::map<int, const char*> _CancelStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kCancelStatusValues, _kCancelStatusNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kPurgeStatusValues[] = {
  PurgeStatus::UNKNOWN_ID,
  PurgeStatus::WAITING_TO_START,
  PurgeStatus::STARTING,
  PurgeStatus::PURGING,
  PurgeStatus::STOPPING,
  PurgeStatus::ERROR,
  PurgeStatus::FINISHED_COMPLETE,
  PurgeStatus::FINISHED_INCOMPLETE
};
const char* _kPurgeStatusNames[] = {
  "UNKNOWN_ID",
  "WAITING_TO_START",
  "STARTING",
  "PURGING",
  "STOPPING",
  "ERROR",
  "FINISHED_COMPLETE",
  "FINISHED_INCOMPLETE"
};
const std::map<int, const char*> _PurgeStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kPurgeStatusValues, _kPurgeStatusNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* PurgeException::ascii_fingerprint = "EFB929595D312AC8F305D5A794CFEDA1";
const uint8_t PurgeException::binary_fingerprint[16] = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

uint32_t PurgeException::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t PurgeException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PurgeException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(PurgeException &a, PurgeException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

const char* PurgeState::ascii_fingerprint = "86072E75052D4A53B4C11713D755C59C";
const uint8_t PurgeState::binary_fingerprint[16] = {0x86,0x07,0x2E,0x75,0x05,0x2D,0x4A,0x53,0xB4,0xC1,0x17,0x13,0xD7,0x55,0xC5,0x9C};

uint32_t PurgeState::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_purgeStatus = false;
  bool isset_purgeId = false;
  bool isset_timeStamp = false;
  bool isset_purged = false;
  bool isset_notPurged = false;
  bool isset_suggestedPollPeriod = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->purgeStatus = (PurgeStatus::type)ecast0;
          isset_purgeStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->purgeId);
          isset_purgeId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->timeStamp.read(iprot);
          isset_timeStamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->purged.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readSetBegin(_etype4, _size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              int64_t _elem6;
              xfer += iprot->readI64(_elem6);
              this->purged.insert(_elem6);
            }
            xfer += iprot->readSetEnd();
          }
          isset_purged = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->notPurged.clear();
            uint32_t _size7;
            ::apache::thrift::protocol::TType _etype10;
            xfer += iprot->readSetBegin(_etype10, _size7);
            uint32_t _i11;
            for (_i11 = 0; _i11 < _size7; ++_i11)
            {
              int64_t _elem12;
              xfer += iprot->readI64(_elem12);
              this->notPurged.insert(_elem12);
            }
            xfer += iprot->readSetEnd();
          }
          isset_notPurged = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->suggestedPollPeriod);
          isset_suggestedPollPeriod = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast13;
          xfer += iprot->readI32(ecast13);
          this->cancelStatus = (CancelStatus::type)ecast13;
          this->__isset.cancelStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_purgeStatus)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_purgeId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_timeStamp)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_purged)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_notPurged)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_suggestedPollPeriod)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t PurgeState::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PurgeState");

  xfer += oprot->writeFieldBegin("purgeStatus", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->purgeStatus);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("purgeId", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->purgeId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeStamp", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->timeStamp.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("purged", ::apache::thrift::protocol::T_SET, 4);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->purged.size()));
    std::set<int64_t> ::const_iterator _iter14;
    for (_iter14 = this->purged.begin(); _iter14 != this->purged.end(); ++_iter14)
    {
      xfer += oprot->writeI64((*_iter14));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("notPurged", ::apache::thrift::protocol::T_SET, 5);
  {
    xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->notPurged.size()));
    std::set<int64_t> ::const_iterator _iter15;
    for (_iter15 = this->notPurged.begin(); _iter15 != this->notPurged.end(); ++_iter15)
    {
      xfer += oprot->writeI64((*_iter15));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("suggestedPollPeriod", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->suggestedPollPeriod);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.cancelStatus) {
    xfer += oprot->writeFieldBegin("cancelStatus", ::apache::thrift::protocol::T_I32, 7);
    xfer += oprot->writeI32((int32_t)this->cancelStatus);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(PurgeState &a, PurgeState &b) {
  using ::std::swap;
  swap(a.purgeStatus, b.purgeStatus);
  swap(a.purgeId, b.purgeId);
  swap(a.timeStamp, b.timeStamp);
  swap(a.purged, b.purged);
  swap(a.notPurged, b.notPurged);
  swap(a.suggestedPollPeriod, b.suggestedPollPeriod);
  swap(a.cancelStatus, b.cancelStatus);
  swap(a.__isset, b.__isset);
}

}}} // namespace
