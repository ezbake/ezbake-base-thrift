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
#include "ezbakeBaseVisibility_types.h"

#include <algorithm>

namespace ezbake { namespace base { namespace thrift {

const char* PlatformObjectVisibilities::ascii_fingerprint = "0090139696F080D782C650ABF9103E00";
const uint8_t PlatformObjectVisibilities::binary_fingerprint[16] = {0x00,0x90,0x13,0x96,0x96,0xF0,0x80,0xD7,0x82,0xC6,0x50,0xAB,0xF9,0x10,0x3E,0x00};

uint32_t PlatformObjectVisibilities::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->platformObjectReadVisibility.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readSetBegin(_etype3, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              int64_t _elem5;
              xfer += iprot->readI64(_elem5);
              this->platformObjectReadVisibility.insert(_elem5);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.platformObjectReadVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->platformObjectDiscoverVisibility.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readSetBegin(_etype9, _size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              int64_t _elem11;
              xfer += iprot->readI64(_elem11);
              this->platformObjectDiscoverVisibility.insert(_elem11);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.platformObjectDiscoverVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->platformObjectWriteVisibility.clear();
            uint32_t _size12;
            ::apache::thrift::protocol::TType _etype15;
            xfer += iprot->readSetBegin(_etype15, _size12);
            uint32_t _i16;
            for (_i16 = 0; _i16 < _size12; ++_i16)
            {
              int64_t _elem17;
              xfer += iprot->readI64(_elem17);
              this->platformObjectWriteVisibility.insert(_elem17);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.platformObjectWriteVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->platformObjectManageVisibility.clear();
            uint32_t _size18;
            ::apache::thrift::protocol::TType _etype21;
            xfer += iprot->readSetBegin(_etype21, _size18);
            uint32_t _i22;
            for (_i22 = 0; _i22 < _size18; ++_i22)
            {
              int64_t _elem23;
              xfer += iprot->readI64(_elem23);
              this->platformObjectManageVisibility.insert(_elem23);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.platformObjectManageVisibility = true;
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

uint32_t PlatformObjectVisibilities::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PlatformObjectVisibilities");

  if (this->__isset.platformObjectReadVisibility) {
    xfer += oprot->writeFieldBegin("platformObjectReadVisibility", ::apache::thrift::protocol::T_SET, 1);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->platformObjectReadVisibility.size()));
      std::set<int64_t> ::const_iterator _iter24;
      for (_iter24 = this->platformObjectReadVisibility.begin(); _iter24 != this->platformObjectReadVisibility.end(); ++_iter24)
      {
        xfer += oprot->writeI64((*_iter24));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.platformObjectDiscoverVisibility) {
    xfer += oprot->writeFieldBegin("platformObjectDiscoverVisibility", ::apache::thrift::protocol::T_SET, 2);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->platformObjectDiscoverVisibility.size()));
      std::set<int64_t> ::const_iterator _iter25;
      for (_iter25 = this->platformObjectDiscoverVisibility.begin(); _iter25 != this->platformObjectDiscoverVisibility.end(); ++_iter25)
      {
        xfer += oprot->writeI64((*_iter25));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.platformObjectWriteVisibility) {
    xfer += oprot->writeFieldBegin("platformObjectWriteVisibility", ::apache::thrift::protocol::T_SET, 3);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->platformObjectWriteVisibility.size()));
      std::set<int64_t> ::const_iterator _iter26;
      for (_iter26 = this->platformObjectWriteVisibility.begin(); _iter26 != this->platformObjectWriteVisibility.end(); ++_iter26)
      {
        xfer += oprot->writeI64((*_iter26));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.platformObjectManageVisibility) {
    xfer += oprot->writeFieldBegin("platformObjectManageVisibility", ::apache::thrift::protocol::T_SET, 4);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->platformObjectManageVisibility.size()));
      std::set<int64_t> ::const_iterator _iter27;
      for (_iter27 = this->platformObjectManageVisibility.begin(); _iter27 != this->platformObjectManageVisibility.end(); ++_iter27)
      {
        xfer += oprot->writeI64((*_iter27));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(PlatformObjectVisibilities &a, PlatformObjectVisibilities &b) {
  using ::std::swap;
  swap(a.platformObjectReadVisibility, b.platformObjectReadVisibility);
  swap(a.platformObjectDiscoverVisibility, b.platformObjectDiscoverVisibility);
  swap(a.platformObjectWriteVisibility, b.platformObjectWriteVisibility);
  swap(a.platformObjectManageVisibility, b.platformObjectManageVisibility);
  swap(a.__isset, b.__isset);
}

const char* AdvancedMarkings::ascii_fingerprint = "B70C5858CE5339B483BE6F03B1FD6F0F";
const uint8_t AdvancedMarkings::binary_fingerprint[16] = {0xB7,0x0C,0x58,0x58,0xCE,0x53,0x39,0xB4,0x83,0xBE,0x6F,0x03,0xB1,0xFD,0x6F,0x0F};

uint32_t AdvancedMarkings::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->externalCommunityVisibility);
          this->__isset.externalCommunityVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->platformObjectVisibility.read(iprot);
          this->__isset.platformObjectVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->composite);
          this->__isset.composite = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->purgeIds.clear();
            uint32_t _size28;
            ::apache::thrift::protocol::TType _etype31;
            xfer += iprot->readSetBegin(_etype31, _size28);
            uint32_t _i32;
            for (_i32 = 0; _i32 < _size28; ++_i32)
            {
              int64_t _elem33;
              xfer += iprot->readI64(_elem33);
              this->purgeIds.insert(_elem33);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.purgeIds = true;
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

uint32_t AdvancedMarkings::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("AdvancedMarkings");

  if (this->__isset.externalCommunityVisibility) {
    xfer += oprot->writeFieldBegin("externalCommunityVisibility", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->externalCommunityVisibility);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.platformObjectVisibility) {
    xfer += oprot->writeFieldBegin("platformObjectVisibility", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->platformObjectVisibility.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.id) {
    xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->id);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.composite) {
    xfer += oprot->writeFieldBegin("composite", ::apache::thrift::protocol::T_BOOL, 4);
    xfer += oprot->writeBool(this->composite);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.purgeIds) {
    xfer += oprot->writeFieldBegin("purgeIds", ::apache::thrift::protocol::T_SET, 5);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->purgeIds.size()));
      std::set<int64_t> ::const_iterator _iter34;
      for (_iter34 = this->purgeIds.begin(); _iter34 != this->purgeIds.end(); ++_iter34)
      {
        xfer += oprot->writeI64((*_iter34));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AdvancedMarkings &a, AdvancedMarkings &b) {
  using ::std::swap;
  swap(a.externalCommunityVisibility, b.externalCommunityVisibility);
  swap(a.platformObjectVisibility, b.platformObjectVisibility);
  swap(a.id, b.id);
  swap(a.composite, b.composite);
  swap(a.purgeIds, b.purgeIds);
  swap(a.__isset, b.__isset);
}

const char* Visibility::ascii_fingerprint = "26039B0626DCEAA01E8AC37A9FC96D11";
const uint8_t Visibility::binary_fingerprint[16] = {0x26,0x03,0x9B,0x06,0x26,0xDC,0xEA,0xA0,0x1E,0x8A,0xC3,0x7A,0x9F,0xC9,0x6D,0x11};

uint32_t Visibility::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->formalVisibility);
          this->__isset.formalVisibility = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->advancedMarkings.read(iprot);
          this->__isset.advancedMarkings = true;
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

uint32_t Visibility::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Visibility");

  if (this->__isset.formalVisibility) {
    xfer += oprot->writeFieldBegin("formalVisibility", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->formalVisibility);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.advancedMarkings) {
    xfer += oprot->writeFieldBegin("advancedMarkings", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->advancedMarkings.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Visibility &a, Visibility &b) {
  using ::std::swap;
  swap(a.formalVisibility, b.formalVisibility);
  swap(a.advancedMarkings, b.advancedMarkings);
  swap(a.__isset, b.__isset);
}

}}} // namespace