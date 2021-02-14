// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laryer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "laryer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace laryer {

namespace {

const ::google::protobuf::Descriptor* LayerTest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LayerTest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_laryer_2eproto() {
  protobuf_AddDesc_laryer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "laryer.proto");
  GOOGLE_CHECK(file != NULL);
  LayerTest_descriptor_ = file->message_type(0);
  static const int LayerTest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerTest, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerTest, data_),
  };
  LayerTest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LayerTest_descriptor_,
      LayerTest::default_instance_,
      LayerTest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerTest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerTest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LayerTest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_laryer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LayerTest_descriptor_, &LayerTest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_laryer_2eproto() {
  delete LayerTest::default_instance_;
  delete LayerTest_reflection_;
}

void protobuf_AddDesc_laryer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014laryer.proto\022\006laryer\"\'\n\tLayerTest\022\014\n\004n"
    "ame\030\001 \001(\005\022\014\n\004data\030\002 \003(\002", 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "laryer.proto", &protobuf_RegisterTypes);
  LayerTest::default_instance_ = new LayerTest();
  LayerTest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_laryer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_laryer_2eproto {
  StaticDescriptorInitializer_laryer_2eproto() {
    protobuf_AddDesc_laryer_2eproto();
  }
} static_descriptor_initializer_laryer_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LayerTest::kNameFieldNumber;
const int LayerTest::kDataFieldNumber;
#endif  // !_MSC_VER

LayerTest::LayerTest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:laryer.LayerTest)
}

void LayerTest::InitAsDefaultInstance() {
}

LayerTest::LayerTest(const LayerTest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:laryer.LayerTest)
}

void LayerTest::SharedCtor() {
  _cached_size_ = 0;
  name_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LayerTest::~LayerTest() {
  // @@protoc_insertion_point(destructor:laryer.LayerTest)
  SharedDtor();
}

void LayerTest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LayerTest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LayerTest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LayerTest_descriptor_;
}

const LayerTest& LayerTest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_laryer_2eproto();
  return *default_instance_;
}

LayerTest* LayerTest::default_instance_ = NULL;

LayerTest* LayerTest::New() const {
  return new LayerTest;
}

void LayerTest::Clear() {
  name_ = 0;
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LayerTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:laryer.LayerTest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 name = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &name_)));
          set_has_name();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_data;
        break;
      }

      // repeated float data = 2;
      case 2: {
        if (tag == 21) {
         parse_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 21, input, this->mutable_data())));
        } else if (tag == 18) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_data;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:laryer.LayerTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:laryer.LayerTest)
  return false;
#undef DO_
}

void LayerTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:laryer.LayerTest)
  // optional int32 name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->name(), output);
  }

  // repeated float data = 2;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      2, this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:laryer.LayerTest)
}

::google::protobuf::uint8* LayerTest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:laryer.LayerTest)
  // optional int32 name = 1;
  if (has_name()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->name(), target);
  }

  // repeated float data = 2;
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(2, this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:laryer.LayerTest)
  return target;
}

int LayerTest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->name());
    }

  }
  // repeated float data = 2;
  {
    int data_size = 0;
    data_size = 4 * this->data_size();
    total_size += 1 * this->data_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LayerTest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LayerTest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LayerTest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LayerTest::MergeFrom(const LayerTest& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LayerTest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LayerTest::CopyFrom(const LayerTest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerTest::IsInitialized() const {

  return true;
}

void LayerTest::Swap(LayerTest* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LayerTest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LayerTest_descriptor_;
  metadata.reflection = LayerTest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace laryer

// @@protoc_insertion_point(global_scope)
