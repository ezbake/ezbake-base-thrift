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
package ezbake.base.thrift;

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

public class Time implements org.apache.thrift.TBase<Time, Time._Fields>, java.io.Serializable, Cloneable, Comparable<Time> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("Time");

  private static final org.apache.thrift.protocol.TField HOUR_FIELD_DESC = new org.apache.thrift.protocol.TField("hour", org.apache.thrift.protocol.TType.I16, (short)1);
  private static final org.apache.thrift.protocol.TField MINUTE_FIELD_DESC = new org.apache.thrift.protocol.TField("minute", org.apache.thrift.protocol.TType.I16, (short)2);
  private static final org.apache.thrift.protocol.TField SECOND_FIELD_DESC = new org.apache.thrift.protocol.TField("second", org.apache.thrift.protocol.TType.I16, (short)3);
  private static final org.apache.thrift.protocol.TField MILLISECOND_FIELD_DESC = new org.apache.thrift.protocol.TField("millisecond", org.apache.thrift.protocol.TType.I16, (short)4);
  private static final org.apache.thrift.protocol.TField TZ_FIELD_DESC = new org.apache.thrift.protocol.TField("tz", org.apache.thrift.protocol.TType.STRUCT, (short)5);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new TimeStandardSchemeFactory());
    schemes.put(TupleScheme.class, new TimeTupleSchemeFactory());
  }

  public short hour; // required
  public short minute; // required
  public short second; // optional
  public short millisecond; // optional
  public TimeZone tz; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    HOUR((short)1, "hour"),
    MINUTE((short)2, "minute"),
    SECOND((short)3, "second"),
    MILLISECOND((short)4, "millisecond"),
    TZ((short)5, "tz");

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
        case 1: // HOUR
          return HOUR;
        case 2: // MINUTE
          return MINUTE;
        case 3: // SECOND
          return SECOND;
        case 4: // MILLISECOND
          return MILLISECOND;
        case 5: // TZ
          return TZ;
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
  private static final int __HOUR_ISSET_ID = 0;
  private static final int __MINUTE_ISSET_ID = 1;
  private static final int __SECOND_ISSET_ID = 2;
  private static final int __MILLISECOND_ISSET_ID = 3;
  private byte __isset_bitfield = 0;
  private _Fields optionals[] = {_Fields.SECOND,_Fields.MILLISECOND};
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.HOUR, new org.apache.thrift.meta_data.FieldMetaData("hour", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I16)));
    tmpMap.put(_Fields.MINUTE, new org.apache.thrift.meta_data.FieldMetaData("minute", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I16)));
    tmpMap.put(_Fields.SECOND, new org.apache.thrift.meta_data.FieldMetaData("second", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I16)));
    tmpMap.put(_Fields.MILLISECOND, new org.apache.thrift.meta_data.FieldMetaData("millisecond", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I16)));
    tmpMap.put(_Fields.TZ, new org.apache.thrift.meta_data.FieldMetaData("tz", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, TimeZone.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(Time.class, metaDataMap);
  }

  public Time() {
  }

  public Time(
    short hour,
    short minute,
    TimeZone tz)
  {
    this();
    this.hour = hour;
    setHourIsSet(true);
    this.minute = minute;
    setMinuteIsSet(true);
    this.tz = tz;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Time(Time other) {
    __isset_bitfield = other.__isset_bitfield;
    this.hour = other.hour;
    this.minute = other.minute;
    this.second = other.second;
    this.millisecond = other.millisecond;
    if (other.isSetTz()) {
      this.tz = new TimeZone(other.tz);
    }
  }

  public Time deepCopy() {
    return new Time(this);
  }

  @Override
  public void clear() {
    setHourIsSet(false);
    this.hour = 0;
    setMinuteIsSet(false);
    this.minute = 0;
    setSecondIsSet(false);
    this.second = 0;
    setMillisecondIsSet(false);
    this.millisecond = 0;
    this.tz = null;
  }

  public short getHour() {
    return this.hour;
  }

  public Time setHour(short hour) {
    this.hour = hour;
    setHourIsSet(true);
    return this;
  }

  public void unsetHour() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __HOUR_ISSET_ID);
  }

  /** Returns true if field hour is set (has been assigned a value) and false otherwise */
  public boolean isSetHour() {
    return EncodingUtils.testBit(__isset_bitfield, __HOUR_ISSET_ID);
  }

  public void setHourIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __HOUR_ISSET_ID, value);
  }

  public short getMinute() {
    return this.minute;
  }

  public Time setMinute(short minute) {
    this.minute = minute;
    setMinuteIsSet(true);
    return this;
  }

  public void unsetMinute() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __MINUTE_ISSET_ID);
  }

  /** Returns true if field minute is set (has been assigned a value) and false otherwise */
  public boolean isSetMinute() {
    return EncodingUtils.testBit(__isset_bitfield, __MINUTE_ISSET_ID);
  }

  public void setMinuteIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __MINUTE_ISSET_ID, value);
  }

  public short getSecond() {
    return this.second;
  }

  public Time setSecond(short second) {
    this.second = second;
    setSecondIsSet(true);
    return this;
  }

  public void unsetSecond() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __SECOND_ISSET_ID);
  }

  /** Returns true if field second is set (has been assigned a value) and false otherwise */
  public boolean isSetSecond() {
    return EncodingUtils.testBit(__isset_bitfield, __SECOND_ISSET_ID);
  }

  public void setSecondIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __SECOND_ISSET_ID, value);
  }

  public short getMillisecond() {
    return this.millisecond;
  }

  public Time setMillisecond(short millisecond) {
    this.millisecond = millisecond;
    setMillisecondIsSet(true);
    return this;
  }

  public void unsetMillisecond() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __MILLISECOND_ISSET_ID);
  }

  /** Returns true if field millisecond is set (has been assigned a value) and false otherwise */
  public boolean isSetMillisecond() {
    return EncodingUtils.testBit(__isset_bitfield, __MILLISECOND_ISSET_ID);
  }

  public void setMillisecondIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __MILLISECOND_ISSET_ID, value);
  }

  public TimeZone getTz() {
    return this.tz;
  }

  public Time setTz(TimeZone tz) {
    this.tz = tz;
    return this;
  }

  public void unsetTz() {
    this.tz = null;
  }

  /** Returns true if field tz is set (has been assigned a value) and false otherwise */
  public boolean isSetTz() {
    return this.tz != null;
  }

  public void setTzIsSet(boolean value) {
    if (!value) {
      this.tz = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case HOUR:
      if (value == null) {
        unsetHour();
      } else {
        setHour((Short)value);
      }
      break;

    case MINUTE:
      if (value == null) {
        unsetMinute();
      } else {
        setMinute((Short)value);
      }
      break;

    case SECOND:
      if (value == null) {
        unsetSecond();
      } else {
        setSecond((Short)value);
      }
      break;

    case MILLISECOND:
      if (value == null) {
        unsetMillisecond();
      } else {
        setMillisecond((Short)value);
      }
      break;

    case TZ:
      if (value == null) {
        unsetTz();
      } else {
        setTz((TimeZone)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case HOUR:
      return Short.valueOf(getHour());

    case MINUTE:
      return Short.valueOf(getMinute());

    case SECOND:
      return Short.valueOf(getSecond());

    case MILLISECOND:
      return Short.valueOf(getMillisecond());

    case TZ:
      return getTz();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case HOUR:
      return isSetHour();
    case MINUTE:
      return isSetMinute();
    case SECOND:
      return isSetSecond();
    case MILLISECOND:
      return isSetMillisecond();
    case TZ:
      return isSetTz();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof Time)
      return this.equals((Time)that);
    return false;
  }

  public boolean equals(Time that) {
    if (that == null)
      return false;

    boolean this_present_hour = true;
    boolean that_present_hour = true;
    if (this_present_hour || that_present_hour) {
      if (!(this_present_hour && that_present_hour))
        return false;
      if (this.hour != that.hour)
        return false;
    }

    boolean this_present_minute = true;
    boolean that_present_minute = true;
    if (this_present_minute || that_present_minute) {
      if (!(this_present_minute && that_present_minute))
        return false;
      if (this.minute != that.minute)
        return false;
    }

    boolean this_present_second = true && this.isSetSecond();
    boolean that_present_second = true && that.isSetSecond();
    if (this_present_second || that_present_second) {
      if (!(this_present_second && that_present_second))
        return false;
      if (this.second != that.second)
        return false;
    }

    boolean this_present_millisecond = true && this.isSetMillisecond();
    boolean that_present_millisecond = true && that.isSetMillisecond();
    if (this_present_millisecond || that_present_millisecond) {
      if (!(this_present_millisecond && that_present_millisecond))
        return false;
      if (this.millisecond != that.millisecond)
        return false;
    }

    boolean this_present_tz = true && this.isSetTz();
    boolean that_present_tz = true && that.isSetTz();
    if (this_present_tz || that_present_tz) {
      if (!(this_present_tz && that_present_tz))
        return false;
      if (!this.tz.equals(that.tz))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(Time other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetHour()).compareTo(other.isSetHour());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetHour()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.hour, other.hour);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetMinute()).compareTo(other.isSetMinute());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMinute()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.minute, other.minute);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetSecond()).compareTo(other.isSetSecond());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSecond()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.second, other.second);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetMillisecond()).compareTo(other.isSetMillisecond());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMillisecond()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.millisecond, other.millisecond);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetTz()).compareTo(other.isSetTz());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetTz()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.tz, other.tz);
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
    StringBuilder sb = new StringBuilder("Time(");
    boolean first = true;

    sb.append("hour:");
    sb.append(this.hour);
    first = false;
    if (!first) sb.append(", ");
    sb.append("minute:");
    sb.append(this.minute);
    first = false;
    if (isSetSecond()) {
      if (!first) sb.append(", ");
      sb.append("second:");
      sb.append(this.second);
      first = false;
    }
    if (isSetMillisecond()) {
      if (!first) sb.append(", ");
      sb.append("millisecond:");
      sb.append(this.millisecond);
      first = false;
    }
    if (!first) sb.append(", ");
    sb.append("tz:");
    if (this.tz == null) {
      sb.append("null");
    } else {
      sb.append(this.tz);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // alas, we cannot check 'hour' because it's a primitive and you chose the non-beans generator.
    // alas, we cannot check 'minute' because it's a primitive and you chose the non-beans generator.
    if (tz == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'tz' was not present! Struct: " + toString());
    }
    // check for sub-struct validity
    if (tz != null) {
      tz.validate();
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

  private static class TimeStandardSchemeFactory implements SchemeFactory {
    public TimeStandardScheme getScheme() {
      return new TimeStandardScheme();
    }
  }

  private static class TimeStandardScheme extends StandardScheme<Time> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, Time struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // HOUR
            if (schemeField.type == org.apache.thrift.protocol.TType.I16) {
              struct.hour = iprot.readI16();
              struct.setHourIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // MINUTE
            if (schemeField.type == org.apache.thrift.protocol.TType.I16) {
              struct.minute = iprot.readI16();
              struct.setMinuteIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // SECOND
            if (schemeField.type == org.apache.thrift.protocol.TType.I16) {
              struct.second = iprot.readI16();
              struct.setSecondIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // MILLISECOND
            if (schemeField.type == org.apache.thrift.protocol.TType.I16) {
              struct.millisecond = iprot.readI16();
              struct.setMillisecondIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // TZ
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.tz = new TimeZone();
              struct.tz.read(iprot);
              struct.setTzIsSet(true);
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
      if (!struct.isSetHour()) {
        throw new org.apache.thrift.protocol.TProtocolException("Required field 'hour' was not found in serialized data! Struct: " + toString());
      }
      if (!struct.isSetMinute()) {
        throw new org.apache.thrift.protocol.TProtocolException("Required field 'minute' was not found in serialized data! Struct: " + toString());
      }
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, Time struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(HOUR_FIELD_DESC);
      oprot.writeI16(struct.hour);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(MINUTE_FIELD_DESC);
      oprot.writeI16(struct.minute);
      oprot.writeFieldEnd();
      if (struct.isSetSecond()) {
        oprot.writeFieldBegin(SECOND_FIELD_DESC);
        oprot.writeI16(struct.second);
        oprot.writeFieldEnd();
      }
      if (struct.isSetMillisecond()) {
        oprot.writeFieldBegin(MILLISECOND_FIELD_DESC);
        oprot.writeI16(struct.millisecond);
        oprot.writeFieldEnd();
      }
      if (struct.tz != null) {
        oprot.writeFieldBegin(TZ_FIELD_DESC);
        struct.tz.write(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class TimeTupleSchemeFactory implements SchemeFactory {
    public TimeTupleScheme getScheme() {
      return new TimeTupleScheme();
    }
  }

  private static class TimeTupleScheme extends TupleScheme<Time> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, Time struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeI16(struct.hour);
      oprot.writeI16(struct.minute);
      struct.tz.write(oprot);
      BitSet optionals = new BitSet();
      if (struct.isSetSecond()) {
        optionals.set(0);
      }
      if (struct.isSetMillisecond()) {
        optionals.set(1);
      }
      oprot.writeBitSet(optionals, 2);
      if (struct.isSetSecond()) {
        oprot.writeI16(struct.second);
      }
      if (struct.isSetMillisecond()) {
        oprot.writeI16(struct.millisecond);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, Time struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.hour = iprot.readI16();
      struct.setHourIsSet(true);
      struct.minute = iprot.readI16();
      struct.setMinuteIsSet(true);
      struct.tz = new TimeZone();
      struct.tz.read(iprot);
      struct.setTzIsSet(true);
      BitSet incoming = iprot.readBitSet(2);
      if (incoming.get(0)) {
        struct.second = iprot.readI16();
        struct.setSecondIsSet(true);
      }
      if (incoming.get(1)) {
        struct.millisecond = iprot.readI16();
        struct.setMillisecondIsSet(true);
      }
    }
  }

}

