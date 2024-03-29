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

public class X509Info implements org.apache.thrift.TBase<X509Info, X509Info._Fields>, java.io.Serializable, Cloneable, Comparable<X509Info> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("X509Info");

  private static final org.apache.thrift.protocol.TField SUBJECT_FIELD_DESC = new org.apache.thrift.protocol.TField("subject", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField ISSUER_FIELD_DESC = new org.apache.thrift.protocol.TField("issuer", org.apache.thrift.protocol.TType.STRING, (short)2);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new X509InfoStandardSchemeFactory());
    schemes.put(TupleScheme.class, new X509InfoTupleSchemeFactory());
  }

  public String subject; // required
  public String issuer; // optional

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    SUBJECT((short)1, "subject"),
    ISSUER((short)2, "issuer");

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
        case 1: // SUBJECT
          return SUBJECT;
        case 2: // ISSUER
          return ISSUER;
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
  private _Fields optionals[] = {_Fields.ISSUER};
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.SUBJECT, new org.apache.thrift.meta_data.FieldMetaData("subject", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.ISSUER, new org.apache.thrift.meta_data.FieldMetaData("issuer", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(X509Info.class, metaDataMap);
  }

  public X509Info() {
  }

  public X509Info(
    String subject)
  {
    this();
    this.subject = subject;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public X509Info(X509Info other) {
    if (other.isSetSubject()) {
      this.subject = other.subject;
    }
    if (other.isSetIssuer()) {
      this.issuer = other.issuer;
    }
  }

  public X509Info deepCopy() {
    return new X509Info(this);
  }

  @Override
  public void clear() {
    this.subject = null;
    this.issuer = null;
  }

  public String getSubject() {
    return this.subject;
  }

  public X509Info setSubject(String subject) {
    this.subject = subject;
    return this;
  }

  public void unsetSubject() {
    this.subject = null;
  }

  /** Returns true if field subject is set (has been assigned a value) and false otherwise */
  public boolean isSetSubject() {
    return this.subject != null;
  }

  public void setSubjectIsSet(boolean value) {
    if (!value) {
      this.subject = null;
    }
  }

  public String getIssuer() {
    return this.issuer;
  }

  public X509Info setIssuer(String issuer) {
    this.issuer = issuer;
    return this;
  }

  public void unsetIssuer() {
    this.issuer = null;
  }

  /** Returns true if field issuer is set (has been assigned a value) and false otherwise */
  public boolean isSetIssuer() {
    return this.issuer != null;
  }

  public void setIssuerIsSet(boolean value) {
    if (!value) {
      this.issuer = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case SUBJECT:
      if (value == null) {
        unsetSubject();
      } else {
        setSubject((String)value);
      }
      break;

    case ISSUER:
      if (value == null) {
        unsetIssuer();
      } else {
        setIssuer((String)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case SUBJECT:
      return getSubject();

    case ISSUER:
      return getIssuer();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case SUBJECT:
      return isSetSubject();
    case ISSUER:
      return isSetIssuer();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof X509Info)
      return this.equals((X509Info)that);
    return false;
  }

  public boolean equals(X509Info that) {
    if (that == null)
      return false;

    boolean this_present_subject = true && this.isSetSubject();
    boolean that_present_subject = true && that.isSetSubject();
    if (this_present_subject || that_present_subject) {
      if (!(this_present_subject && that_present_subject))
        return false;
      if (!this.subject.equals(that.subject))
        return false;
    }

    boolean this_present_issuer = true && this.isSetIssuer();
    boolean that_present_issuer = true && that.isSetIssuer();
    if (this_present_issuer || that_present_issuer) {
      if (!(this_present_issuer && that_present_issuer))
        return false;
      if (!this.issuer.equals(that.issuer))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(X509Info other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetSubject()).compareTo(other.isSetSubject());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSubject()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.subject, other.subject);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetIssuer()).compareTo(other.isSetIssuer());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetIssuer()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.issuer, other.issuer);
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
    StringBuilder sb = new StringBuilder("X509Info(");
    boolean first = true;

    sb.append("subject:");
    if (this.subject == null) {
      sb.append("null");
    } else {
      sb.append(this.subject);
    }
    first = false;
    if (isSetIssuer()) {
      if (!first) sb.append(", ");
      sb.append("issuer:");
      if (this.issuer == null) {
        sb.append("null");
      } else {
        sb.append(this.issuer);
      }
      first = false;
    }
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    if (subject == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'subject' was not present! Struct: " + toString());
    }
    // check for sub-struct validity
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
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class X509InfoStandardSchemeFactory implements SchemeFactory {
    public X509InfoStandardScheme getScheme() {
      return new X509InfoStandardScheme();
    }
  }

  private static class X509InfoStandardScheme extends StandardScheme<X509Info> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, X509Info struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // SUBJECT
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.subject = iprot.readString();
              struct.setSubjectIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // ISSUER
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.issuer = iprot.readString();
              struct.setIssuerIsSet(true);
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
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, X509Info struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.subject != null) {
        oprot.writeFieldBegin(SUBJECT_FIELD_DESC);
        oprot.writeString(struct.subject);
        oprot.writeFieldEnd();
      }
      if (struct.issuer != null) {
        if (struct.isSetIssuer()) {
          oprot.writeFieldBegin(ISSUER_FIELD_DESC);
          oprot.writeString(struct.issuer);
          oprot.writeFieldEnd();
        }
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class X509InfoTupleSchemeFactory implements SchemeFactory {
    public X509InfoTupleScheme getScheme() {
      return new X509InfoTupleScheme();
    }
  }

  private static class X509InfoTupleScheme extends TupleScheme<X509Info> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, X509Info struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeString(struct.subject);
      BitSet optionals = new BitSet();
      if (struct.isSetIssuer()) {
        optionals.set(0);
      }
      oprot.writeBitSet(optionals, 1);
      if (struct.isSetIssuer()) {
        oprot.writeString(struct.issuer);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, X509Info struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.subject = iprot.readString();
      struct.setSubjectIsSet(true);
      BitSet incoming = iprot.readBitSet(1);
      if (incoming.get(0)) {
        struct.issuer = iprot.readString();
        struct.setIssuerIsSet(true);
      }
    }
  }

}

