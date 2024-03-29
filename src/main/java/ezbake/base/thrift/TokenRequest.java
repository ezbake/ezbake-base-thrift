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

public class TokenRequest implements org.apache.thrift.TBase<TokenRequest, TokenRequest._Fields>, java.io.Serializable, Cloneable, Comparable<TokenRequest> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("TokenRequest");

  private static final org.apache.thrift.protocol.TField SECURITY_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("securityId", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField TARGET_SECURITY_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("targetSecurityId", org.apache.thrift.protocol.TType.STRING, (short)2);
  private static final org.apache.thrift.protocol.TField TIMESTAMP_FIELD_DESC = new org.apache.thrift.protocol.TField("timestamp", org.apache.thrift.protocol.TType.I64, (short)3);
  private static final org.apache.thrift.protocol.TField TYPE_FIELD_DESC = new org.apache.thrift.protocol.TField("type", org.apache.thrift.protocol.TType.I32, (short)5);
  private static final org.apache.thrift.protocol.TField CAVEATS_FIELD_DESC = new org.apache.thrift.protocol.TField("caveats", org.apache.thrift.protocol.TType.STRUCT, (short)6);
  private static final org.apache.thrift.protocol.TField PROXY_PRINCIPAL_FIELD_DESC = new org.apache.thrift.protocol.TField("proxyPrincipal", org.apache.thrift.protocol.TType.STRUCT, (short)10);
  private static final org.apache.thrift.protocol.TField TOKEN_PRINCIPAL_FIELD_DESC = new org.apache.thrift.protocol.TField("tokenPrincipal", org.apache.thrift.protocol.TType.STRUCT, (short)11);
  private static final org.apache.thrift.protocol.TField PRINCIPAL_FIELD_DESC = new org.apache.thrift.protocol.TField("principal", org.apache.thrift.protocol.TType.STRUCT, (short)12);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new TokenRequestStandardSchemeFactory());
    schemes.put(TupleScheme.class, new TokenRequestTupleSchemeFactory());
  }

  public String securityId; // required
  public String targetSecurityId; // optional
  public long timestamp; // required
  /**
   * 
   * @see TokenType
   */
  public TokenType type; // required
  public ValidityCaveats caveats; // optional
  public ProxyPrincipal proxyPrincipal; // optional
  public EzSecurityToken tokenPrincipal; // optional
  public EzSecurityPrincipal principal; // optional

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    SECURITY_ID((short)1, "securityId"),
    TARGET_SECURITY_ID((short)2, "targetSecurityId"),
    TIMESTAMP((short)3, "timestamp"),
    /**
     * 
     * @see TokenType
     */
    TYPE((short)5, "type"),
    CAVEATS((short)6, "caveats"),
    PROXY_PRINCIPAL((short)10, "proxyPrincipal"),
    TOKEN_PRINCIPAL((short)11, "tokenPrincipal"),
    PRINCIPAL((short)12, "principal");

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
        case 1: // SECURITY_ID
          return SECURITY_ID;
        case 2: // TARGET_SECURITY_ID
          return TARGET_SECURITY_ID;
        case 3: // TIMESTAMP
          return TIMESTAMP;
        case 5: // TYPE
          return TYPE;
        case 6: // CAVEATS
          return CAVEATS;
        case 10: // PROXY_PRINCIPAL
          return PROXY_PRINCIPAL;
        case 11: // TOKEN_PRINCIPAL
          return TOKEN_PRINCIPAL;
        case 12: // PRINCIPAL
          return PRINCIPAL;
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
  private static final int __TIMESTAMP_ISSET_ID = 0;
  private byte __isset_bitfield = 0;
  private _Fields optionals[] = {_Fields.TARGET_SECURITY_ID,_Fields.CAVEATS,_Fields.PROXY_PRINCIPAL,_Fields.TOKEN_PRINCIPAL,_Fields.PRINCIPAL};
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.SECURITY_ID, new org.apache.thrift.meta_data.FieldMetaData("securityId", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.TARGET_SECURITY_ID, new org.apache.thrift.meta_data.FieldMetaData("targetSecurityId", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.TIMESTAMP, new org.apache.thrift.meta_data.FieldMetaData("timestamp", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I64)));
    tmpMap.put(_Fields.TYPE, new org.apache.thrift.meta_data.FieldMetaData("type", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.EnumMetaData(org.apache.thrift.protocol.TType.ENUM, TokenType.class)));
    tmpMap.put(_Fields.CAVEATS, new org.apache.thrift.meta_data.FieldMetaData("caveats", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, ValidityCaveats.class)));
    tmpMap.put(_Fields.PROXY_PRINCIPAL, new org.apache.thrift.meta_data.FieldMetaData("proxyPrincipal", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, ProxyPrincipal.class)));
    tmpMap.put(_Fields.TOKEN_PRINCIPAL, new org.apache.thrift.meta_data.FieldMetaData("tokenPrincipal", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, EzSecurityToken.class)));
    tmpMap.put(_Fields.PRINCIPAL, new org.apache.thrift.meta_data.FieldMetaData("principal", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, EzSecurityPrincipal.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(TokenRequest.class, metaDataMap);
  }

  public TokenRequest() {
    this.type = ezbake.base.thrift.TokenType.USER;

  }

  public TokenRequest(
    String securityId,
    long timestamp,
    TokenType type)
  {
    this();
    this.securityId = securityId;
    this.timestamp = timestamp;
    setTimestampIsSet(true);
    this.type = type;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public TokenRequest(TokenRequest other) {
    __isset_bitfield = other.__isset_bitfield;
    if (other.isSetSecurityId()) {
      this.securityId = other.securityId;
    }
    if (other.isSetTargetSecurityId()) {
      this.targetSecurityId = other.targetSecurityId;
    }
    this.timestamp = other.timestamp;
    if (other.isSetType()) {
      this.type = other.type;
    }
    if (other.isSetCaveats()) {
      this.caveats = new ValidityCaveats(other.caveats);
    }
    if (other.isSetProxyPrincipal()) {
      this.proxyPrincipal = new ProxyPrincipal(other.proxyPrincipal);
    }
    if (other.isSetTokenPrincipal()) {
      this.tokenPrincipal = new EzSecurityToken(other.tokenPrincipal);
    }
    if (other.isSetPrincipal()) {
      this.principal = new EzSecurityPrincipal(other.principal);
    }
  }

  public TokenRequest deepCopy() {
    return new TokenRequest(this);
  }

  @Override
  public void clear() {
    this.securityId = null;
    this.targetSecurityId = null;
    setTimestampIsSet(false);
    this.timestamp = 0;
    this.type = ezbake.base.thrift.TokenType.USER;

    this.caveats = null;
    this.proxyPrincipal = null;
    this.tokenPrincipal = null;
    this.principal = null;
  }

  public String getSecurityId() {
    return this.securityId;
  }

  public TokenRequest setSecurityId(String securityId) {
    this.securityId = securityId;
    return this;
  }

  public void unsetSecurityId() {
    this.securityId = null;
  }

  /** Returns true if field securityId is set (has been assigned a value) and false otherwise */
  public boolean isSetSecurityId() {
    return this.securityId != null;
  }

  public void setSecurityIdIsSet(boolean value) {
    if (!value) {
      this.securityId = null;
    }
  }

  public String getTargetSecurityId() {
    return this.targetSecurityId;
  }

  public TokenRequest setTargetSecurityId(String targetSecurityId) {
    this.targetSecurityId = targetSecurityId;
    return this;
  }

  public void unsetTargetSecurityId() {
    this.targetSecurityId = null;
  }

  /** Returns true if field targetSecurityId is set (has been assigned a value) and false otherwise */
  public boolean isSetTargetSecurityId() {
    return this.targetSecurityId != null;
  }

  public void setTargetSecurityIdIsSet(boolean value) {
    if (!value) {
      this.targetSecurityId = null;
    }
  }

  public long getTimestamp() {
    return this.timestamp;
  }

  public TokenRequest setTimestamp(long timestamp) {
    this.timestamp = timestamp;
    setTimestampIsSet(true);
    return this;
  }

  public void unsetTimestamp() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __TIMESTAMP_ISSET_ID);
  }

  /** Returns true if field timestamp is set (has been assigned a value) and false otherwise */
  public boolean isSetTimestamp() {
    return EncodingUtils.testBit(__isset_bitfield, __TIMESTAMP_ISSET_ID);
  }

  public void setTimestampIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __TIMESTAMP_ISSET_ID, value);
  }

  /**
   * 
   * @see TokenType
   */
  public TokenType getType() {
    return this.type;
  }

  /**
   * 
   * @see TokenType
   */
  public TokenRequest setType(TokenType type) {
    this.type = type;
    return this;
  }

  public void unsetType() {
    this.type = null;
  }

  /** Returns true if field type is set (has been assigned a value) and false otherwise */
  public boolean isSetType() {
    return this.type != null;
  }

  public void setTypeIsSet(boolean value) {
    if (!value) {
      this.type = null;
    }
  }

  public ValidityCaveats getCaveats() {
    return this.caveats;
  }

  public TokenRequest setCaveats(ValidityCaveats caveats) {
    this.caveats = caveats;
    return this;
  }

  public void unsetCaveats() {
    this.caveats = null;
  }

  /** Returns true if field caveats is set (has been assigned a value) and false otherwise */
  public boolean isSetCaveats() {
    return this.caveats != null;
  }

  public void setCaveatsIsSet(boolean value) {
    if (!value) {
      this.caveats = null;
    }
  }

  public ProxyPrincipal getProxyPrincipal() {
    return this.proxyPrincipal;
  }

  public TokenRequest setProxyPrincipal(ProxyPrincipal proxyPrincipal) {
    this.proxyPrincipal = proxyPrincipal;
    return this;
  }

  public void unsetProxyPrincipal() {
    this.proxyPrincipal = null;
  }

  /** Returns true if field proxyPrincipal is set (has been assigned a value) and false otherwise */
  public boolean isSetProxyPrincipal() {
    return this.proxyPrincipal != null;
  }

  public void setProxyPrincipalIsSet(boolean value) {
    if (!value) {
      this.proxyPrincipal = null;
    }
  }

  public EzSecurityToken getTokenPrincipal() {
    return this.tokenPrincipal;
  }

  public TokenRequest setTokenPrincipal(EzSecurityToken tokenPrincipal) {
    this.tokenPrincipal = tokenPrincipal;
    return this;
  }

  public void unsetTokenPrincipal() {
    this.tokenPrincipal = null;
  }

  /** Returns true if field tokenPrincipal is set (has been assigned a value) and false otherwise */
  public boolean isSetTokenPrincipal() {
    return this.tokenPrincipal != null;
  }

  public void setTokenPrincipalIsSet(boolean value) {
    if (!value) {
      this.tokenPrincipal = null;
    }
  }

  public EzSecurityPrincipal getPrincipal() {
    return this.principal;
  }

  public TokenRequest setPrincipal(EzSecurityPrincipal principal) {
    this.principal = principal;
    return this;
  }

  public void unsetPrincipal() {
    this.principal = null;
  }

  /** Returns true if field principal is set (has been assigned a value) and false otherwise */
  public boolean isSetPrincipal() {
    return this.principal != null;
  }

  public void setPrincipalIsSet(boolean value) {
    if (!value) {
      this.principal = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case SECURITY_ID:
      if (value == null) {
        unsetSecurityId();
      } else {
        setSecurityId((String)value);
      }
      break;

    case TARGET_SECURITY_ID:
      if (value == null) {
        unsetTargetSecurityId();
      } else {
        setTargetSecurityId((String)value);
      }
      break;

    case TIMESTAMP:
      if (value == null) {
        unsetTimestamp();
      } else {
        setTimestamp((Long)value);
      }
      break;

    case TYPE:
      if (value == null) {
        unsetType();
      } else {
        setType((TokenType)value);
      }
      break;

    case CAVEATS:
      if (value == null) {
        unsetCaveats();
      } else {
        setCaveats((ValidityCaveats)value);
      }
      break;

    case PROXY_PRINCIPAL:
      if (value == null) {
        unsetProxyPrincipal();
      } else {
        setProxyPrincipal((ProxyPrincipal)value);
      }
      break;

    case TOKEN_PRINCIPAL:
      if (value == null) {
        unsetTokenPrincipal();
      } else {
        setTokenPrincipal((EzSecurityToken)value);
      }
      break;

    case PRINCIPAL:
      if (value == null) {
        unsetPrincipal();
      } else {
        setPrincipal((EzSecurityPrincipal)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case SECURITY_ID:
      return getSecurityId();

    case TARGET_SECURITY_ID:
      return getTargetSecurityId();

    case TIMESTAMP:
      return Long.valueOf(getTimestamp());

    case TYPE:
      return getType();

    case CAVEATS:
      return getCaveats();

    case PROXY_PRINCIPAL:
      return getProxyPrincipal();

    case TOKEN_PRINCIPAL:
      return getTokenPrincipal();

    case PRINCIPAL:
      return getPrincipal();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case SECURITY_ID:
      return isSetSecurityId();
    case TARGET_SECURITY_ID:
      return isSetTargetSecurityId();
    case TIMESTAMP:
      return isSetTimestamp();
    case TYPE:
      return isSetType();
    case CAVEATS:
      return isSetCaveats();
    case PROXY_PRINCIPAL:
      return isSetProxyPrincipal();
    case TOKEN_PRINCIPAL:
      return isSetTokenPrincipal();
    case PRINCIPAL:
      return isSetPrincipal();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof TokenRequest)
      return this.equals((TokenRequest)that);
    return false;
  }

  public boolean equals(TokenRequest that) {
    if (that == null)
      return false;

    boolean this_present_securityId = true && this.isSetSecurityId();
    boolean that_present_securityId = true && that.isSetSecurityId();
    if (this_present_securityId || that_present_securityId) {
      if (!(this_present_securityId && that_present_securityId))
        return false;
      if (!this.securityId.equals(that.securityId))
        return false;
    }

    boolean this_present_targetSecurityId = true && this.isSetTargetSecurityId();
    boolean that_present_targetSecurityId = true && that.isSetTargetSecurityId();
    if (this_present_targetSecurityId || that_present_targetSecurityId) {
      if (!(this_present_targetSecurityId && that_present_targetSecurityId))
        return false;
      if (!this.targetSecurityId.equals(that.targetSecurityId))
        return false;
    }

    boolean this_present_timestamp = true;
    boolean that_present_timestamp = true;
    if (this_present_timestamp || that_present_timestamp) {
      if (!(this_present_timestamp && that_present_timestamp))
        return false;
      if (this.timestamp != that.timestamp)
        return false;
    }

    boolean this_present_type = true && this.isSetType();
    boolean that_present_type = true && that.isSetType();
    if (this_present_type || that_present_type) {
      if (!(this_present_type && that_present_type))
        return false;
      if (!this.type.equals(that.type))
        return false;
    }

    boolean this_present_caveats = true && this.isSetCaveats();
    boolean that_present_caveats = true && that.isSetCaveats();
    if (this_present_caveats || that_present_caveats) {
      if (!(this_present_caveats && that_present_caveats))
        return false;
      if (!this.caveats.equals(that.caveats))
        return false;
    }

    boolean this_present_proxyPrincipal = true && this.isSetProxyPrincipal();
    boolean that_present_proxyPrincipal = true && that.isSetProxyPrincipal();
    if (this_present_proxyPrincipal || that_present_proxyPrincipal) {
      if (!(this_present_proxyPrincipal && that_present_proxyPrincipal))
        return false;
      if (!this.proxyPrincipal.equals(that.proxyPrincipal))
        return false;
    }

    boolean this_present_tokenPrincipal = true && this.isSetTokenPrincipal();
    boolean that_present_tokenPrincipal = true && that.isSetTokenPrincipal();
    if (this_present_tokenPrincipal || that_present_tokenPrincipal) {
      if (!(this_present_tokenPrincipal && that_present_tokenPrincipal))
        return false;
      if (!this.tokenPrincipal.equals(that.tokenPrincipal))
        return false;
    }

    boolean this_present_principal = true && this.isSetPrincipal();
    boolean that_present_principal = true && that.isSetPrincipal();
    if (this_present_principal || that_present_principal) {
      if (!(this_present_principal && that_present_principal))
        return false;
      if (!this.principal.equals(that.principal))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(TokenRequest other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetSecurityId()).compareTo(other.isSetSecurityId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSecurityId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.securityId, other.securityId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetTargetSecurityId()).compareTo(other.isSetTargetSecurityId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetTargetSecurityId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.targetSecurityId, other.targetSecurityId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetTimestamp()).compareTo(other.isSetTimestamp());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetTimestamp()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.timestamp, other.timestamp);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetType()).compareTo(other.isSetType());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetType()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.type, other.type);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetCaveats()).compareTo(other.isSetCaveats());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCaveats()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.caveats, other.caveats);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetProxyPrincipal()).compareTo(other.isSetProxyPrincipal());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetProxyPrincipal()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.proxyPrincipal, other.proxyPrincipal);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetTokenPrincipal()).compareTo(other.isSetTokenPrincipal());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetTokenPrincipal()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.tokenPrincipal, other.tokenPrincipal);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetPrincipal()).compareTo(other.isSetPrincipal());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetPrincipal()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.principal, other.principal);
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
    StringBuilder sb = new StringBuilder("TokenRequest(");
    boolean first = true;

    sb.append("securityId:");
    if (this.securityId == null) {
      sb.append("null");
    } else {
      sb.append(this.securityId);
    }
    first = false;
    if (isSetTargetSecurityId()) {
      if (!first) sb.append(", ");
      sb.append("targetSecurityId:");
      if (this.targetSecurityId == null) {
        sb.append("null");
      } else {
        sb.append(this.targetSecurityId);
      }
      first = false;
    }
    if (!first) sb.append(", ");
    sb.append("timestamp:");
    sb.append(this.timestamp);
    first = false;
    if (!first) sb.append(", ");
    sb.append("type:");
    if (this.type == null) {
      sb.append("null");
    } else {
      sb.append(this.type);
    }
    first = false;
    if (isSetCaveats()) {
      if (!first) sb.append(", ");
      sb.append("caveats:");
      if (this.caveats == null) {
        sb.append("null");
      } else {
        sb.append(this.caveats);
      }
      first = false;
    }
    if (isSetProxyPrincipal()) {
      if (!first) sb.append(", ");
      sb.append("proxyPrincipal:");
      if (this.proxyPrincipal == null) {
        sb.append("null");
      } else {
        sb.append(this.proxyPrincipal);
      }
      first = false;
    }
    if (isSetTokenPrincipal()) {
      if (!first) sb.append(", ");
      sb.append("tokenPrincipal:");
      if (this.tokenPrincipal == null) {
        sb.append("null");
      } else {
        sb.append(this.tokenPrincipal);
      }
      first = false;
    }
    if (isSetPrincipal()) {
      if (!first) sb.append(", ");
      sb.append("principal:");
      if (this.principal == null) {
        sb.append("null");
      } else {
        sb.append(this.principal);
      }
      first = false;
    }
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    if (securityId == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'securityId' was not present! Struct: " + toString());
    }
    // alas, we cannot check 'timestamp' because it's a primitive and you chose the non-beans generator.
    if (type == null) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'type' was not present! Struct: " + toString());
    }
    // check for sub-struct validity
    if (caveats != null) {
      caveats.validate();
    }
    if (proxyPrincipal != null) {
      proxyPrincipal.validate();
    }
    if (tokenPrincipal != null) {
      tokenPrincipal.validate();
    }
    if (principal != null) {
      principal.validate();
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

  private static class TokenRequestStandardSchemeFactory implements SchemeFactory {
    public TokenRequestStandardScheme getScheme() {
      return new TokenRequestStandardScheme();
    }
  }

  private static class TokenRequestStandardScheme extends StandardScheme<TokenRequest> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, TokenRequest struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // SECURITY_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.securityId = iprot.readString();
              struct.setSecurityIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // TARGET_SECURITY_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.targetSecurityId = iprot.readString();
              struct.setTargetSecurityIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // TIMESTAMP
            if (schemeField.type == org.apache.thrift.protocol.TType.I64) {
              struct.timestamp = iprot.readI64();
              struct.setTimestampIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // TYPE
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.type = TokenType.findByValue(iprot.readI32());
              struct.setTypeIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 6: // CAVEATS
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.caveats = new ValidityCaveats();
              struct.caveats.read(iprot);
              struct.setCaveatsIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 10: // PROXY_PRINCIPAL
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.proxyPrincipal = new ProxyPrincipal();
              struct.proxyPrincipal.read(iprot);
              struct.setProxyPrincipalIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 11: // TOKEN_PRINCIPAL
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.tokenPrincipal = new EzSecurityToken();
              struct.tokenPrincipal.read(iprot);
              struct.setTokenPrincipalIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 12: // PRINCIPAL
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.principal = new EzSecurityPrincipal();
              struct.principal.read(iprot);
              struct.setPrincipalIsSet(true);
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
      if (!struct.isSetTimestamp()) {
        throw new org.apache.thrift.protocol.TProtocolException("Required field 'timestamp' was not found in serialized data! Struct: " + toString());
      }
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, TokenRequest struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.securityId != null) {
        oprot.writeFieldBegin(SECURITY_ID_FIELD_DESC);
        oprot.writeString(struct.securityId);
        oprot.writeFieldEnd();
      }
      if (struct.targetSecurityId != null) {
        if (struct.isSetTargetSecurityId()) {
          oprot.writeFieldBegin(TARGET_SECURITY_ID_FIELD_DESC);
          oprot.writeString(struct.targetSecurityId);
          oprot.writeFieldEnd();
        }
      }
      oprot.writeFieldBegin(TIMESTAMP_FIELD_DESC);
      oprot.writeI64(struct.timestamp);
      oprot.writeFieldEnd();
      if (struct.type != null) {
        oprot.writeFieldBegin(TYPE_FIELD_DESC);
        oprot.writeI32(struct.type.getValue());
        oprot.writeFieldEnd();
      }
      if (struct.caveats != null) {
        if (struct.isSetCaveats()) {
          oprot.writeFieldBegin(CAVEATS_FIELD_DESC);
          struct.caveats.write(oprot);
          oprot.writeFieldEnd();
        }
      }
      if (struct.proxyPrincipal != null) {
        if (struct.isSetProxyPrincipal()) {
          oprot.writeFieldBegin(PROXY_PRINCIPAL_FIELD_DESC);
          struct.proxyPrincipal.write(oprot);
          oprot.writeFieldEnd();
        }
      }
      if (struct.tokenPrincipal != null) {
        if (struct.isSetTokenPrincipal()) {
          oprot.writeFieldBegin(TOKEN_PRINCIPAL_FIELD_DESC);
          struct.tokenPrincipal.write(oprot);
          oprot.writeFieldEnd();
        }
      }
      if (struct.principal != null) {
        if (struct.isSetPrincipal()) {
          oprot.writeFieldBegin(PRINCIPAL_FIELD_DESC);
          struct.principal.write(oprot);
          oprot.writeFieldEnd();
        }
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class TokenRequestTupleSchemeFactory implements SchemeFactory {
    public TokenRequestTupleScheme getScheme() {
      return new TokenRequestTupleScheme();
    }
  }

  private static class TokenRequestTupleScheme extends TupleScheme<TokenRequest> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, TokenRequest struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeString(struct.securityId);
      oprot.writeI64(struct.timestamp);
      oprot.writeI32(struct.type.getValue());
      BitSet optionals = new BitSet();
      if (struct.isSetTargetSecurityId()) {
        optionals.set(0);
      }
      if (struct.isSetCaveats()) {
        optionals.set(1);
      }
      if (struct.isSetProxyPrincipal()) {
        optionals.set(2);
      }
      if (struct.isSetTokenPrincipal()) {
        optionals.set(3);
      }
      if (struct.isSetPrincipal()) {
        optionals.set(4);
      }
      oprot.writeBitSet(optionals, 5);
      if (struct.isSetTargetSecurityId()) {
        oprot.writeString(struct.targetSecurityId);
      }
      if (struct.isSetCaveats()) {
        struct.caveats.write(oprot);
      }
      if (struct.isSetProxyPrincipal()) {
        struct.proxyPrincipal.write(oprot);
      }
      if (struct.isSetTokenPrincipal()) {
        struct.tokenPrincipal.write(oprot);
      }
      if (struct.isSetPrincipal()) {
        struct.principal.write(oprot);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, TokenRequest struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.securityId = iprot.readString();
      struct.setSecurityIdIsSet(true);
      struct.timestamp = iprot.readI64();
      struct.setTimestampIsSet(true);
      struct.type = TokenType.findByValue(iprot.readI32());
      struct.setTypeIsSet(true);
      BitSet incoming = iprot.readBitSet(5);
      if (incoming.get(0)) {
        struct.targetSecurityId = iprot.readString();
        struct.setTargetSecurityIdIsSet(true);
      }
      if (incoming.get(1)) {
        struct.caveats = new ValidityCaveats();
        struct.caveats.read(iprot);
        struct.setCaveatsIsSet(true);
      }
      if (incoming.get(2)) {
        struct.proxyPrincipal = new ProxyPrincipal();
        struct.proxyPrincipal.read(iprot);
        struct.setProxyPrincipalIsSet(true);
      }
      if (incoming.get(3)) {
        struct.tokenPrincipal = new EzSecurityToken();
        struct.tokenPrincipal.read(iprot);
        struct.setTokenPrincipalIsSet(true);
      }
      if (incoming.get(4)) {
        struct.principal = new EzSecurityPrincipal();
        struct.principal.read(iprot);
        struct.setPrincipalIsSet(true);
      }
    }
  }

}

