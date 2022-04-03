// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: point_cloud.proto

#include "point_cloud.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace proto_msg {
class LidarPointCloudDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LidarPointCloud>
      _instance;
} _LidarPointCloud_default_instance_;
}  // namespace proto_msg
namespace protobuf_point_5fcloud_2eproto {
static void InitDefaultsLidarPointCloud() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto_msg::_LidarPointCloud_default_instance_;
    new (ptr) ::proto_msg::LidarPointCloud();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto_msg::LidarPointCloud::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LidarPointCloud =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLidarPointCloud}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LidarPointCloud.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, seq_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, frame_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, is_dense_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::proto_msg::LidarPointCloud, data_),
  1,
  2,
  0,
  3,
  4,
  5,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::proto_msg::LidarPointCloud)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::proto_msg::_LidarPointCloud_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "point_cloud.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021point_cloud.proto\022\tproto_msg\"\202\001\n\017Lidar"
      "PointCloud\022\021\n\ttimestamp\030\001 \001(\001\022\013\n\003seq\030\002 \001"
      "(\r\022\020\n\010frame_id\030\003 \001(\t\022\016\n\006height\030\004 \001(\r\022\r\n\005"
      "width\030\005 \001(\r\022\020\n\010is_dense\030\006 \001(\010\022\014\n\004data\030\007 "
      "\003(\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "point_cloud.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_point_5fcloud_2eproto
namespace proto_msg {

// ===================================================================

void LidarPointCloud::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LidarPointCloud::kTimestampFieldNumber;
const int LidarPointCloud::kSeqFieldNumber;
const int LidarPointCloud::kFrameIdFieldNumber;
const int LidarPointCloud::kHeightFieldNumber;
const int LidarPointCloud::kWidthFieldNumber;
const int LidarPointCloud::kIsDenseFieldNumber;
const int LidarPointCloud::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LidarPointCloud::LidarPointCloud()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_point_5fcloud_2eproto::scc_info_LidarPointCloud.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto_msg.LidarPointCloud)
}
LidarPointCloud::LidarPointCloud(const LidarPointCloud& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_frame_id()) {
    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  ::memcpy(&timestamp_, &from.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_dense_) -
    reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
  // @@protoc_insertion_point(copy_constructor:proto_msg.LidarPointCloud)
}

void LidarPointCloud::SharedCtor() {
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_dense_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
}

LidarPointCloud::~LidarPointCloud() {
  // @@protoc_insertion_point(destructor:proto_msg.LidarPointCloud)
  SharedDtor();
}

void LidarPointCloud::SharedDtor() {
  frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LidarPointCloud::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LidarPointCloud::descriptor() {
  ::protobuf_point_5fcloud_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_point_5fcloud_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LidarPointCloud& LidarPointCloud::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_point_5fcloud_2eproto::scc_info_LidarPointCloud.base);
  return *internal_default_instance();
}


void LidarPointCloud::Clear() {
// @@protoc_insertion_point(message_clear_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    frame_id_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 62u) {
    ::memset(&timestamp_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_dense_) -
        reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LidarPointCloud::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto_msg.LidarPointCloud)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 seq = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_seq();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string frame_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->frame_id().data(), static_cast<int>(this->frame_id().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "proto_msg.LidarPointCloud.frame_id");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 height = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 width = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_width();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool is_dense = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_is_dense();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_dense_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float data = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 61u, input, this->mutable_data())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_data())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto_msg.LidarPointCloud)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto_msg.LidarPointCloud)
  return false;
#undef DO_
}

void LidarPointCloud::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp(), output);
  }

  // optional uint32 seq = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->seq(), output);
  }

  // optional string frame_id = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto_msg.LidarPointCloud.frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->frame_id(), output);
  }

  // optional uint32 height = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->height(), output);
  }

  // optional uint32 width = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->width(), output);
  }

  // optional bool is_dense = 6;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_dense(), output);
  }

  // repeated float data = 7;
  for (int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      7, this->data(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto_msg.LidarPointCloud)
}

::google::protobuf::uint8* LidarPointCloud::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp(), target);
  }

  // optional uint32 seq = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->seq(), target);
  }

  // optional string frame_id = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto_msg.LidarPointCloud.frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->frame_id(), target);
  }

  // optional uint32 height = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->height(), target);
  }

  // optional uint32 width = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->width(), target);
  }

  // optional bool is_dense = 6;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_dense(), target);
  }

  // repeated float data = 7;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteFloatToArray(7, this->data_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_msg.LidarPointCloud)
  return target;
}

size_t LidarPointCloud::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto_msg.LidarPointCloud)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated float data = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->data_size());
    total_size += data_size;
  }

  if (_has_bits_[0 / 32] & 63u) {
    // optional string frame_id = 3;
    if (has_frame_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->frame_id());
    }

    // optional double timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 + 8;
    }

    // optional uint32 seq = 2;
    if (has_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seq());
    }

    // optional uint32 height = 4;
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->height());
    }

    // optional uint32 width = 5;
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->width());
    }

    // optional bool is_dense = 6;
    if (has_is_dense()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LidarPointCloud::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto_msg.LidarPointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  const LidarPointCloud* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LidarPointCloud>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto_msg.LidarPointCloud)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto_msg.LidarPointCloud)
    MergeFrom(*source);
  }
}

void LidarPointCloud::MergeFrom(const LidarPointCloud& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto_msg.LidarPointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_frame_id();
      frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      timestamp_ = from.timestamp_;
    }
    if (cached_has_bits & 0x00000004u) {
      seq_ = from.seq_;
    }
    if (cached_has_bits & 0x00000008u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000010u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000020u) {
      is_dense_ = from.is_dense_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LidarPointCloud::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto_msg.LidarPointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LidarPointCloud::CopyFrom(const LidarPointCloud& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto_msg.LidarPointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LidarPointCloud::IsInitialized() const {
  return true;
}

void LidarPointCloud::Swap(LidarPointCloud* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LidarPointCloud::InternalSwap(LidarPointCloud* other) {
  using std::swap;
  data_.InternalSwap(&other->data_);
  frame_id_.Swap(&other->frame_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
  swap(seq_, other->seq_);
  swap(height_, other->height_);
  swap(width_, other->width_);
  swap(is_dense_, other->is_dense_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LidarPointCloud::GetMetadata() const {
  protobuf_point_5fcloud_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_point_5fcloud_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto_msg
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::proto_msg::LidarPointCloud* Arena::CreateMaybeMessage< ::proto_msg::LidarPointCloud >(Arena* arena) {
  return Arena::CreateInternal< ::proto_msg::LidarPointCloud >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
