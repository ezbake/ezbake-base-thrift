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
#include "ezmetrics_types.h"

#include <algorithm>

namespace ezbake { namespace base { namespace thrift { namespace metrics {

const char* GaugeThrift::ascii_fingerprint = "D0297FC5011701BD87898CC36146A565";
const uint8_t GaugeThrift::binary_fingerprint[16] = {0xD0,0x29,0x7F,0xC5,0x01,0x17,0x01,0xBD,0x87,0x89,0x8C,0xC3,0x61,0x46,0xA5,0x65};

uint32_t GaugeThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->error);
          this->__isset.error = true;
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

uint32_t GaugeThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("GaugeThrift");

  if (this->__isset.value) {
    xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->value);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.error) {
    xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->error);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GaugeThrift &a, GaugeThrift &b) {
  using ::std::swap;
  swap(a.value, b.value);
  swap(a.error, b.error);
  swap(a.__isset, b.__isset);
}

const char* CounterThrift::ascii_fingerprint = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
const uint8_t CounterThrift::binary_fingerprint[16] = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

uint32_t CounterThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_count = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          isset_count = true;
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

  if (!isset_count)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t CounterThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("CounterThrift");

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CounterThrift &a, CounterThrift &b) {
  using ::std::swap;
  swap(a.count, b.count);
}

const char* SnapShotThrift::ascii_fingerprint = "8BA62ABB3DD6F30F30ABCB05B3FD172D";
const uint8_t SnapShotThrift::binary_fingerprint[16] = {0x8B,0xA6,0x2A,0xBB,0x3D,0xD6,0xF3,0x0F,0x30,0xAB,0xCB,0x05,0xB3,0xFD,0x17,0x2D};

uint32_t SnapShotThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_max = false;
  bool isset_min = false;
  bool isset_mean = false;
  bool isset_median = false;
  bool isset_StdDev = false;
  bool isset_p75 = false;
  bool isset_p95 = false;
  bool isset_p98 = false;
  bool isset_p99 = false;
  bool isset_p999 = false;
  bool isset_values = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->max);
          isset_max = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->min);
          isset_min = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->mean);
          isset_mean = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->median);
          isset_median = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->StdDev);
          isset_StdDev = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->p75);
          isset_p75 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->p95);
          isset_p95 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->p98);
          isset_p98 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->p99);
          isset_p99 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->p999);
          isset_p999 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->values.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->values.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readI64(this->values[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          isset_values = true;
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

  if (!isset_max)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_min)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_mean)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_median)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_StdDev)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_p75)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_p95)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_p98)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_p99)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_p999)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_values)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t SnapShotThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("SnapShotThrift");

  xfer += oprot->writeFieldBegin("max", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->max);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("min", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->min);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mean", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->mean);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("median", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->median);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("StdDev", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->StdDev);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("p75", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->p75);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("p95", ::apache::thrift::protocol::T_DOUBLE, 7);
  xfer += oprot->writeDouble(this->p95);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("p98", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->p98);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("p99", ::apache::thrift::protocol::T_DOUBLE, 9);
  xfer += oprot->writeDouble(this->p99);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("p999", ::apache::thrift::protocol::T_DOUBLE, 10);
  xfer += oprot->writeDouble(this->p999);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("values", ::apache::thrift::protocol::T_LIST, 11);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->values.size()));
    std::vector<int64_t> ::const_iterator _iter5;
    for (_iter5 = this->values.begin(); _iter5 != this->values.end(); ++_iter5)
    {
      xfer += oprot->writeI64((*_iter5));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SnapShotThrift &a, SnapShotThrift &b) {
  using ::std::swap;
  swap(a.max, b.max);
  swap(a.min, b.min);
  swap(a.mean, b.mean);
  swap(a.median, b.median);
  swap(a.StdDev, b.StdDev);
  swap(a.p75, b.p75);
  swap(a.p95, b.p95);
  swap(a.p98, b.p98);
  swap(a.p99, b.p99);
  swap(a.p999, b.p999);
  swap(a.values, b.values);
}

const char* HistogramThrift::ascii_fingerprint = "384B8C0F6263173D32F0159C9096F939";
const uint8_t HistogramThrift::binary_fingerprint[16] = {0x38,0x4B,0x8C,0x0F,0x62,0x63,0x17,0x3D,0x32,0xF0,0x15,0x9C,0x90,0x96,0xF9,0x39};

uint32_t HistogramThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_count = false;
  bool isset_snapshot = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          isset_count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->snapshot.read(iprot);
          isset_snapshot = true;
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

  if (!isset_count)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_snapshot)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t HistogramThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("HistogramThrift");

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("snapshot", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->snapshot.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HistogramThrift &a, HistogramThrift &b) {
  using ::std::swap;
  swap(a.count, b.count);
  swap(a.snapshot, b.snapshot);
}

const char* MeteredThrift::ascii_fingerprint = "649D0EC63F3E75D427DC39CC6296303C";
const uint8_t MeteredThrift::binary_fingerprint[16] = {0x64,0x9D,0x0E,0xC6,0x3F,0x3E,0x75,0xD4,0x27,0xDC,0x39,0xCC,0x62,0x96,0x30,0x3C};

uint32_t MeteredThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_count = false;
  bool isset_m15Rate = false;
  bool isset_m5Rate = false;
  bool isset_m1Rate = false;
  bool isset_meanRate = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          isset_count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->m15Rate);
          isset_m15Rate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->m5Rate);
          isset_m5Rate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->m1Rate);
          isset_m1Rate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->meanRate);
          isset_meanRate = true;
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

  if (!isset_count)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_m15Rate)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_m5Rate)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_m1Rate)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_meanRate)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MeteredThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MeteredThrift");

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("m15Rate", ::apache::thrift::protocol::T_DOUBLE, 2);
  xfer += oprot->writeDouble(this->m15Rate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("m5Rate", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->m5Rate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("m1Rate", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->m1Rate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("meanRate", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->meanRate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MeteredThrift &a, MeteredThrift &b) {
  using ::std::swap;
  swap(a.count, b.count);
  swap(a.m15Rate, b.m15Rate);
  swap(a.m5Rate, b.m5Rate);
  swap(a.m1Rate, b.m1Rate);
  swap(a.meanRate, b.meanRate);
}

const char* TimerThrift::ascii_fingerprint = "6A03034C2C9B8F731CB9420297819933";
const uint8_t TimerThrift::binary_fingerprint[16] = {0x6A,0x03,0x03,0x4C,0x2C,0x9B,0x8F,0x73,0x1C,0xB9,0x42,0x02,0x97,0x81,0x99,0x33};

uint32_t TimerThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_count = false;
  bool isset_snapshot = false;
  bool isset_meter = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          isset_count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->snapshot.read(iprot);
          isset_snapshot = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->meter.read(iprot);
          isset_meter = true;
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

  if (!isset_count)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_snapshot)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_meter)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TimerThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TimerThrift");

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("snapshot", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->snapshot.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("meter", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->meter.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TimerThrift &a, TimerThrift &b) {
  using ::std::swap;
  swap(a.count, b.count);
  swap(a.snapshot, b.snapshot);
  swap(a.meter, b.meter);
}

const char* MetricRegistryThrift::ascii_fingerprint = "6589E43B9A96C8EAF8632B4584F0D4C8";
const uint8_t MetricRegistryThrift::binary_fingerprint[16] = {0x65,0x89,0xE4,0x3B,0x9A,0x96,0xC8,0xEA,0xF8,0x63,0x2B,0x45,0x84,0xF0,0xD4,0xC8};

uint32_t MetricRegistryThrift::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_gauges = false;
  bool isset_counters = false;
  bool isset_histograms = false;
  bool isset_meters = false;
  bool isset_timers = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->gauges.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _ktype7;
            ::apache::thrift::protocol::TType _vtype8;
            xfer += iprot->readMapBegin(_ktype7, _vtype8, _size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              std::string _key11;
              xfer += iprot->readString(_key11);
              GaugeThrift& _val12 = this->gauges[_key11];
              xfer += _val12.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_gauges = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->counters.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _ktype14;
            ::apache::thrift::protocol::TType _vtype15;
            xfer += iprot->readMapBegin(_ktype14, _vtype15, _size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              std::string _key18;
              xfer += iprot->readString(_key18);
              CounterThrift& _val19 = this->counters[_key18];
              xfer += _val19.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_counters = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->histograms.clear();
            uint32_t _size20;
            ::apache::thrift::protocol::TType _ktype21;
            ::apache::thrift::protocol::TType _vtype22;
            xfer += iprot->readMapBegin(_ktype21, _vtype22, _size20);
            uint32_t _i24;
            for (_i24 = 0; _i24 < _size20; ++_i24)
            {
              std::string _key25;
              xfer += iprot->readString(_key25);
              HistogramThrift& _val26 = this->histograms[_key25];
              xfer += _val26.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_histograms = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->meters.clear();
            uint32_t _size27;
            ::apache::thrift::protocol::TType _ktype28;
            ::apache::thrift::protocol::TType _vtype29;
            xfer += iprot->readMapBegin(_ktype28, _vtype29, _size27);
            uint32_t _i31;
            for (_i31 = 0; _i31 < _size27; ++_i31)
            {
              std::string _key32;
              xfer += iprot->readString(_key32);
              MeteredThrift& _val33 = this->meters[_key32];
              xfer += _val33.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_meters = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->timers.clear();
            uint32_t _size34;
            ::apache::thrift::protocol::TType _ktype35;
            ::apache::thrift::protocol::TType _vtype36;
            xfer += iprot->readMapBegin(_ktype35, _vtype36, _size34);
            uint32_t _i38;
            for (_i38 = 0; _i38 < _size34; ++_i38)
            {
              std::string _key39;
              xfer += iprot->readString(_key39);
              TimerThrift& _val40 = this->timers[_key39];
              xfer += _val40.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_timers = true;
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

  if (!isset_gauges)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_counters)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_histograms)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_meters)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_timers)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MetricRegistryThrift::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MetricRegistryThrift");

  xfer += oprot->writeFieldBegin("gauges", ::apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->gauges.size()));
    std::map<std::string, GaugeThrift> ::const_iterator _iter41;
    for (_iter41 = this->gauges.begin(); _iter41 != this->gauges.end(); ++_iter41)
    {
      xfer += oprot->writeString(_iter41->first);
      xfer += _iter41->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("counters", ::apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->counters.size()));
    std::map<std::string, CounterThrift> ::const_iterator _iter42;
    for (_iter42 = this->counters.begin(); _iter42 != this->counters.end(); ++_iter42)
    {
      xfer += oprot->writeString(_iter42->first);
      xfer += _iter42->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("histograms", ::apache::thrift::protocol::T_MAP, 3);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->histograms.size()));
    std::map<std::string, HistogramThrift> ::const_iterator _iter43;
    for (_iter43 = this->histograms.begin(); _iter43 != this->histograms.end(); ++_iter43)
    {
      xfer += oprot->writeString(_iter43->first);
      xfer += _iter43->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("meters", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->meters.size()));
    std::map<std::string, MeteredThrift> ::const_iterator _iter44;
    for (_iter44 = this->meters.begin(); _iter44 != this->meters.end(); ++_iter44)
    {
      xfer += oprot->writeString(_iter44->first);
      xfer += _iter44->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timers", ::apache::thrift::protocol::T_MAP, 5);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->timers.size()));
    std::map<std::string, TimerThrift> ::const_iterator _iter45;
    for (_iter45 = this->timers.begin(); _iter45 != this->timers.end(); ++_iter45)
    {
      xfer += oprot->writeString(_iter45->first);
      xfer += _iter45->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MetricRegistryThrift &a, MetricRegistryThrift &b) {
  using ::std::swap;
  swap(a.gauges, b.gauges);
  swap(a.counters, b.counters);
  swap(a.histograms, b.histograms);
  swap(a.meters, b.meters);
  swap(a.timers, b.timers);
}

}}}} // namespace
