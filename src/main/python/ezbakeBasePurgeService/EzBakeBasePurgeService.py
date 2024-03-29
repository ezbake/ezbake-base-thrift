#   Copyright (C) 2013-2014 Computer Sciences Corporation
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.

#
# Autogenerated by Thrift Compiler (0.9.1)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py:new_style
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
import ezbakeBaseService.EzBakeBaseService
from ttypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class Iface(ezbakeBaseService.EzBakeBaseService.Iface):
  """
  This is the base thrift service an application needs to implement to support the centralized purging.  The
  central purge service will call every application's purge service to initiate a purge operation.

    +-------------------------+
    |                         |
    |  Central Purge Service  |
    |                         |
    +-----------+-------------+
                |
                |
                |
    +-----------v-------------+
    |                         |
    |Application Purge Service|
    |                         |
    +-----------+-------------+
                |
                |
                |
    +-----------v-------------+
    |                         |
    |    Data Access Layer    |
    |                         |
    +-------------------------+

  """
  def beginPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    """
    Start a purge of the given items.  This method will begin purging items
    that match the given set of IDs and will call back to the
    purgeCallbackService when the purge has completed. The return of this
    function without exception indicates that the application has taken
    responsibility of purging documents matching purgeIds from its data sets.
    It does not indicate completion of the purge.

    Returns the state of the new purge request.

    @param purgeCallbackService ezDiscovery path of the purge service to
           call back to.
    @param purgeId Unique id to use for this purge request. Will be the string
           representation of an i64 number in the case of a true purge, or be
           prefaced with “AgeOff_<rule#>_<timestamp>” in the case that this
           purge is occurring due to age-off processing. The implementing
           application typically should not care and should not take any
           action based on that fact.

    @param idsToPurge set<i64> containing all the items to purge. This should
           be sent to the data access layer to perform the purge.
    @param initiatorToken Security token for the service or user that
           initiated the purge.

    Parameters:
     - purgeCallbackService
     - purgeId
     - idsToPurge
     - initiatorToken
    """
    pass

  def beginVirusPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    """
    Parameters:
     - purgeCallbackService
     - purgeId
     - idsToPurge
     - initiatorToken
    """
    pass

  def purgeStatus(self, token, purgeId):
    """
    Returns the state of a given purge request.

    @param purgeId Unique id to use for this purge request
    @returns Status of the given purge, UNKNOWN_ID if it was not found

    Parameters:
     - token
     - purgeId
    """
    pass

  def cancelPurge(self, token, purgeId):
    """
     * Request cancelling a purge that is currently running. In order to attempt
     * to not leave the application in an unstable state the application may not
     * be able to cancelt the purge.
     *
     * @param token Security token for the service or user that requested the cancel.
     * @param purgeId Unique id for the purge to cancel
     *
     * @returns CancelStatus the enum for the current state of the cancel.
    *

    Parameters:
     - token
     - purgeId
    """
    pass


class Client(ezbakeBaseService.EzBakeBaseService.Client, Iface):
  """
  This is the base thrift service an application needs to implement to support the centralized purging.  The
  central purge service will call every application's purge service to initiate a purge operation.

    +-------------------------+
    |                         |
    |  Central Purge Service  |
    |                         |
    +-----------+-------------+
                |
                |
                |
    +-----------v-------------+
    |                         |
    |Application Purge Service|
    |                         |
    +-----------+-------------+
                |
                |
                |
    +-----------v-------------+
    |                         |
    |    Data Access Layer    |
    |                         |
    +-------------------------+

  """
  def __init__(self, iprot, oprot=None):
    ezbakeBaseService.EzBakeBaseService.Client.__init__(self, iprot, oprot)

  def beginPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    """
    Start a purge of the given items.  This method will begin purging items
    that match the given set of IDs and will call back to the
    purgeCallbackService when the purge has completed. The return of this
    function without exception indicates that the application has taken
    responsibility of purging documents matching purgeIds from its data sets.
    It does not indicate completion of the purge.

    Returns the state of the new purge request.

    @param purgeCallbackService ezDiscovery path of the purge service to
           call back to.
    @param purgeId Unique id to use for this purge request. Will be the string
           representation of an i64 number in the case of a true purge, or be
           prefaced with “AgeOff_<rule#>_<timestamp>” in the case that this
           purge is occurring due to age-off processing. The implementing
           application typically should not care and should not take any
           action based on that fact.

    @param idsToPurge set<i64> containing all the items to purge. This should
           be sent to the data access layer to perform the purge.
    @param initiatorToken Security token for the service or user that
           initiated the purge.

    Parameters:
     - purgeCallbackService
     - purgeId
     - idsToPurge
     - initiatorToken
    """
    self.send_beginPurge(purgeCallbackService, purgeId, idsToPurge, initiatorToken)
    return self.recv_beginPurge()

  def send_beginPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    self._oprot.writeMessageBegin('beginPurge', TMessageType.CALL, self._seqid)
    args = beginPurge_args()
    args.purgeCallbackService = purgeCallbackService
    args.purgeId = purgeId
    args.idsToPurge = idsToPurge
    args.initiatorToken = initiatorToken
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_beginPurge(self):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = beginPurge_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success is not None:
      return result.success
    if result.e is not None:
      raise result.e
    if result.tokenException is not None:
      raise result.tokenException
    raise TApplicationException(TApplicationException.MISSING_RESULT, "beginPurge failed: unknown result");

  def beginVirusPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    """
    Parameters:
     - purgeCallbackService
     - purgeId
     - idsToPurge
     - initiatorToken
    """
    self.send_beginVirusPurge(purgeCallbackService, purgeId, idsToPurge, initiatorToken)
    return self.recv_beginVirusPurge()

  def send_beginVirusPurge(self, purgeCallbackService, purgeId, idsToPurge, initiatorToken):
    self._oprot.writeMessageBegin('beginVirusPurge', TMessageType.CALL, self._seqid)
    args = beginVirusPurge_args()
    args.purgeCallbackService = purgeCallbackService
    args.purgeId = purgeId
    args.idsToPurge = idsToPurge
    args.initiatorToken = initiatorToken
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_beginVirusPurge(self):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = beginVirusPurge_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success is not None:
      return result.success
    if result.e is not None:
      raise result.e
    if result.tokenException is not None:
      raise result.tokenException
    raise TApplicationException(TApplicationException.MISSING_RESULT, "beginVirusPurge failed: unknown result");

  def purgeStatus(self, token, purgeId):
    """
    Returns the state of a given purge request.

    @param purgeId Unique id to use for this purge request
    @returns Status of the given purge, UNKNOWN_ID if it was not found

    Parameters:
     - token
     - purgeId
    """
    self.send_purgeStatus(token, purgeId)
    return self.recv_purgeStatus()

  def send_purgeStatus(self, token, purgeId):
    self._oprot.writeMessageBegin('purgeStatus', TMessageType.CALL, self._seqid)
    args = purgeStatus_args()
    args.token = token
    args.purgeId = purgeId
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_purgeStatus(self):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = purgeStatus_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success is not None:
      return result.success
    if result.tokenException is not None:
      raise result.tokenException
    raise TApplicationException(TApplicationException.MISSING_RESULT, "purgeStatus failed: unknown result");

  def cancelPurge(self, token, purgeId):
    """
     * Request cancelling a purge that is currently running. In order to attempt
     * to not leave the application in an unstable state the application may not
     * be able to cancelt the purge.
     *
     * @param token Security token for the service or user that requested the cancel.
     * @param purgeId Unique id for the purge to cancel
     *
     * @returns CancelStatus the enum for the current state of the cancel.
    *

    Parameters:
     - token
     - purgeId
    """
    self.send_cancelPurge(token, purgeId)
    return self.recv_cancelPurge()

  def send_cancelPurge(self, token, purgeId):
    self._oprot.writeMessageBegin('cancelPurge', TMessageType.CALL, self._seqid)
    args = cancelPurge_args()
    args.token = token
    args.purgeId = purgeId
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_cancelPurge(self):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = cancelPurge_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success is not None:
      return result.success
    if result.tokenException is not None:
      raise result.tokenException
    raise TApplicationException(TApplicationException.MISSING_RESULT, "cancelPurge failed: unknown result");


class Processor(ezbakeBaseService.EzBakeBaseService.Processor, Iface, TProcessor):
  def __init__(self, handler):
    ezbakeBaseService.EzBakeBaseService.Processor.__init__(self, handler)
    self._processMap["beginPurge"] = Processor.process_beginPurge
    self._processMap["beginVirusPurge"] = Processor.process_beginVirusPurge
    self._processMap["purgeStatus"] = Processor.process_purgeStatus
    self._processMap["cancelPurge"] = Processor.process_cancelPurge

  def process(self, iprot, oprot):
    (name, type, seqid) = iprot.readMessageBegin()
    if name not in self._processMap:
      iprot.skip(TType.STRUCT)
      iprot.readMessageEnd()
      x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
      oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
      x.write(oprot)
      oprot.writeMessageEnd()
      oprot.trans.flush()
      return
    else:
      self._processMap[name](self, seqid, iprot, oprot)
    return True

  def process_beginPurge(self, seqid, iprot, oprot):
    args = beginPurge_args()
    args.read(iprot)
    iprot.readMessageEnd()
    result = beginPurge_result()
    try:
      result.success = self._handler.beginPurge(args.purgeCallbackService, args.purgeId, args.idsToPurge, args.initiatorToken)
    except PurgeException, e:
      result.e = e
    except ezbakeBaseTypes.ttypes.EzSecurityTokenException, tokenException:
      result.tokenException = tokenException
    oprot.writeMessageBegin("beginPurge", TMessageType.REPLY, seqid)
    result.write(oprot)
    oprot.writeMessageEnd()
    oprot.trans.flush()

  def process_beginVirusPurge(self, seqid, iprot, oprot):
    args = beginVirusPurge_args()
    args.read(iprot)
    iprot.readMessageEnd()
    result = beginVirusPurge_result()
    try:
      result.success = self._handler.beginVirusPurge(args.purgeCallbackService, args.purgeId, args.idsToPurge, args.initiatorToken)
    except PurgeException, e:
      result.e = e
    except ezbakeBaseTypes.ttypes.EzSecurityTokenException, tokenException:
      result.tokenException = tokenException
    oprot.writeMessageBegin("beginVirusPurge", TMessageType.REPLY, seqid)
    result.write(oprot)
    oprot.writeMessageEnd()
    oprot.trans.flush()

  def process_purgeStatus(self, seqid, iprot, oprot):
    args = purgeStatus_args()
    args.read(iprot)
    iprot.readMessageEnd()
    result = purgeStatus_result()
    try:
      result.success = self._handler.purgeStatus(args.token, args.purgeId)
    except ezbakeBaseTypes.ttypes.EzSecurityTokenException, tokenException:
      result.tokenException = tokenException
    oprot.writeMessageBegin("purgeStatus", TMessageType.REPLY, seqid)
    result.write(oprot)
    oprot.writeMessageEnd()
    oprot.trans.flush()

  def process_cancelPurge(self, seqid, iprot, oprot):
    args = cancelPurge_args()
    args.read(iprot)
    iprot.readMessageEnd()
    result = cancelPurge_result()
    try:
      result.success = self._handler.cancelPurge(args.token, args.purgeId)
    except ezbakeBaseTypes.ttypes.EzSecurityTokenException, tokenException:
      result.tokenException = tokenException
    oprot.writeMessageBegin("cancelPurge", TMessageType.REPLY, seqid)
    result.write(oprot)
    oprot.writeMessageEnd()
    oprot.trans.flush()


# HELPER FUNCTIONS AND STRUCTURES

class beginPurge_args(object):
  """
  Attributes:
   - purgeCallbackService
   - purgeId
   - idsToPurge
   - initiatorToken
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'purgeCallbackService', None, None, ), # 1
    (2, TType.I64, 'purgeId', None, None, ), # 2
    (3, TType.SET, 'idsToPurge', (TType.I64,None), None, ), # 3
    (4, TType.STRUCT, 'initiatorToken', (ezbakeBaseTypes.ttypes.EzSecurityToken, ezbakeBaseTypes.ttypes.EzSecurityToken.thrift_spec), None, ), # 4
  )

  def __init__(self, purgeCallbackService=None, purgeId=None, idsToPurge=None, initiatorToken=None,):
    self.purgeCallbackService = purgeCallbackService
    self.purgeId = purgeId
    self.idsToPurge = idsToPurge
    self.initiatorToken = initiatorToken

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.purgeCallbackService = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.purgeId = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.SET:
          self.idsToPurge = set()
          (_etype17, _size14) = iprot.readSetBegin()
          for _i18 in xrange(_size14):
            _elem19 = iprot.readI64();
            self.idsToPurge.add(_elem19)
          iprot.readSetEnd()
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRUCT:
          self.initiatorToken = ezbakeBaseTypes.ttypes.EzSecurityToken()
          self.initiatorToken.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('beginPurge_args')
    if self.purgeCallbackService is not None:
      oprot.writeFieldBegin('purgeCallbackService', TType.STRING, 1)
      oprot.writeString(self.purgeCallbackService)
      oprot.writeFieldEnd()
    if self.purgeId is not None:
      oprot.writeFieldBegin('purgeId', TType.I64, 2)
      oprot.writeI64(self.purgeId)
      oprot.writeFieldEnd()
    if self.idsToPurge is not None:
      oprot.writeFieldBegin('idsToPurge', TType.SET, 3)
      oprot.writeSetBegin(TType.I64, len(self.idsToPurge))
      for iter20 in self.idsToPurge:
        oprot.writeI64(iter20)
      oprot.writeSetEnd()
      oprot.writeFieldEnd()
    if self.initiatorToken is not None:
      oprot.writeFieldBegin('initiatorToken', TType.STRUCT, 4)
      self.initiatorToken.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.purgeId is None:
      raise TProtocol.TProtocolException(message='Required field purgeId is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class beginPurge_result(object):
  """
  Attributes:
   - success
   - e
   - tokenException
  """

  thrift_spec = (
    (0, TType.STRUCT, 'success', (PurgeState, PurgeState.thrift_spec), None, ), # 0
    (1, TType.STRUCT, 'e', (PurgeException, PurgeException.thrift_spec), None, ), # 1
    (2, TType.STRUCT, 'tokenException', (ezbakeBaseTypes.ttypes.EzSecurityTokenException, ezbakeBaseTypes.ttypes.EzSecurityTokenException.thrift_spec), None, ), # 2
  )

  def __init__(self, success=None, e=None, tokenException=None,):
    self.success = success
    self.e = e
    self.tokenException = tokenException

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.STRUCT:
          self.success = PurgeState()
          self.success.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 1:
        if ftype == TType.STRUCT:
          self.e = PurgeException()
          self.e.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRUCT:
          self.tokenException = ezbakeBaseTypes.ttypes.EzSecurityTokenException()
          self.tokenException.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('beginPurge_result')
    if self.success is not None:
      oprot.writeFieldBegin('success', TType.STRUCT, 0)
      self.success.write(oprot)
      oprot.writeFieldEnd()
    if self.e is not None:
      oprot.writeFieldBegin('e', TType.STRUCT, 1)
      self.e.write(oprot)
      oprot.writeFieldEnd()
    if self.tokenException is not None:
      oprot.writeFieldBegin('tokenException', TType.STRUCT, 2)
      self.tokenException.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class beginVirusPurge_args(object):
  """
  Attributes:
   - purgeCallbackService
   - purgeId
   - idsToPurge
   - initiatorToken
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'purgeCallbackService', None, None, ), # 1
    (2, TType.I64, 'purgeId', None, None, ), # 2
    (3, TType.SET, 'idsToPurge', (TType.I64,None), None, ), # 3
    (4, TType.STRUCT, 'initiatorToken', (ezbakeBaseTypes.ttypes.EzSecurityToken, ezbakeBaseTypes.ttypes.EzSecurityToken.thrift_spec), None, ), # 4
  )

  def __init__(self, purgeCallbackService=None, purgeId=None, idsToPurge=None, initiatorToken=None,):
    self.purgeCallbackService = purgeCallbackService
    self.purgeId = purgeId
    self.idsToPurge = idsToPurge
    self.initiatorToken = initiatorToken

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.purgeCallbackService = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.purgeId = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.SET:
          self.idsToPurge = set()
          (_etype24, _size21) = iprot.readSetBegin()
          for _i25 in xrange(_size21):
            _elem26 = iprot.readI64();
            self.idsToPurge.add(_elem26)
          iprot.readSetEnd()
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRUCT:
          self.initiatorToken = ezbakeBaseTypes.ttypes.EzSecurityToken()
          self.initiatorToken.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('beginVirusPurge_args')
    if self.purgeCallbackService is not None:
      oprot.writeFieldBegin('purgeCallbackService', TType.STRING, 1)
      oprot.writeString(self.purgeCallbackService)
      oprot.writeFieldEnd()
    if self.purgeId is not None:
      oprot.writeFieldBegin('purgeId', TType.I64, 2)
      oprot.writeI64(self.purgeId)
      oprot.writeFieldEnd()
    if self.idsToPurge is not None:
      oprot.writeFieldBegin('idsToPurge', TType.SET, 3)
      oprot.writeSetBegin(TType.I64, len(self.idsToPurge))
      for iter27 in self.idsToPurge:
        oprot.writeI64(iter27)
      oprot.writeSetEnd()
      oprot.writeFieldEnd()
    if self.initiatorToken is not None:
      oprot.writeFieldBegin('initiatorToken', TType.STRUCT, 4)
      self.initiatorToken.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.purgeId is None:
      raise TProtocol.TProtocolException(message='Required field purgeId is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class beginVirusPurge_result(object):
  """
  Attributes:
   - success
   - e
   - tokenException
  """

  thrift_spec = (
    (0, TType.STRUCT, 'success', (PurgeState, PurgeState.thrift_spec), None, ), # 0
    (1, TType.STRUCT, 'e', (PurgeException, PurgeException.thrift_spec), None, ), # 1
    (2, TType.STRUCT, 'tokenException', (ezbakeBaseTypes.ttypes.EzSecurityTokenException, ezbakeBaseTypes.ttypes.EzSecurityTokenException.thrift_spec), None, ), # 2
  )

  def __init__(self, success=None, e=None, tokenException=None,):
    self.success = success
    self.e = e
    self.tokenException = tokenException

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.STRUCT:
          self.success = PurgeState()
          self.success.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 1:
        if ftype == TType.STRUCT:
          self.e = PurgeException()
          self.e.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRUCT:
          self.tokenException = ezbakeBaseTypes.ttypes.EzSecurityTokenException()
          self.tokenException.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('beginVirusPurge_result')
    if self.success is not None:
      oprot.writeFieldBegin('success', TType.STRUCT, 0)
      self.success.write(oprot)
      oprot.writeFieldEnd()
    if self.e is not None:
      oprot.writeFieldBegin('e', TType.STRUCT, 1)
      self.e.write(oprot)
      oprot.writeFieldEnd()
    if self.tokenException is not None:
      oprot.writeFieldBegin('tokenException', TType.STRUCT, 2)
      self.tokenException.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class purgeStatus_args(object):
  """
  Attributes:
   - token
   - purgeId
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRUCT, 'token', (ezbakeBaseTypes.ttypes.EzSecurityToken, ezbakeBaseTypes.ttypes.EzSecurityToken.thrift_spec), None, ), # 1
    (2, TType.I64, 'purgeId', None, None, ), # 2
  )

  def __init__(self, token=None, purgeId=None,):
    self.token = token
    self.purgeId = purgeId

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRUCT:
          self.token = ezbakeBaseTypes.ttypes.EzSecurityToken()
          self.token.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.purgeId = iprot.readI64();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('purgeStatus_args')
    if self.token is not None:
      oprot.writeFieldBegin('token', TType.STRUCT, 1)
      self.token.write(oprot)
      oprot.writeFieldEnd()
    if self.purgeId is not None:
      oprot.writeFieldBegin('purgeId', TType.I64, 2)
      oprot.writeI64(self.purgeId)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.token is None:
      raise TProtocol.TProtocolException(message='Required field token is unset!')
    if self.purgeId is None:
      raise TProtocol.TProtocolException(message='Required field purgeId is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class purgeStatus_result(object):
  """
  Attributes:
   - success
   - tokenException
  """

  thrift_spec = (
    (0, TType.STRUCT, 'success', (PurgeState, PurgeState.thrift_spec), None, ), # 0
    (1, TType.STRUCT, 'tokenException', (ezbakeBaseTypes.ttypes.EzSecurityTokenException, ezbakeBaseTypes.ttypes.EzSecurityTokenException.thrift_spec), None, ), # 1
  )

  def __init__(self, success=None, tokenException=None,):
    self.success = success
    self.tokenException = tokenException

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.STRUCT:
          self.success = PurgeState()
          self.success.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 1:
        if ftype == TType.STRUCT:
          self.tokenException = ezbakeBaseTypes.ttypes.EzSecurityTokenException()
          self.tokenException.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('purgeStatus_result')
    if self.success is not None:
      oprot.writeFieldBegin('success', TType.STRUCT, 0)
      self.success.write(oprot)
      oprot.writeFieldEnd()
    if self.tokenException is not None:
      oprot.writeFieldBegin('tokenException', TType.STRUCT, 1)
      self.tokenException.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class cancelPurge_args(object):
  """
  Attributes:
   - token
   - purgeId
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRUCT, 'token', (ezbakeBaseTypes.ttypes.EzSecurityToken, ezbakeBaseTypes.ttypes.EzSecurityToken.thrift_spec), None, ), # 1
    (2, TType.I64, 'purgeId', None, None, ), # 2
  )

  def __init__(self, token=None, purgeId=None,):
    self.token = token
    self.purgeId = purgeId

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRUCT:
          self.token = ezbakeBaseTypes.ttypes.EzSecurityToken()
          self.token.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.purgeId = iprot.readI64();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('cancelPurge_args')
    if self.token is not None:
      oprot.writeFieldBegin('token', TType.STRUCT, 1)
      self.token.write(oprot)
      oprot.writeFieldEnd()
    if self.purgeId is not None:
      oprot.writeFieldBegin('purgeId', TType.I64, 2)
      oprot.writeI64(self.purgeId)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.token is None:
      raise TProtocol.TProtocolException(message='Required field token is unset!')
    if self.purgeId is None:
      raise TProtocol.TProtocolException(message='Required field purgeId is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class cancelPurge_result(object):
  """
  Attributes:
   - success
   - tokenException
  """

  thrift_spec = (
    (0, TType.STRUCT, 'success', (PurgeState, PurgeState.thrift_spec), None, ), # 0
    (1, TType.STRUCT, 'tokenException', (ezbakeBaseTypes.ttypes.EzSecurityTokenException, ezbakeBaseTypes.ttypes.EzSecurityTokenException.thrift_spec), None, ), # 1
  )

  def __init__(self, success=None, tokenException=None,):
    self.success = success
    self.tokenException = tokenException

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.STRUCT:
          self.success = PurgeState()
          self.success.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 1:
        if ftype == TType.STRUCT:
          self.tokenException = ezbakeBaseTypes.ttypes.EzSecurityTokenException()
          self.tokenException.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('cancelPurge_result')
    if self.success is not None:
      oprot.writeFieldBegin('success', TType.STRUCT, 0)
      self.success.write(oprot)
      oprot.writeFieldEnd()
    if self.tokenException is not None:
      oprot.writeFieldBegin('tokenException', TType.STRUCT, 1)
      self.tokenException.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)
