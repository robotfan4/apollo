// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chatter.proto

#ifndef PROTOBUF_chatter_2eproto__INCLUDED
#define PROTOBUF_chatter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "time.pb.h"
// @@protoc_insertion_point(includes)
namespace pb_msgs {
class Counter;
class CounterDefaultTypeInternal;
extern CounterDefaultTypeInternal _Counter_default_instance_;
class ShortMessage;
class ShortMessageDefaultTypeInternal;
extern ShortMessageDefaultTypeInternal _ShortMessage_default_instance_;
class Time;
class TimeDefaultTypeInternal;
extern TimeDefaultTypeInternal _Time_default_instance_;
}  // namespace pb_msgs

namespace pb_msgs {

namespace protobuf_chatter_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_chatter_2eproto

// ===================================================================

class ShortMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pb_msgs.ShortMessage) */ {
 public:
  ShortMessage();
  virtual ~ShortMessage();

  ShortMessage(const ShortMessage& from);

  inline ShortMessage& operator=(const ShortMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ShortMessage& default_instance();

  static inline const ShortMessage* internal_default_instance() {
    return reinterpret_cast<const ShortMessage*>(
               &_ShortMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ShortMessage* other);

  // implements Message ----------------------------------------------

  inline ShortMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  ShortMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ShortMessage& from);
  void MergeFrom(const ShortMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ShortMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string content = 2;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // required .pb_msgs.Time stamp = 1;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 1;
  const ::pb_msgs::Time& stamp() const;
  ::pb_msgs::Time* mutable_stamp();
  ::pb_msgs::Time* release_stamp();
  void set_allocated_stamp(::pb_msgs::Time* stamp);

  // @@protoc_insertion_point(class_scope:pb_msgs.ShortMessage)
 private:
  void set_has_stamp();
  void clear_has_stamp();
  void set_has_content();
  void clear_has_content();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::pb_msgs::Time* stamp_;
  friend struct protobuf_chatter_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Counter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pb_msgs.Counter) */ {
 public:
  Counter();
  virtual ~Counter();

  Counter(const Counter& from);

  inline Counter& operator=(const Counter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Counter& default_instance();

  static inline const Counter* internal_default_instance() {
    return reinterpret_cast<const Counter*>(
               &_Counter_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Counter* other);

  // implements Message ----------------------------------------------

  inline Counter* New() const PROTOBUF_FINAL { return New(NULL); }

  Counter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Counter& from);
  void MergeFrom(const Counter& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Counter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 count = 1 [default = 0];
  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 1;
  ::google::protobuf::uint64 count() const;
  void set_count(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:pb_msgs.Counter)
 private:
  void set_has_count();
  void clear_has_count();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 count_;
  friend struct protobuf_chatter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ShortMessage

// required .pb_msgs.Time stamp = 1;
inline bool ShortMessage::has_stamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ShortMessage::set_has_stamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ShortMessage::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ShortMessage::clear_stamp() {
  if (stamp_ != NULL) stamp_->::pb_msgs::Time::Clear();
  clear_has_stamp();
}
inline const ::pb_msgs::Time& ShortMessage::stamp() const {
  // @@protoc_insertion_point(field_get:pb_msgs.ShortMessage.stamp)
  return stamp_ != NULL ? *stamp_
                         : *::pb_msgs::Time::internal_default_instance();
}
inline ::pb_msgs::Time* ShortMessage::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::pb_msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:pb_msgs.ShortMessage.stamp)
  return stamp_;
}
inline ::pb_msgs::Time* ShortMessage::release_stamp() {
  // @@protoc_insertion_point(field_release:pb_msgs.ShortMessage.stamp)
  clear_has_stamp();
  ::pb_msgs::Time* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void ShortMessage::set_allocated_stamp(::pb_msgs::Time* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:pb_msgs.ShortMessage.stamp)
}

// required string content = 2;
inline bool ShortMessage::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ShortMessage::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ShortMessage::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ShortMessage::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& ShortMessage::content() const {
  // @@protoc_insertion_point(field_get:pb_msgs.ShortMessage.content)
  return content_.GetNoArena();
}
inline void ShortMessage::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb_msgs.ShortMessage.content)
}
#if LANG_CXX11
inline void ShortMessage::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb_msgs.ShortMessage.content)
}
#endif
inline void ShortMessage::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb_msgs.ShortMessage.content)
}
inline void ShortMessage::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb_msgs.ShortMessage.content)
}
inline ::std::string* ShortMessage::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:pb_msgs.ShortMessage.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ShortMessage::release_content() {
  // @@protoc_insertion_point(field_release:pb_msgs.ShortMessage.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ShortMessage::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pb_msgs.ShortMessage.content)
}

// -------------------------------------------------------------------

// Counter

// required uint64 count = 1 [default = 0];
inline bool Counter::has_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Counter::set_has_count() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Counter::clear_has_count() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Counter::clear_count() {
  count_ = GOOGLE_ULONGLONG(0);
  clear_has_count();
}
inline ::google::protobuf::uint64 Counter::count() const {
  // @@protoc_insertion_point(field_get:pb_msgs.Counter.count)
  return count_;
}
inline void Counter::set_count(::google::protobuf::uint64 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:pb_msgs.Counter.count)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace pb_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chatter_2eproto__INCLUDED