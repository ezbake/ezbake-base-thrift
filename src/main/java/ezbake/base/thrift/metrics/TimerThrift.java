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
package ezbake.base.thrift.metrics;

import org.apache.thrift.scheme.IScheme;
import org.apache.thrift.scheme.SchemeFactory;
import org.apache.thrift.scheme.StandardScheme;

import org.apache.thrift.scheme.TupleScheme;
import org.apache.thrift.protocol.TTupleProtocol;
import org.apache.thrift.protocol.TProtocolException;
import org.apache.thrift.EncodingUtils;
import org.apache.thrift.TException;
import org.apache.thrift.async.AsyncMethodCallback;
import org.apache.thrift.server.AbstractNonblockingServer.*;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.EnumMap;
import java.util.Set;
import java.util.HashSet;
import java.util.EnumSet;
import java.util.Collections;
import java.util.BitSet;
import java.nio.ByteBuffer;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class TimerThrift implements org.apache.thrift.TBase<TimerThrift, TimerThrift._Fields>, java.io.Serializable, Cloneable, Comparable<TimerThrift> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("TimerThrift");

  private static final org.apache.thrift.protocol.TField COUNT_FIELD_DESC = new org.apache.thrift.protocol.TField("count", org.apache.thrift.protocol.TType.I64, (short)1);
  private static final org.apache.thrift.protocol.TField SNAPSHOT_FIELD_DESC = new org.apache.thrift.protocol.TField("snapshot", org.apache.thrift.protocol.TType.STRUCT, (short)2);
  private static final org.apache.thrift.protocol.TField METER_FIELD_DESC = new org.apache.thrift.protocol.TField("meter", org.apache.thrift.protocol.TType.STRUCT, (short)3);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new TimerThriftStandardSchemeFactory());
    schemes.put(TupleScheme.class, new TimerThriftTupleSchemeFactory());
  }

  public long count; // required
  public SnapShotThrift snapshot; // required
  public MeteredThrift meter; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    COUNT((short)1, "count"),
    SNAPSHOT((short)2, "snapshot"),
    METER((short)3, "meter");

    private static final Map<String, _Fields> byName = new HashMap<String, _Fields>();

    static {
      for (_Fields field : EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // COUNT
          return COUNT;
        case 2: // SNAPSHOT
          return SNAPSHOT;
        case 3: // METER
          return METER;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    public static _Fields findByName(String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final String _fieldName;

    _Fields(short thriftId, String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  private static final int __COUNT_ISSET_ID = 0;
  private byte __isset_bitfield = 0;
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.COUNT, new org.apache.thrift.meta_data.FieldMetaData("count", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I64)));
    tmpMap.put(_Fields.SNAPSHOT, new org.apache.thrift.meta_data.FieldMetaData("snapshot", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, SnapShotThrift.class)));
    tmpMap.put(_Fields.METER, new org.apache.thrift.meta_data.FieldMetaData("meter", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, MeteredThrift.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(TimerThrift.class, metaDataMap);
  }

  public TimerThrift() {
  }

  public TimerThrift(
    long count,
    SnapShotThrift snapshot,
    MeteredThrift meter)
  {
    this();
    this.count = count;
    setCountIsSet(true);
    this.snapshot = snapshot;
    this.meter = meter;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public TimerThrift(TimerThrift other) {
    __isset_bitfield = other.__isset_bitfield;
    this.count = other.count;
    if (other.isSetSnapshot()) {
      this.snapshot = new SnapShotThrift(other.snapshot);
    }
    if (other.isSetMeter()) {
      this.meter = new MeteredThrift(other.meter);
    }
  }

  public TimerThrift deepCopy() {
    return new TimerThrift(this);
  }

  @Override
  public void clear() {
    setCountIsSet(false);
    this.count = 0;
    this.snapshot = null;
    this.meter = null;
  }

  public long getCount() {
    return this.count;
  }

  public TimerThrift setCount(long count) {
    this.count = count;
    setCountIsSet(true);
    return this;
  }

  public void unsetCount() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __COUNT_ISSET_ID);
  }

  /** Returns true if field count is set (has been assigned a value) and false otherwise */
  public boolean isSetCount() {
    return EncodingUtils.testBit(__isset_bitfield, __COUNT_ISSET_ID);
  }

  public void setCountIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __COUNT_ISSET_ID, value);
  }

  public SnapShotThrift getSnapshot() {
    return this.snapshot;
  }

  public TimerThrift setSnapshot(SnapShotThrift snapshot) {
    this.snapshot = snapshot;
    return this;
  }

  public void unsetSnapshot() {
    this.snapshot = null;
  }

  /** Returns true if field snapshot is set (has been assigned a value) and false otherwise */
  public boolean isSetSnapshot() {
    return this.snapshot != null;
  }

  public void setSnapshotIsSet(boolean value) {
    if (!value) {
      this.snapshot = null;
    }
  }

  public MeteredThrift getMeter() {
    return this.meter;
  }

  public TimerThrift setMeter(MeteredThrift meter) {
    this.meter = meter;
    return this;
  }

  public void unsetMeter() {
    this.meter = null;
  }

  /** Returns true if field meter is set (has been assigned a value) and false otherwise */
  public boolean isSetMeter() {
    return this.meter != null;
  }

  public void setMeterIsSet(boolean value) {
    if (!value) {
      this.meter = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case COUNT:
      if (value == null) {
        unsetCount();
      } else {
        setCount((Long)value);
      }
      break;

    case SNAPSHOT:
      if (value == null) {
        unsetSnapshot();
      } else {
        setSnapshot((SnapShotThrift)value);
      }
      break;

    case METER:
      if (value == null) {
        unsetMeter();
      } else {
        setMeter((MeteredThrift)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case COUNT:
      return Long.valueOf(getCount());

    case SNAPSHOT:
      return getSnapshot();

    case METER:
      return getMeter();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case COUNT:
      return isSetCount();
    case SNAPSHOT:
      return isSetSnapshot();
    case METER:
      return isSetMeter();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof TimerThrift)
      return this.equals((TimerThrift)that);
    return false;
  }

  public boolean equals(TimerThrift that) {
    if (that == null)
      return false;

    boolean this_present_count = true;
    boolean that_present_count = true;
    if (this_present_count || that_present_count) {
      if (!(this_present_count && that_present_count))
        return false;
      if (this.count != that.count)
        return false;
    }

    boolean this_present_snapshot = true && this.isSetSnapshot();
    boolean that_present_snapshot = true && that.isSetSnapshot();
    if (this_present_snapshot || that_present_snapshot) {
      if (!(this_present_snapshot && that_present_snapshot))
        return false;
      if (!this.snapshot.equals(that.snapshot))
        return false;
    }

    boolean this_present_meter = true && this.isSetMeter();
    boolean that_present_meter = true && that.isSetMeter();
    if (this_present_meter || that_present_meter) {
      if (!(this_present_meter && that_present_meter))
        return false;
      if (!this.meter.equals(that.meter))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(TimerThrift other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetCount()).compareTo(other.isSetCount());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCount()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.count, other.count);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetSnapshot()).compareTo(other.isSetSnapshot());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSnapshot()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.snapshot, other.snapshot);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetMeter()).compareTo(other.isSetMeter());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMeter()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.meter, other.meter);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    schemes.get(iprot.getScheme()).getScheme().read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    schemes.get(oprot.getScheme()).getScheme().write(oprot, this);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder("TimerThrift(");
    boolean first = true;

    sb.append("count:");
    sb.append(this.count);
    first = false;
    if (!first) sb.append(", ");
    sb.append("snapshot:");
    if (this.snapshot == null) {
      sb.append("null");
    } else {
      sb.append(this.snapshot);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("meter:");
    if (this.meter == null) {
      sb.append("null");
    } else {
      sb.append(this.meter);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // alas, we cannot check 'count' because it's a primitive and you chose the non-beans generator.
    if (snapshot == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'snapshot' was not present! Struct: " + toString());
    }
    if (meter == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'meter' was not present! Struct: " + toString());
    }
    // check for sub-struct validity
    if (snapshot != null) {
      snapshot.validate();
    }
    if (meter != null) {
      meter.validate();
    }
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, ClassNotFoundException {
    try {
      // it doesn't seem like you should have to do this, but java serialization is wacky, and doesn't call the default constructor.
      __isset_bitfield = 0;
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class TimerThriftStandardSchemeFactory implements SchemeFactory {
    public TimerThriftStandardScheme getScheme() {
      return new TimerThriftStandardScheme();
    }
  }

  private static class TimerThriftStandardScheme extends StandardScheme<TimerThrift> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, TimerThrift struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // COUNT
            if (schemeField.type == org.apache.thrift.protocol.TType.I64) {
              struct.count = iprot.readI64();
              struct.setCountIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // SNAPSHOT
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.snapshot = new SnapShotThrift();
              struct.snapshot.read(iprot);
              struct.setSnapshotIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // METER
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.meter = new MeteredThrift();
              struct.meter.read(iprot);
              struct.setMeterIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      // check for required fields of primitive type, which can't be checked in the validate method
      if (!struct.isSetCount()) {
        throw new org.apache.thrift.protocol.TProtocolException("Required field 'count' was not found in serialized data! Struct: " + toString());
      }
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, TimerThrift struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(COUNT_FIELD_DESC);
      oprot.writeI64(struct.count);
      oprot.writeFieldEnd();
      if (struct.snapshot != null) {
        oprot.writeFieldBegin(SNAPSHOT_FIELD_DESC);
        struct.snapshot.write(oprot);
        oprot.writeFieldEnd();
      }
      if (struct.meter != null) {
        oprot.writeFieldBegin(METER_FIELD_DESC);
        struct.meter.write(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class TimerThriftTupleSchemeFactory implements SchemeFactory {
    public TimerThriftTupleScheme getScheme() {
      return new TimerThriftTupleScheme();
    }
  }

  private static class TimerThriftTupleScheme extends TupleScheme<TimerThrift> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, TimerThrift struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeI64(struct.count);
      struct.snapshot.write(oprot);
      struct.meter.write(oprot);
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, TimerThrift struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.count = iprot.readI64();
      struct.setCountIsSet(true);
      struct.snapshot = new SnapShotThrift();
      struct.snapshot.read(iprot);
      struct.setSnapshotIsSet(true);
      struct.meter = new MeteredThrift();
      struct.meter.read(iprot);
      struct.setMeterIsSet(true);
    }
  }

}

