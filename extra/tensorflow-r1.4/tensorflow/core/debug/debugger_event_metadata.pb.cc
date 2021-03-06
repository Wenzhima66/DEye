// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/debug/debugger_event_metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/debug/debugger_event_metadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace third_party {
namespace tensorflow {
namespace core {
namespace debug {

namespace {

const ::google::protobuf::Descriptor* DebuggerEventMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DebuggerEventMetadata_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/debug/debugger_event_metadata.proto");
  GOOGLE_CHECK(file != NULL);
  DebuggerEventMetadata_descriptor_ = file->message_type(0);
  static const int DebuggerEventMetadata_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DebuggerEventMetadata, device_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DebuggerEventMetadata, output_slot_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DebuggerEventMetadata, num_chunks_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DebuggerEventMetadata, chunk_index_),
  };
  DebuggerEventMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DebuggerEventMetadata_descriptor_,
      DebuggerEventMetadata::internal_default_instance(),
      DebuggerEventMetadata_offsets_,
      -1,
      -1,
      -1,
      sizeof(DebuggerEventMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DebuggerEventMetadata, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DebuggerEventMetadata_descriptor_, DebuggerEventMetadata::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() {
  DebuggerEventMetadata_default_instance_.Shutdown();
  delete DebuggerEventMetadata_reflection_;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  DebuggerEventMetadata_default_instance_.DefaultConstruct();
  DebuggerEventMetadata_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_once_);
void protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_once_,
                 &protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n3tensorflow/core/debug/debugger_event_m"
    "etadata.proto\022!third_party.tensorflow.co"
    "re.debug\"e\n\025DebuggerEventMetadata\022\016\n\006dev"
    "ice\030\001 \001(\t\022\023\n\013output_slot\030\002 \001(\005\022\022\n\nnum_ch"
    "unks\030\003 \001(\005\022\023\n\013chunk_index\030\004 \001(\005b\006proto3", 199);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/debug/debugger_event_metadata.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DebuggerEventMetadata::kDeviceFieldNumber;
const int DebuggerEventMetadata::kOutputSlotFieldNumber;
const int DebuggerEventMetadata::kNumChunksFieldNumber;
const int DebuggerEventMetadata::kChunkIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DebuggerEventMetadata::DebuggerEventMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:third_party.tensorflow.core.debug.DebuggerEventMetadata)
}

void DebuggerEventMetadata::InitAsDefaultInstance() {
}

DebuggerEventMetadata::DebuggerEventMetadata(const DebuggerEventMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:third_party.tensorflow.core.debug.DebuggerEventMetadata)
}

void DebuggerEventMetadata::SharedCtor() {
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&output_slot_, 0, reinterpret_cast<char*>(&chunk_index_) -
    reinterpret_cast<char*>(&output_slot_) + sizeof(chunk_index_));
  _cached_size_ = 0;
}

DebuggerEventMetadata::~DebuggerEventMetadata() {
  // @@protoc_insertion_point(destructor:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  SharedDtor();
}

void DebuggerEventMetadata::SharedDtor() {
  device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void DebuggerEventMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DebuggerEventMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DebuggerEventMetadata_descriptor_;
}

const DebuggerEventMetadata& DebuggerEventMetadata::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebugger_5fevent_5fmetadata_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<DebuggerEventMetadata> DebuggerEventMetadata_default_instance_;

DebuggerEventMetadata* DebuggerEventMetadata::New(::google::protobuf::Arena* arena) const {
  DebuggerEventMetadata* n = new DebuggerEventMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DebuggerEventMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DebuggerEventMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DebuggerEventMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(output_slot_, chunk_index_);
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool DebuggerEventMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string device = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), this->device().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "third_party.tensorflow.core.debug.DebuggerEventMetadata.device"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_output_slot;
        break;
      }

      // optional int32 output_slot = 2;
      case 2: {
        if (tag == 16) {
         parse_output_slot:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &output_slot_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_chunks;
        break;
      }

      // optional int32 num_chunks = 3;
      case 3: {
        if (tag == 24) {
         parse_num_chunks:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_chunks_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_chunk_index;
        break;
      }

      // optional int32 chunk_index = 4;
      case 4: {
        if (tag == 32) {
         parse_chunk_index:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &chunk_index_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  return false;
#undef DO_
}

void DebuggerEventMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  // optional string device = 1;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "third_party.tensorflow.core.debug.DebuggerEventMetadata.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->device(), output);
  }

  // optional int32 output_slot = 2;
  if (this->output_slot() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->output_slot(), output);
  }

  // optional int32 num_chunks = 3;
  if (this->num_chunks() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->num_chunks(), output);
  }

  // optional int32 chunk_index = 4;
  if (this->chunk_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->chunk_index(), output);
  }

  // @@protoc_insertion_point(serialize_end:third_party.tensorflow.core.debug.DebuggerEventMetadata)
}

::google::protobuf::uint8* DebuggerEventMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  // optional string device = 1;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "third_party.tensorflow.core.debug.DebuggerEventMetadata.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->device(), target);
  }

  // optional int32 output_slot = 2;
  if (this->output_slot() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->output_slot(), target);
  }

  // optional int32 num_chunks = 3;
  if (this->num_chunks() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->num_chunks(), target);
  }

  // optional int32 chunk_index = 4;
  if (this->chunk_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->chunk_index(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  return target;
}

size_t DebuggerEventMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  size_t total_size = 0;

  // optional string device = 1;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device());
  }

  // optional int32 output_slot = 2;
  if (this->output_slot() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->output_slot());
  }

  // optional int32 num_chunks = 3;
  if (this->num_chunks() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_chunks());
  }

  // optional int32 chunk_index = 4;
  if (this->chunk_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->chunk_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DebuggerEventMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const DebuggerEventMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DebuggerEventMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:third_party.tensorflow.core.debug.DebuggerEventMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:third_party.tensorflow.core.debug.DebuggerEventMetadata)
    UnsafeMergeFrom(*source);
  }
}

void DebuggerEventMetadata::MergeFrom(const DebuggerEventMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void DebuggerEventMetadata::UnsafeMergeFrom(const DebuggerEventMetadata& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.device().size() > 0) {

    device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_);
  }
  if (from.output_slot() != 0) {
    set_output_slot(from.output_slot());
  }
  if (from.num_chunks() != 0) {
    set_num_chunks(from.num_chunks());
  }
  if (from.chunk_index() != 0) {
    set_chunk_index(from.chunk_index());
  }
}

void DebuggerEventMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DebuggerEventMetadata::CopyFrom(const DebuggerEventMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:third_party.tensorflow.core.debug.DebuggerEventMetadata)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool DebuggerEventMetadata::IsInitialized() const {

  return true;
}

void DebuggerEventMetadata::Swap(DebuggerEventMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DebuggerEventMetadata::InternalSwap(DebuggerEventMetadata* other) {
  device_.Swap(&other->device_);
  std::swap(output_slot_, other->output_slot_);
  std::swap(num_chunks_, other->num_chunks_);
  std::swap(chunk_index_, other->chunk_index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DebuggerEventMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DebuggerEventMetadata_descriptor_;
  metadata.reflection = DebuggerEventMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DebuggerEventMetadata

// optional string device = 1;
void DebuggerEventMetadata::clear_device() {
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& DebuggerEventMetadata::device() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
  return device_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void DebuggerEventMetadata::set_device(const ::std::string& value) {
  
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
}
void DebuggerEventMetadata::set_device(const char* value) {
  
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
}
void DebuggerEventMetadata::set_device(const char* value, size_t size) {
  
  device_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
}
::std::string* DebuggerEventMetadata::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
  return device_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* DebuggerEventMetadata::release_device() {
  // @@protoc_insertion_point(field_release:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
  
  return device_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void DebuggerEventMetadata::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device);
  // @@protoc_insertion_point(field_set_allocated:third_party.tensorflow.core.debug.DebuggerEventMetadata.device)
}

// optional int32 output_slot = 2;
void DebuggerEventMetadata::clear_output_slot() {
  output_slot_ = 0;
}
::google::protobuf::int32 DebuggerEventMetadata::output_slot() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.core.debug.DebuggerEventMetadata.output_slot)
  return output_slot_;
}
void DebuggerEventMetadata::set_output_slot(::google::protobuf::int32 value) {
  
  output_slot_ = value;
  // @@protoc_insertion_point(field_set:third_party.tensorflow.core.debug.DebuggerEventMetadata.output_slot)
}

// optional int32 num_chunks = 3;
void DebuggerEventMetadata::clear_num_chunks() {
  num_chunks_ = 0;
}
::google::protobuf::int32 DebuggerEventMetadata::num_chunks() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.core.debug.DebuggerEventMetadata.num_chunks)
  return num_chunks_;
}
void DebuggerEventMetadata::set_num_chunks(::google::protobuf::int32 value) {
  
  num_chunks_ = value;
  // @@protoc_insertion_point(field_set:third_party.tensorflow.core.debug.DebuggerEventMetadata.num_chunks)
}

// optional int32 chunk_index = 4;
void DebuggerEventMetadata::clear_chunk_index() {
  chunk_index_ = 0;
}
::google::protobuf::int32 DebuggerEventMetadata::chunk_index() const {
  // @@protoc_insertion_point(field_get:third_party.tensorflow.core.debug.DebuggerEventMetadata.chunk_index)
  return chunk_index_;
}
void DebuggerEventMetadata::set_chunk_index(::google::protobuf::int32 value) {
  
  chunk_index_ = value;
  // @@protoc_insertion_point(field_set:third_party.tensorflow.core.debug.DebuggerEventMetadata.chunk_index)
}

inline const DebuggerEventMetadata* DebuggerEventMetadata::internal_default_instance() {
  return &DebuggerEventMetadata_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace debug
}  // namespace core
}  // namespace tensorflow
}  // namespace third_party

// @@protoc_insertion_point(global_scope)
