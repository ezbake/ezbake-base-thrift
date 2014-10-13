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
#include "ezbakeBaseAuthorizations_types.h"

#include <algorithm>

namespace ezbake { namespace base { namespace thrift {

const char* EzBakeAccessDenied::ascii_fingerprint = "66E694018C17E5B65A59AE8F55CCA3CD";
const uint8_t EzBakeAccessDenied::binary_fingerprint[16] = {0x66,0xE6,0x94,0x01,0x8C,0x17,0xE5,0xB6,0x5A,0x59,0xAE,0x8F,0x55,0xCC,0xA3,0xCD};

uint32_t EzBakeAccessDenied::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t EzBakeAccessDenied::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EzBakeAccessDenied");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EzBakeAccessDenied &a, EzBakeAccessDenied &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

const char* Authorizations::ascii_fingerprint = "4D48136A22794AF3A893A5230513BB87";
const uint8_t Authorizations::binary_fingerprint[16] = {0x4D,0x48,0x13,0x6A,0x22,0x79,0x4A,0xF3,0xA8,0x93,0xA5,0x23,0x05,0x13,0xBB,0x87};

uint32_t Authorizations::read(::apache::thrift::protocol::TProtocol* iprot) {

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
            this->formalAuthorizations.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readSetBegin(_etype3, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              std::string _elem5;
              xfer += iprot->readString(_elem5);
              this->formalAuthorizations.insert(_elem5);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.formalAuthorizations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->externalCommunityAuthorizations.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readSetBegin(_etype9, _size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              std::string _elem11;
              xfer += iprot->readString(_elem11);
              this->externalCommunityAuthorizations.insert(_elem11);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.externalCommunityAuthorizations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->platformObjectAuthorizations.clear();
            uint32_t _size12;
            ::apache::thrift::protocol::TType _etype15;
            xfer += iprot->readSetBegin(_etype15, _size12);
            uint32_t _i16;
            for (_i16 = 0; _i16 < _size12; ++_i16)
            {
              int64_t _elem17;
              xfer += iprot->readI64(_elem17);
              this->platformObjectAuthorizations.insert(_elem17);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.platformObjectAuthorizations = true;
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

uint32_t Authorizations::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Authorizations");

  if (this->__isset.formalAuthorizations) {
    xfer += oprot->writeFieldBegin("formalAuthorizations", ::apache::thrift::protocol::T_SET, 1);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->formalAuthorizations.size()));
      std::set<std::string> ::const_iterator _iter18;
      for (_iter18 = this->formalAuthorizations.begin(); _iter18 != this->formalAuthorizations.end(); ++_iter18)
      {
        xfer += oprot->writeString((*_iter18));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.externalCommunityAuthorizations) {
    xfer += oprot->writeFieldBegin("externalCommunityAuthorizations", ::apache::thrift::protocol::T_SET, 2);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->externalCommunityAuthorizations.size()));
      std::set<std::string> ::const_iterator _iter19;
      for (_iter19 = this->externalCommunityAuthorizations.begin(); _iter19 != this->externalCommunityAuthorizations.end(); ++_iter19)
      {
        xfer += oprot->writeString((*_iter19));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.platformObjectAuthorizations) {
    xfer += oprot->writeFieldBegin("platformObjectAuthorizations", ::apache::thrift::protocol::T_SET, 3);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->platformObjectAuthorizations.size()));
      std::set<int64_t> ::const_iterator _iter20;
      for (_iter20 = this->platformObjectAuthorizations.begin(); _iter20 != this->platformObjectAuthorizations.end(); ++_iter20)
      {
        xfer += oprot->writeI64((*_iter20));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Authorizations &a, Authorizations &b) {
  using ::std::swap;
  swap(a.formalAuthorizations, b.formalAuthorizations);
  swap(a.externalCommunityAuthorizations, b.externalCommunityAuthorizations);
  swap(a.platformObjectAuthorizations, b.platformObjectAuthorizations);
  swap(a.__isset, b.__isset);
}

}}} // namespace