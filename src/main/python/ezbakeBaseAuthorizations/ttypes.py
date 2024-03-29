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

from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None



class EzBakeAccessDenied(TException):
  """
  This exception describes when an application or user attempts to
  write or manage the visibility of data that they do not have authorization
  to write or manage. This exception should NOT be used in cases where the
  user or application does not have proper READ or DISCOVER permissions.

  Attributes:
   - message
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'message', None, None, ), # 1
  )

  def __init__(self, message=None,):
    self.message = message

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
          self.message = iprot.readString();
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
    oprot.writeStructBegin('EzBakeAccessDenied')
    if self.message is not None:
      oprot.writeFieldBegin('message', TType.STRING, 1)
      oprot.writeString(self.message)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __str__(self):
    return repr(self)

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class Authorizations(object):
  """
  Attributes:
   - formalAuthorizations
   - externalCommunityAuthorizations
   - platformObjectAuthorizations
  """

  thrift_spec = (
    None, # 0
    (1, TType.SET, 'formalAuthorizations', (TType.STRING,None), None, ), # 1
    (2, TType.SET, 'externalCommunityAuthorizations', (TType.STRING,None), None, ), # 2
    (3, TType.SET, 'platformObjectAuthorizations', (TType.I64,None), None, ), # 3
  )

  def __init__(self, formalAuthorizations=None, externalCommunityAuthorizations=None, platformObjectAuthorizations=None,):
    self.formalAuthorizations = formalAuthorizations
    self.externalCommunityAuthorizations = externalCommunityAuthorizations
    self.platformObjectAuthorizations = platformObjectAuthorizations

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
        if ftype == TType.SET:
          self.formalAuthorizations = set()
          (_etype3, _size0) = iprot.readSetBegin()
          for _i4 in xrange(_size0):
            _elem5 = iprot.readString();
            self.formalAuthorizations.add(_elem5)
          iprot.readSetEnd()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.SET:
          self.externalCommunityAuthorizations = set()
          (_etype9, _size6) = iprot.readSetBegin()
          for _i10 in xrange(_size6):
            _elem11 = iprot.readString();
            self.externalCommunityAuthorizations.add(_elem11)
          iprot.readSetEnd()
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.SET:
          self.platformObjectAuthorizations = set()
          (_etype15, _size12) = iprot.readSetBegin()
          for _i16 in xrange(_size12):
            _elem17 = iprot.readI64();
            self.platformObjectAuthorizations.add(_elem17)
          iprot.readSetEnd()
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
    oprot.writeStructBegin('Authorizations')
    if self.formalAuthorizations is not None:
      oprot.writeFieldBegin('formalAuthorizations', TType.SET, 1)
      oprot.writeSetBegin(TType.STRING, len(self.formalAuthorizations))
      for iter18 in self.formalAuthorizations:
        oprot.writeString(iter18)
      oprot.writeSetEnd()
      oprot.writeFieldEnd()
    if self.externalCommunityAuthorizations is not None:
      oprot.writeFieldBegin('externalCommunityAuthorizations', TType.SET, 2)
      oprot.writeSetBegin(TType.STRING, len(self.externalCommunityAuthorizations))
      for iter19 in self.externalCommunityAuthorizations:
        oprot.writeString(iter19)
      oprot.writeSetEnd()
      oprot.writeFieldEnd()
    if self.platformObjectAuthorizations is not None:
      oprot.writeFieldBegin('platformObjectAuthorizations', TType.SET, 3)
      oprot.writeSetBegin(TType.I64, len(self.platformObjectAuthorizations))
      for iter20 in self.platformObjectAuthorizations:
        oprot.writeI64(iter20)
      oprot.writeSetEnd()
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
