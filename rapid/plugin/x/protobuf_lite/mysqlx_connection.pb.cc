// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysqlx_connection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mysqlx_connection.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace Mysqlx {
namespace Connection {

void protobuf_ShutdownFile_mysqlx_5fconnection_2eproto() {
  delete Capability::default_instance_;
  delete Capabilities::default_instance_;
  delete CapabilitiesGet::default_instance_;
  delete CapabilitiesSet::default_instance_;
  delete Close::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_mysqlx_5fconnection_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_mysqlx_5fconnection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::Mysqlx::Datatypes::protobuf_AddDesc_mysqlx_5fdatatypes_2eproto();
  Capability::default_instance_ = new Capability();
  Capabilities::default_instance_ = new Capabilities();
  CapabilitiesGet::default_instance_ = new CapabilitiesGet();
  CapabilitiesSet::default_instance_ = new CapabilitiesSet();
  Close::default_instance_ = new Close();
  Capability::default_instance_->InitAsDefaultInstance();
  Capabilities::default_instance_->InitAsDefaultInstance();
  CapabilitiesGet::default_instance_->InitAsDefaultInstance();
  CapabilitiesSet::default_instance_->InitAsDefaultInstance();
  Close::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mysqlx_5fconnection_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_mysqlx_5fconnection_2eproto_once_);
void protobuf_AddDesc_mysqlx_5fconnection_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_mysqlx_5fconnection_2eproto_once_,
                 &protobuf_AddDesc_mysqlx_5fconnection_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mysqlx_5fconnection_2eproto {
  StaticDescriptorInitializer_mysqlx_5fconnection_2eproto() {
    protobuf_AddDesc_mysqlx_5fconnection_2eproto();
  }
} static_descriptor_initializer_mysqlx_5fconnection_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int Capability::kNameFieldNumber;
const int Capability::kValueFieldNumber;
#endif  // !_MSC_VER

Capability::Capability()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Connection.Capability)
}

void Capability::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  value_ = const_cast< ::Mysqlx::Datatypes::Any*>(
      ::Mysqlx::Datatypes::Any::internal_default_instance());
#else
  value_ = const_cast< ::Mysqlx::Datatypes::Any*>(&::Mysqlx::Datatypes::Any::default_instance());
#endif
}

Capability::Capability(const Capability& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Connection.Capability)
}

void Capability::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Capability::~Capability() {
  // @@protoc_insertion_point(destructor:Mysqlx.Connection.Capability)
  SharedDtor();
}

void Capability::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete value_;
  }
}

void Capability::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Capability& Capability::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#endif
  return *default_instance_;
}

Capability* Capability::default_instance_ = NULL;

Capability* Capability::New() const {
  return new Capability;
}

void Capability::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_value()) {
      if (value_ != NULL) value_->::Mysqlx::Datatypes::Any::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool Capability::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:Mysqlx.Connection.Capability)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // required .Mysqlx.Datatypes.Any value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Connection.Capability)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Connection.Capability)
  return false;
#undef DO_
}

void Capability::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Connection.Capability)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required .Mysqlx.Datatypes.Any value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->value(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:Mysqlx.Connection.Capability)
}

int Capability::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required .Mysqlx.Datatypes.Any value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->value());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Capability::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Capability*>(&from));
}

void Capability::MergeFrom(const Capability& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_value()) {
      mutable_value()->::Mysqlx::Datatypes::Any::MergeFrom(from.value());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void Capability::CopyFrom(const Capability& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Capability::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_value()) {
    if (!this->value().IsInitialized()) return false;
  }
  return true;
}

void Capability::Swap(Capability* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Capability::GetTypeName() const {
  return "Mysqlx.Connection.Capability";
}


// ===================================================================

#ifndef _MSC_VER
const int Capabilities::kCapabilitiesFieldNumber;
#endif  // !_MSC_VER

Capabilities::Capabilities()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Connection.Capabilities)
}

void Capabilities::InitAsDefaultInstance() {
}

Capabilities::Capabilities(const Capabilities& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Connection.Capabilities)
}

void Capabilities::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Capabilities::~Capabilities() {
  // @@protoc_insertion_point(destructor:Mysqlx.Connection.Capabilities)
  SharedDtor();
}

void Capabilities::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void Capabilities::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Capabilities& Capabilities::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#endif
  return *default_instance_;
}

Capabilities* Capabilities::default_instance_ = NULL;

Capabilities* Capabilities::New() const {
  return new Capabilities;
}

void Capabilities::Clear() {
  capabilities_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool Capabilities::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:Mysqlx.Connection.Capabilities)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Mysqlx.Connection.Capability capabilities = 1;
      case 1: {
        if (tag == 10) {
         parse_capabilities:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_capabilities()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_capabilities;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Connection.Capabilities)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Connection.Capabilities)
  return false;
#undef DO_
}

void Capabilities::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Connection.Capabilities)
  // repeated .Mysqlx.Connection.Capability capabilities = 1;
  for (int i = 0; i < this->capabilities_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->capabilities(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:Mysqlx.Connection.Capabilities)
}

int Capabilities::ByteSize() const {
  int total_size = 0;

  // repeated .Mysqlx.Connection.Capability capabilities = 1;
  total_size += 1 * this->capabilities_size();
  for (int i = 0; i < this->capabilities_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->capabilities(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Capabilities::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Capabilities*>(&from));
}

void Capabilities::MergeFrom(const Capabilities& from) {
  GOOGLE_CHECK_NE(&from, this);
  capabilities_.MergeFrom(from.capabilities_);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void Capabilities::CopyFrom(const Capabilities& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Capabilities::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->capabilities())) return false;
  return true;
}

void Capabilities::Swap(Capabilities* other) {
  if (other != this) {
    capabilities_.Swap(&other->capabilities_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Capabilities::GetTypeName() const {
  return "Mysqlx.Connection.Capabilities";
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CapabilitiesGet::CapabilitiesGet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Connection.CapabilitiesGet)
}

void CapabilitiesGet::InitAsDefaultInstance() {
}

CapabilitiesGet::CapabilitiesGet(const CapabilitiesGet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Connection.CapabilitiesGet)
}

void CapabilitiesGet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CapabilitiesGet::~CapabilitiesGet() {
  // @@protoc_insertion_point(destructor:Mysqlx.Connection.CapabilitiesGet)
  SharedDtor();
}

void CapabilitiesGet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void CapabilitiesGet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const CapabilitiesGet& CapabilitiesGet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#endif
  return *default_instance_;
}

CapabilitiesGet* CapabilitiesGet::default_instance_ = NULL;

CapabilitiesGet* CapabilitiesGet::New() const {
  return new CapabilitiesGet;
}

void CapabilitiesGet::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool CapabilitiesGet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:Mysqlx.Connection.CapabilitiesGet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Connection.CapabilitiesGet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Connection.CapabilitiesGet)
  return false;
#undef DO_
}

void CapabilitiesGet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Connection.CapabilitiesGet)
  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:Mysqlx.Connection.CapabilitiesGet)
}

int CapabilitiesGet::ByteSize() const {
  int total_size = 0;

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CapabilitiesGet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CapabilitiesGet*>(&from));
}

void CapabilitiesGet::MergeFrom(const CapabilitiesGet& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void CapabilitiesGet::CopyFrom(const CapabilitiesGet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CapabilitiesGet::IsInitialized() const {

  return true;
}

void CapabilitiesGet::Swap(CapabilitiesGet* other) {
  if (other != this) {
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string CapabilitiesGet::GetTypeName() const {
  return "Mysqlx.Connection.CapabilitiesGet";
}


// ===================================================================

#ifndef _MSC_VER
const int CapabilitiesSet::kCapabilitiesFieldNumber;
#endif  // !_MSC_VER

CapabilitiesSet::CapabilitiesSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Connection.CapabilitiesSet)
}

void CapabilitiesSet::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  capabilities_ = const_cast< ::Mysqlx::Connection::Capabilities*>(
      ::Mysqlx::Connection::Capabilities::internal_default_instance());
#else
  capabilities_ = const_cast< ::Mysqlx::Connection::Capabilities*>(&::Mysqlx::Connection::Capabilities::default_instance());
#endif
}

CapabilitiesSet::CapabilitiesSet(const CapabilitiesSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Connection.CapabilitiesSet)
}

void CapabilitiesSet::SharedCtor() {
  _cached_size_ = 0;
  capabilities_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CapabilitiesSet::~CapabilitiesSet() {
  // @@protoc_insertion_point(destructor:Mysqlx.Connection.CapabilitiesSet)
  SharedDtor();
}

void CapabilitiesSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete capabilities_;
  }
}

void CapabilitiesSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const CapabilitiesSet& CapabilitiesSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#endif
  return *default_instance_;
}

CapabilitiesSet* CapabilitiesSet::default_instance_ = NULL;

CapabilitiesSet* CapabilitiesSet::New() const {
  return new CapabilitiesSet;
}

void CapabilitiesSet::Clear() {
  if (has_capabilities()) {
    if (capabilities_ != NULL) capabilities_->::Mysqlx::Connection::Capabilities::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool CapabilitiesSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:Mysqlx.Connection.CapabilitiesSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Mysqlx.Connection.Capabilities capabilities = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_capabilities()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Connection.CapabilitiesSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Connection.CapabilitiesSet)
  return false;
#undef DO_
}

void CapabilitiesSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Connection.CapabilitiesSet)
  // required .Mysqlx.Connection.Capabilities capabilities = 1;
  if (has_capabilities()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->capabilities(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:Mysqlx.Connection.CapabilitiesSet)
}

int CapabilitiesSet::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Mysqlx.Connection.Capabilities capabilities = 1;
    if (has_capabilities()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->capabilities());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CapabilitiesSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CapabilitiesSet*>(&from));
}

void CapabilitiesSet::MergeFrom(const CapabilitiesSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_capabilities()) {
      mutable_capabilities()->::Mysqlx::Connection::Capabilities::MergeFrom(from.capabilities());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void CapabilitiesSet::CopyFrom(const CapabilitiesSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CapabilitiesSet::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_capabilities()) {
    if (!this->capabilities().IsInitialized()) return false;
  }
  return true;
}

void CapabilitiesSet::Swap(CapabilitiesSet* other) {
  if (other != this) {
    std::swap(capabilities_, other->capabilities_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string CapabilitiesSet::GetTypeName() const {
  return "Mysqlx.Connection.CapabilitiesSet";
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

Close::Close()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Connection.Close)
}

void Close::InitAsDefaultInstance() {
}

Close::Close(const Close& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Connection.Close)
}

void Close::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Close::~Close() {
  // @@protoc_insertion_point(destructor:Mysqlx.Connection.Close)
  SharedDtor();
}

void Close::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void Close::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Close& Close::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fconnection_2eproto();
#endif
  return *default_instance_;
}

Close* Close::default_instance_ = NULL;

Close* Close::New() const {
  return new Close;
}

void Close::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool Close::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:Mysqlx.Connection.Close)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Connection.Close)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Connection.Close)
  return false;
#undef DO_
}

void Close::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Connection.Close)
  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:Mysqlx.Connection.Close)
}

int Close::ByteSize() const {
  int total_size = 0;

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Close::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Close*>(&from));
}

void Close::MergeFrom(const Close& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void Close::CopyFrom(const Close& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Close::IsInitialized() const {

  return true;
}

void Close::Swap(Close* other) {
  if (other != this) {
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Close::GetTypeName() const {
  return "Mysqlx.Connection.Close";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Connection
}  // namespace Mysqlx

// @@protoc_insertion_point(global_scope)