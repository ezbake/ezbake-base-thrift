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

include "ezbakeBaseAuthorizations.thrift"
include "ezbakeBaseVisibility.thrift"

struct TimeZone
{
  1: required i16 hour;
  2: required i16 minute;
  3: required bool afterUTC;
}

struct Time
{
  1: required i16 hour;
  2: required i16 minute;
  3: optional i16 second;
  4: optional i16 millisecond;
  5: required TimeZone tz;
}

struct Date
{
  1: required i16 month;
  2: required i16 day;
  3: required i16 year; // Not this should change
}

struct DateTime
{
  1: required Date date;
  2: optional Time time;
}

struct Coordinate
{
  1: required double latitude;
  2: required double longitude;
}

struct Preview
{
  1: required string mimetype;
  2: required binary content;
}

/**
 Enterprise metadata that contains additional information pertaining to a document.
 */
struct EnterpriseMetaData {
  1: map<string, string> tags;
}

/**
 Standard Search Result. This object encapsulates a search result for a particular object that has been ingested
 and disseminated into ezbake. Each field represents a piece of metadata about the ingested object. It also provides
 faceting ability at query time.
 */
struct SSR
{
  /**
   The warehouse URI that correlates with this SSR object. The URI will point back to the original raw and parsed
   object in the warehouse.
   */
  1: required string uri;

  /**
   The visibility of the SSR object and it's corresponding original document.
   */
  2: required ezbakeBaseVisibility.Visibility visibility;

  /**
   The title of this search result. This would typically be the title of the incoming document to which this SSR
   corresponds.
   */
  3: optional string title;

  /**
   A snippet from the incoming document (if applicable). A typical case for including a snippet would be if the
   corresponding document has a summary.
   */
  4: optional string snippet;

  /**
   The date corresponding to the incoming document. This may be an event date from the document, or potentially a
   document creation date. This field is flexible and should be set to the most useful value for the end user.
   */
  5: optional DateTime resultDate;

  /**
   A geospatial coordinate that corresponds to the incoming document. This is only applicable in certain situations,
   but may provide the end user with extra context and search/faceting ability.
   */
  6: optional Coordinate coordinate;

  /**
   A binary preview of the document. This field pertains to a thumbnail or other binary representation of the incoming
   document/object.
   */
  7: optional Preview preview;

  /**
   Enterprise metadata containing data that pipelines tag a document with. This would be
   additional pieces of information about the data that users can later search on.
   */
  8: optional EnterpriseMetaData metaData;
}


/* Information associated with a particular user, included when token is of type USER */
struct UserInfo {
    1: required string principal
    2: optional string id
    3: optional string firstName
    4: optional string lastName
    5: optional string name
    6: optional string citizenship

    /* key in the map is the type of email, ex: work, home, etc.. */
    7: optional map<string, string> emails
    8: optional map<string, string> phoneNumbers
    9: optional string company
    10: optional string organization
}

/* Information associated with an application, included when token is of type APP */
struct AppInfo {
    1: required string securityId
    2: optional string principal
}

/*
 *  Communities are specialized groups that are
 *  supported from outside of ezbake
 */
struct CommunityMembership {
    1: required string name
    2: required string type
    3: optional string organization
    4: optional list<string> groups
    5: optional list<string> regions
    6: optional list<string> topics
    7: optional map<string, bool> flags
}

/* EzSecurityToken types */
enum TokenType {
    USER,
    APP
}

/* Validity structure contains the information used to verify the different types of tokens */
struct ValidityCaveats {
    /* Issuer - may be used when verifying the signature */
    1: required string issuer

    /* Ezbake Security ID of application token is issued to */
    2: required string issuedTo

    /* Ezbake Security ID of application token can be passed to */
    3: optional string issuedFor

    /* Timestamp of when the token becomes invalid */
    4: optional i64 issuedTime
    5: optional i64 notBefore
    6: required i64 notAfter

    /* Base64 encoded signature generated with issuers private key.
       Used to verify the validity of the information in the token */
    7: required string signature
}

/* Principal associated to a specific entity */
struct EzSecurityPrincipal {
    /* identity of the entity */
    1: required string principal
    6: optional string issuer

    2: required ValidityCaveats validity

    /* if present, the chain of custody the request has passed through */
    3: optional list<string> requestChain

    /* id - if one exists above and beyond the principal */
    4: optional string externalID

    /* name - the pretty name of the subject */
    5: optional string name
}

/* Token issued to applications and trusted throughout ezbake */
struct EzSecurityToken {
    /*---- Token Validity Information - includes the validity caveats, token type, and principal of the token ----*/
    /* Caveats relating to token validity - the who, what, when, and signature */
    1: required ValidityCaveats validity

    /* Type of token this is - if not present, assume it is a USER token */
    2: required TokenType type = TokenType.USER

    /* Principal associated with this token. If present, and not expired, can be used to request new tokens */
    3: required EzSecurityPrincipal tokenPrincipal

    /*---- Token Authorization information - what the holder of this token is allowed to have access to ----*/
    /* Level of access the token is valid for. Definition of what levels mean is left up to the implementation */
    10: optional string authorizationLevel

    /* Currently the best type of authorizations to use */
    11: optional ezbakeBaseAuthorizations.Authorizations authorizations

    /* External project groups come from outside of Ezbake (LDAP, etc...), and indicate membership for this token */
    13: optional map<string, list<string>> externalProjectGroups

    /* Additional groups token belongs to, external to ezbake. More fine grained information than project groups */
    14: optional map<string, CommunityMembership> externalCommunities

    /* Citizenship of token principal */
    15: optional string citizenship

    /* Organization of token principal */
    16: optional string organization

    /* Flag indicating whether or not this token can be used in request to external services */
    17: optional bool validForExternalRequest = false
    18: optional string externalRequestPrincipal
    19: optional string externalRequestPrincipalIssuer

}

/* Generic exception thrown when EzSecurityTokens go bad. We could add more specific causes, possibly an enum */
enum EzSecurityTokenExceptionType {
    EXPIRED,
    INVALID_SIGNATURE,
    INVALID_SECURITY_ID
}
exception EzSecurityTokenException {
    1:required string message
    2:optional string originalException
    3:optional EzSecurityTokenExceptionType type
}

/* JSON representation of an ezsecurity token - not necessarily guaranteed to have same structure as EzSecurityToken */
struct EzSecurityTokenJson {
    1: required string json
    2: required string signature
}

struct X509Info {
    1:required string subject
    2:optional string issuer
}
struct ProxyUserToken {
    1:X509Info x509
    10:required string issuedBy
    11:required string issuedTo
    12:optional string issuedFor
    13:required i64 notAfter
    14:optional i64 notBefore
}
struct ProxyPrincipal {
    1: required string proxyToken;
    2: required string signature
}

/* Used to request new tokens from EzSecurity */
struct TokenRequest {
    /* Ezbake Security ID of requesting application */
    1: required string securityId;

    /* Ezbake Security ID of application this token should be passed to */
    2: optional string targetSecurityId

    /* Time at which this token was generated */
    3: required i64 timestamp;

    /* Type of token being requested */
    5: required TokenType type = TokenType.USER;

    /* Signature validity fields. These will be given priority over 1,2,3 if present */
    6: optional ValidityCaveats caveats

    10: optional ProxyPrincipal proxyPrincipal
    11: optional EzSecurityToken tokenPrincipal
    12: optional EzSecurityPrincipal principal
}

