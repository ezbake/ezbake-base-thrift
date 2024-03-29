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
#include "BaseProcedure.h"
#include "thrift/async/TAsyncChannel.h"

namespace ezbake { namespace base { namespace thrift { namespace procedures {

uint32_t BaseProcedure_getStandardSearchResultForURI_args::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->uri);
          this->__isset.uri = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->userToken.read(iprot);
          this->__isset.userToken = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURI_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURI_args");

  xfer += oprot->writeFieldBegin("uri", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->uri);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userToken", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->userToken.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURI_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURI_pargs");

  xfer += oprot->writeFieldBegin("uri", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->uri)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userToken", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += (*(this->userToken)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURI_result::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURI_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURI_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURI_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURI_presult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURI_presult");

  xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
  xfer += (*(this->success)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURIs_args::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->uris.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->uris.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readString(this->uris[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.uris = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->userToken.read(iprot);
          this->__isset.userToken = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURIs_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURIs_args");

  xfer += oprot->writeFieldBegin("uris", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->uris.size()));
    std::vector<std::string> ::const_iterator _iter5;
    for (_iter5 = this->uris.begin(); _iter5 != this->uris.end(); ++_iter5)
    {
      xfer += oprot->writeString((*_iter5));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userToken", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->userToken.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURIs_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURIs_pargs");

  xfer += oprot->writeFieldBegin("uris", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->uris)).size()));
    std::vector<std::string> ::const_iterator _iter6;
    for (_iter6 = (*(this->uris)).begin(); _iter6 != (*(this->uris)).end(); ++_iter6)
    {
      xfer += oprot->writeString((*_iter6));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userToken", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += (*(this->userToken)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURIs_result::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURIs_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURIs_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t BaseProcedure_getStandardSearchResultForURIs_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
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

uint32_t BaseProcedure_getStandardSearchResultForURIs_presult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BaseProcedure_getStandardSearchResultForURIs_presult");

  xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
  xfer += (*(this->success)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void BaseProcedureClient::getStandardSearchResultForURI( ::ezbake::base::thrift::SSR& _return, const std::string& uri, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  send_getStandardSearchResultForURI(uri, userToken);
  recv_getStandardSearchResultForURI(_return);
}

void BaseProcedureClient::send_getStandardSearchResultForURI(const std::string& uri, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStandardSearchResultForURI", ::apache::thrift::protocol::T_CALL, cseqid);

  BaseProcedure_getStandardSearchResultForURI_pargs args;
  args.uri = &uri;
  args.userToken = &userToken;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void BaseProcedureClient::recv_getStandardSearchResultForURI( ::ezbake::base::thrift::SSR& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("getStandardSearchResultForURI") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  BaseProcedure_getStandardSearchResultForURI_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStandardSearchResultForURI failed: unknown result");
}

void BaseProcedureClient::getStandardSearchResultForURIs( ::ezbake::base::thrift::SSR& _return, const std::vector<std::string> & uris, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  send_getStandardSearchResultForURIs(uris, userToken);
  recv_getStandardSearchResultForURIs(_return);
}

void BaseProcedureClient::send_getStandardSearchResultForURIs(const std::vector<std::string> & uris, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStandardSearchResultForURIs", ::apache::thrift::protocol::T_CALL, cseqid);

  BaseProcedure_getStandardSearchResultForURIs_pargs args;
  args.uris = &uris;
  args.userToken = &userToken;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void BaseProcedureClient::recv_getStandardSearchResultForURIs( ::ezbake::base::thrift::SSR& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("getStandardSearchResultForURIs") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  BaseProcedure_getStandardSearchResultForURIs_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStandardSearchResultForURIs failed: unknown result");
}

bool BaseProcedureProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    return  ::ezbake::base::thrift::EzBakeBaseServiceProcessor::dispatchCall(iprot, oprot, fname, seqid, callContext);
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void BaseProcedureProcessor::process_getStandardSearchResultForURI(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURI", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURI");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "BaseProcedure.getStandardSearchResultForURI");
  }

  BaseProcedure_getStandardSearchResultForURI_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "BaseProcedure.getStandardSearchResultForURI", bytes);
  }

  BaseProcedure_getStandardSearchResultForURI_result result;
  try {
    iface_->getStandardSearchResultForURI(result.success, args.uri, args.userToken);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "BaseProcedure.getStandardSearchResultForURI");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("getStandardSearchResultForURI", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "BaseProcedure.getStandardSearchResultForURI");
  }

  oprot->writeMessageBegin("getStandardSearchResultForURI", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "BaseProcedure.getStandardSearchResultForURI", bytes);
  }
}

void BaseProcedureProcessor::process_getStandardSearchResultForURIs(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURIs", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURIs");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "BaseProcedure.getStandardSearchResultForURIs");
  }

  BaseProcedure_getStandardSearchResultForURIs_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "BaseProcedure.getStandardSearchResultForURIs", bytes);
  }

  BaseProcedure_getStandardSearchResultForURIs_result result;
  try {
    iface_->getStandardSearchResultForURIs(result.success, args.uris, args.userToken);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "BaseProcedure.getStandardSearchResultForURIs");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("getStandardSearchResultForURIs", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "BaseProcedure.getStandardSearchResultForURIs");
  }

  oprot->writeMessageBegin("getStandardSearchResultForURIs", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "BaseProcedure.getStandardSearchResultForURIs", bytes);
  }
}

::boost::shared_ptr< ::apache::thrift::TProcessor > BaseProcedureProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< BaseProcedureIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< BaseProcedureIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new BaseProcedureProcessor(handler));
  return processor;
}
void BaseProcedureCobClient::getStandardSearchResultForURI(tcxx::function<void(BaseProcedureCobClient* client)> cob, const std::string& uri, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  send_getStandardSearchResultForURI(uri, userToken);
  channel_->sendAndRecvMessage(tcxx::bind(cob, this), otrans_.get(), itrans_.get());
}

void BaseProcedureCobClient::send_getStandardSearchResultForURI(const std::string& uri, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStandardSearchResultForURI", ::apache::thrift::protocol::T_CALL, cseqid);

  BaseProcedure_getStandardSearchResultForURI_pargs args;
  args.uri = &uri;
  args.userToken = &userToken;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void BaseProcedureCobClient::recv_getStandardSearchResultForURI( ::ezbake::base::thrift::SSR& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
  bool completed = false;

  try {
    iprot_->readMessageBegin(fname, mtype, rseqid);
    if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
      ::apache::thrift::TApplicationException x;
      x.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(true);
      throw x;
    }
    if (mtype != ::apache::thrift::protocol::T_REPLY) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    if (fname.compare("getStandardSearchResultForURI") != 0) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    BaseProcedure_getStandardSearchResultForURI_presult result;
    result.success = &_return;
    result.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();

    if (result.__isset.success) {
      // _return pointer has now been filled
      completed = true;
      completed__(true);
      return;
    }
    completed = true;
    completed__(true);
    throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStandardSearchResultForURI failed: unknown result");
  } catch (...) {
    if (!completed) {
      completed__(false);
    }
    throw;
  }
}

void BaseProcedureCobClient::getStandardSearchResultForURIs(tcxx::function<void(BaseProcedureCobClient* client)> cob, const std::vector<std::string> & uris, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  send_getStandardSearchResultForURIs(uris, userToken);
  channel_->sendAndRecvMessage(tcxx::bind(cob, this), otrans_.get(), itrans_.get());
}

void BaseProcedureCobClient::send_getStandardSearchResultForURIs(const std::vector<std::string> & uris, const  ::ezbake::base::thrift::EzSecurityToken& userToken)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStandardSearchResultForURIs", ::apache::thrift::protocol::T_CALL, cseqid);

  BaseProcedure_getStandardSearchResultForURIs_pargs args;
  args.uris = &uris;
  args.userToken = &userToken;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void BaseProcedureCobClient::recv_getStandardSearchResultForURIs( ::ezbake::base::thrift::SSR& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
  bool completed = false;

  try {
    iprot_->readMessageBegin(fname, mtype, rseqid);
    if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
      ::apache::thrift::TApplicationException x;
      x.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(true);
      throw x;
    }
    if (mtype != ::apache::thrift::protocol::T_REPLY) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    if (fname.compare("getStandardSearchResultForURIs") != 0) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    BaseProcedure_getStandardSearchResultForURIs_presult result;
    result.success = &_return;
    result.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();

    if (result.__isset.success) {
      // _return pointer has now been filled
      completed = true;
      completed__(true);
      return;
    }
    completed = true;
    completed__(true);
    throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStandardSearchResultForURIs failed: unknown result");
  } catch (...) {
    if (!completed) {
      completed__(false);
    }
    throw;
  }
}

void BaseProcedureAsyncProcessor::dispatchCall(tcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    return  ::ezbake::base::thrift::EzBakeBaseServiceAsyncProcessor::dispatchCall(cob, iprot, oprot, fname, seqid);
  }
  (this->*(pfn->second))(cob, seqid, iprot, oprot);
  return;
}

void BaseProcedureAsyncProcessor::process_getStandardSearchResultForURI(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot)
{
  BaseProcedure_getStandardSearchResultForURI_args args;
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURI", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURI");

  try {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->preRead(ctx, "BaseProcedure.getStandardSearchResultForURI");
    }
    args.read(iprot);
    iprot->readMessageEnd();
    uint32_t bytes = iprot->getTransport()->readEnd();
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->postRead(ctx, "BaseProcedure.getStandardSearchResultForURI", bytes);
    }
  }
  catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "BaseProcedure.getStandardSearchResultForURI");
    }
    return cob(false);
  }
  freer.unregister();
  void (BaseProcedureAsyncProcessor::*return_fn)(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const  ::ezbake::base::thrift::SSR& _return) =
    &BaseProcedureAsyncProcessor::return_getStandardSearchResultForURI;
  iface_->getStandardSearchResultForURI(
      tcxx::bind(return_fn, this, cob, seqid, oprot, ctx, tcxx::placeholders::_1),
      args.uri,
      args.userToken);
}

void BaseProcedureAsyncProcessor::return_getStandardSearchResultForURI(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const  ::ezbake::base::thrift::SSR& _return)
{
  BaseProcedure_getStandardSearchResultForURI_presult result;
  result.success = const_cast< ::ezbake::base::thrift::SSR*>(&_return);
  result.__isset.success = true;

  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURI", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURI");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "BaseProcedure.getStandardSearchResultForURI");
  }

  oprot->writeMessageBegin("getStandardSearchResultForURI", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  uint32_t bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "BaseProcedure.getStandardSearchResultForURI", bytes);
  }
  return cob(true);
}

void BaseProcedureAsyncProcessor::process_getStandardSearchResultForURIs(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot)
{
  BaseProcedure_getStandardSearchResultForURIs_args args;
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURIs", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURIs");

  try {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->preRead(ctx, "BaseProcedure.getStandardSearchResultForURIs");
    }
    args.read(iprot);
    iprot->readMessageEnd();
    uint32_t bytes = iprot->getTransport()->readEnd();
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->postRead(ctx, "BaseProcedure.getStandardSearchResultForURIs", bytes);
    }
  }
  catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "BaseProcedure.getStandardSearchResultForURIs");
    }
    return cob(false);
  }
  freer.unregister();
  void (BaseProcedureAsyncProcessor::*return_fn)(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const  ::ezbake::base::thrift::SSR& _return) =
    &BaseProcedureAsyncProcessor::return_getStandardSearchResultForURIs;
  iface_->getStandardSearchResultForURIs(
      tcxx::bind(return_fn, this, cob, seqid, oprot, ctx, tcxx::placeholders::_1),
      args.uris,
      args.userToken);
}

void BaseProcedureAsyncProcessor::return_getStandardSearchResultForURIs(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const  ::ezbake::base::thrift::SSR& _return)
{
  BaseProcedure_getStandardSearchResultForURIs_presult result;
  result.success = const_cast< ::ezbake::base::thrift::SSR*>(&_return);
  result.__isset.success = true;

  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("BaseProcedure.getStandardSearchResultForURIs", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "BaseProcedure.getStandardSearchResultForURIs");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "BaseProcedure.getStandardSearchResultForURIs");
  }

  oprot->writeMessageBegin("getStandardSearchResultForURIs", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  uint32_t bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "BaseProcedure.getStandardSearchResultForURIs", bytes);
  }
  return cob(true);
}

::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > BaseProcedureAsyncProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< BaseProcedureCobSvIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< BaseProcedureCobSvIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > processor(new BaseProcedureAsyncProcessor(handler));
  return processor;
}
}}}} // namespace

