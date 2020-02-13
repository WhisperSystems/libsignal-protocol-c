/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: LocalStorageProtocol.proto */

#ifndef PROTOBUF_C_LocalStorageProtocol_2eproto__INCLUDED
#define PROTOBUF_C_LocalStorageProtocol_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Textsecure__SessionStructure Textsecure__SessionStructure;
typedef struct _Textsecure__SessionStructure__Chain Textsecure__SessionStructure__Chain;
typedef struct _Textsecure__SessionStructure__Chain__ChainKey Textsecure__SessionStructure__Chain__ChainKey;
typedef struct _Textsecure__SessionStructure__Chain__MessageKey Textsecure__SessionStructure__Chain__MessageKey;
typedef struct _Textsecure__SessionStructure__PendingKeyExchange Textsecure__SessionStructure__PendingKeyExchange;
typedef struct _Textsecure__SessionStructure__PendingPreKey Textsecure__SessionStructure__PendingPreKey;
typedef struct _Textsecure__RecordStructure Textsecure__RecordStructure;
typedef struct _Textsecure__PreKeyRecordStructure Textsecure__PreKeyRecordStructure;
typedef struct _Textsecure__SignedPreKeyRecordStructure Textsecure__SignedPreKeyRecordStructure;
typedef struct _Textsecure__IdentityKeyPairStructure Textsecure__IdentityKeyPairStructure;
typedef struct _Textsecure__SenderKeyStateStructure Textsecure__SenderKeyStateStructure;
typedef struct _Textsecure__SenderKeyStateStructure__SenderChainKey Textsecure__SenderKeyStateStructure__SenderChainKey;
typedef struct _Textsecure__SenderKeyStateStructure__SenderMessageKey Textsecure__SenderKeyStateStructure__SenderMessageKey;
typedef struct _Textsecure__SenderKeyStateStructure__SenderSigningKey Textsecure__SenderKeyStateStructure__SenderSigningKey;
typedef struct _Textsecure__SenderKeyRecordStructure Textsecure__SenderKeyRecordStructure;


/* --- enums --- */


/* --- messages --- */

struct  _Textsecure__SessionStructure__Chain__ChainKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_index;
  uint32_t index;
  protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
};
#define TEXTSECURE__SESSION_STRUCTURE__CHAIN__CHAIN_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__chain__chain_key__descriptor) \
    , 0, 0, 0, {0,NULL} }


struct  _Textsecure__SessionStructure__Chain__MessageKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_index;
  uint32_t index;
  protobuf_c_boolean has_cipherkey;
  ProtobufCBinaryData cipherkey;
  protobuf_c_boolean has_mackey;
  ProtobufCBinaryData mackey;
  protobuf_c_boolean has_iv;
  ProtobufCBinaryData iv;
};
#define TEXTSECURE__SESSION_STRUCTURE__CHAIN__MESSAGE_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__chain__message_key__descriptor) \
    , 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__SessionStructure__Chain
{
  ProtobufCMessage base;
  protobuf_c_boolean has_senderratchetkey;
  ProtobufCBinaryData senderratchetkey;
  protobuf_c_boolean has_senderratchetkeyprivate;
  ProtobufCBinaryData senderratchetkeyprivate;
  Textsecure__SessionStructure__Chain__ChainKey *chainkey;
  size_t n_messagekeys;
  Textsecure__SessionStructure__Chain__MessageKey **messagekeys;
};
#define TEXTSECURE__SESSION_STRUCTURE__CHAIN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__chain__descriptor) \
    , 0, {0,NULL}, 0, {0,NULL}, NULL, 0,NULL }


struct  _Textsecure__SessionStructure__PendingKeyExchange
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sequence;
  uint32_t sequence;
  protobuf_c_boolean has_localbasekey;
  ProtobufCBinaryData localbasekey;
  protobuf_c_boolean has_localbasekeyprivate;
  ProtobufCBinaryData localbasekeyprivate;
  protobuf_c_boolean has_localratchetkey;
  ProtobufCBinaryData localratchetkey;
  protobuf_c_boolean has_localratchetkeyprivate;
  ProtobufCBinaryData localratchetkeyprivate;
  protobuf_c_boolean has_localidentitykey;
  ProtobufCBinaryData localidentitykey;
  protobuf_c_boolean has_localidentitykeyprivate;
  ProtobufCBinaryData localidentitykeyprivate;
};
#define TEXTSECURE__SESSION_STRUCTURE__PENDING_KEY_EXCHANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__pending_key_exchange__descriptor) \
    , 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__SessionStructure__PendingPreKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_prekeyid;
  uint32_t prekeyid;
  protobuf_c_boolean has_signedprekeyid;
  int32_t signedprekeyid;
  protobuf_c_boolean has_basekey;
  ProtobufCBinaryData basekey;
};
#define TEXTSECURE__SESSION_STRUCTURE__PENDING_PRE_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__pending_pre_key__descriptor) \
    , 0, 0, 0, 0, 0, {0,NULL} }


struct  _Textsecure__SessionStructure
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sessionversion;
  uint32_t sessionversion;
  protobuf_c_boolean has_localidentitypublic;
  ProtobufCBinaryData localidentitypublic;
  protobuf_c_boolean has_remoteidentitypublic;
  ProtobufCBinaryData remoteidentitypublic;
  protobuf_c_boolean has_rootkey;
  ProtobufCBinaryData rootkey;
  protobuf_c_boolean has_previouscounter;
  uint32_t previouscounter;
  Textsecure__SessionStructure__Chain *senderchain;
  size_t n_receiverchains;
  Textsecure__SessionStructure__Chain **receiverchains;
  Textsecure__SessionStructure__PendingKeyExchange *pendingkeyexchange;
  Textsecure__SessionStructure__PendingPreKey *pendingprekey;
  protobuf_c_boolean has_remoteregistrationid;
  uint32_t remoteregistrationid;
  protobuf_c_boolean has_localregistrationid;
  uint32_t localregistrationid;
  protobuf_c_boolean has_needsrefresh;
  protobuf_c_boolean needsrefresh;
  protobuf_c_boolean has_alicebasekey;
  ProtobufCBinaryData alicebasekey;
  protobuf_c_boolean has_alicesbuf;
  ProtobufCBinaryData alicesbuf;
};
#define TEXTSECURE__SESSION_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__session_structure__descriptor) \
    , 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, 0, NULL, 0,NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__RecordStructure
{
  ProtobufCMessage base;
  Textsecure__SessionStructure *currentsession;
  size_t n_previoussessions;
  Textsecure__SessionStructure **previoussessions;
};
#define TEXTSECURE__RECORD_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__record_structure__descriptor) \
    , NULL, 0,NULL }


struct  _Textsecure__PreKeyRecordStructure
{
  ProtobufCMessage base;
  protobuf_c_boolean has_id;
  uint32_t id;
  protobuf_c_boolean has_publickey;
  ProtobufCBinaryData publickey;
  protobuf_c_boolean has_privatekey;
  ProtobufCBinaryData privatekey;
};
#define TEXTSECURE__PRE_KEY_RECORD_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__pre_key_record_structure__descriptor) \
    , 0, 0, 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__SignedPreKeyRecordStructure
{
  ProtobufCMessage base;
  protobuf_c_boolean has_id;
  uint32_t id;
  protobuf_c_boolean has_publickey;
  ProtobufCBinaryData publickey;
  protobuf_c_boolean has_privatekey;
  ProtobufCBinaryData privatekey;
  protobuf_c_boolean has_signature;
  ProtobufCBinaryData signature;
  protobuf_c_boolean has_timestamp;
  uint64_t timestamp;
  protobuf_c_boolean has_rhat;
  ProtobufCBinaryData rhat;
  protobuf_c_boolean has_r_hat;
  ProtobufCBinaryData r_hat;
  protobuf_c_boolean has_shat;
  ProtobufCBinaryData shat;
  protobuf_c_boolean has_chat;
  ProtobufCBinaryData chat;
};
#define TEXTSECURE__SIGNED_PRE_KEY_RECORD_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__signed_pre_key_record_structure__descriptor) \
    , 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, 0, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__IdentityKeyPairStructure
{
  ProtobufCMessage base;
  protobuf_c_boolean has_publickey;
  ProtobufCBinaryData publickey;
  protobuf_c_boolean has_privatekey;
  ProtobufCBinaryData privatekey;
};
#define TEXTSECURE__IDENTITY_KEY_PAIR_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__identity_key_pair_structure__descriptor) \
    , 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__SenderKeyStateStructure__SenderChainKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_iteration;
  uint32_t iteration;
  protobuf_c_boolean has_seed;
  ProtobufCBinaryData seed;
};
#define TEXTSECURE__SENDER_KEY_STATE_STRUCTURE__SENDER_CHAIN_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__sender_key_state_structure__sender_chain_key__descriptor) \
    , 0, 0, 0, {0,NULL} }


struct  _Textsecure__SenderKeyStateStructure__SenderMessageKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_iteration;
  uint32_t iteration;
  protobuf_c_boolean has_seed;
  ProtobufCBinaryData seed;
};
#define TEXTSECURE__SENDER_KEY_STATE_STRUCTURE__SENDER_MESSAGE_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__sender_key_state_structure__sender_message_key__descriptor) \
    , 0, 0, 0, {0,NULL} }


struct  _Textsecure__SenderKeyStateStructure__SenderSigningKey
{
  ProtobufCMessage base;
  protobuf_c_boolean has_public_;
  ProtobufCBinaryData public_;
  protobuf_c_boolean has_private_;
  ProtobufCBinaryData private_;
};
#define TEXTSECURE__SENDER_KEY_STATE_STRUCTURE__SENDER_SIGNING_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__sender_key_state_structure__sender_signing_key__descriptor) \
    , 0, {0,NULL}, 0, {0,NULL} }


struct  _Textsecure__SenderKeyStateStructure
{
  ProtobufCMessage base;
  protobuf_c_boolean has_senderkeyid;
  uint32_t senderkeyid;
  Textsecure__SenderKeyStateStructure__SenderChainKey *senderchainkey;
  Textsecure__SenderKeyStateStructure__SenderSigningKey *sendersigningkey;
  size_t n_sendermessagekeys;
  Textsecure__SenderKeyStateStructure__SenderMessageKey **sendermessagekeys;
};
#define TEXTSECURE__SENDER_KEY_STATE_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__sender_key_state_structure__descriptor) \
    , 0, 0, NULL, NULL, 0,NULL }


struct  _Textsecure__SenderKeyRecordStructure
{
  ProtobufCMessage base;
  size_t n_senderkeystates;
  Textsecure__SenderKeyStateStructure **senderkeystates;
};
#define TEXTSECURE__SENDER_KEY_RECORD_STRUCTURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&textsecure__sender_key_record_structure__descriptor) \
    , 0,NULL }


/* Textsecure__SessionStructure__Chain__ChainKey methods */
void   textsecure__session_structure__chain__chain_key__init
                     (Textsecure__SessionStructure__Chain__ChainKey         *message);
/* Textsecure__SessionStructure__Chain__MessageKey methods */
void   textsecure__session_structure__chain__message_key__init
                     (Textsecure__SessionStructure__Chain__MessageKey         *message);
/* Textsecure__SessionStructure__Chain methods */
void   textsecure__session_structure__chain__init
                     (Textsecure__SessionStructure__Chain         *message);
/* Textsecure__SessionStructure__PendingKeyExchange methods */
void   textsecure__session_structure__pending_key_exchange__init
                     (Textsecure__SessionStructure__PendingKeyExchange         *message);
/* Textsecure__SessionStructure__PendingPreKey methods */
void   textsecure__session_structure__pending_pre_key__init
                     (Textsecure__SessionStructure__PendingPreKey         *message);
/* Textsecure__SessionStructure methods */
void   textsecure__session_structure__init
                     (Textsecure__SessionStructure         *message);
size_t textsecure__session_structure__get_packed_size
                     (const Textsecure__SessionStructure   *message);
size_t textsecure__session_structure__pack
                     (const Textsecure__SessionStructure   *message,
                      uint8_t             *out);
size_t textsecure__session_structure__pack_to_buffer
                     (const Textsecure__SessionStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__SessionStructure *
       textsecure__session_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__session_structure__free_unpacked
                     (Textsecure__SessionStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__RecordStructure methods */
void   textsecure__record_structure__init
                     (Textsecure__RecordStructure         *message);
size_t textsecure__record_structure__get_packed_size
                     (const Textsecure__RecordStructure   *message);
size_t textsecure__record_structure__pack
                     (const Textsecure__RecordStructure   *message,
                      uint8_t             *out);
size_t textsecure__record_structure__pack_to_buffer
                     (const Textsecure__RecordStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__RecordStructure *
       textsecure__record_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__record_structure__free_unpacked
                     (Textsecure__RecordStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__PreKeyRecordStructure methods */
void   textsecure__pre_key_record_structure__init
                     (Textsecure__PreKeyRecordStructure         *message);
size_t textsecure__pre_key_record_structure__get_packed_size
                     (const Textsecure__PreKeyRecordStructure   *message);
size_t textsecure__pre_key_record_structure__pack
                     (const Textsecure__PreKeyRecordStructure   *message,
                      uint8_t             *out);
size_t textsecure__pre_key_record_structure__pack_to_buffer
                     (const Textsecure__PreKeyRecordStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__PreKeyRecordStructure *
       textsecure__pre_key_record_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__pre_key_record_structure__free_unpacked
                     (Textsecure__PreKeyRecordStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__SignedPreKeyRecordStructure methods */
void   textsecure__signed_pre_key_record_structure__init
                     (Textsecure__SignedPreKeyRecordStructure         *message);
size_t textsecure__signed_pre_key_record_structure__get_packed_size
                     (const Textsecure__SignedPreKeyRecordStructure   *message);
size_t textsecure__signed_pre_key_record_structure__pack
                     (const Textsecure__SignedPreKeyRecordStructure   *message,
                      uint8_t             *out);
size_t textsecure__signed_pre_key_record_structure__pack_to_buffer
                     (const Textsecure__SignedPreKeyRecordStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__SignedPreKeyRecordStructure *
       textsecure__signed_pre_key_record_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__signed_pre_key_record_structure__free_unpacked
                     (Textsecure__SignedPreKeyRecordStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__IdentityKeyPairStructure methods */
void   textsecure__identity_key_pair_structure__init
                     (Textsecure__IdentityKeyPairStructure         *message);
size_t textsecure__identity_key_pair_structure__get_packed_size
                     (const Textsecure__IdentityKeyPairStructure   *message);
size_t textsecure__identity_key_pair_structure__pack
                     (const Textsecure__IdentityKeyPairStructure   *message,
                      uint8_t             *out);
size_t textsecure__identity_key_pair_structure__pack_to_buffer
                     (const Textsecure__IdentityKeyPairStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__IdentityKeyPairStructure *
       textsecure__identity_key_pair_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__identity_key_pair_structure__free_unpacked
                     (Textsecure__IdentityKeyPairStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__SenderKeyStateStructure__SenderChainKey methods */
void   textsecure__sender_key_state_structure__sender_chain_key__init
                     (Textsecure__SenderKeyStateStructure__SenderChainKey         *message);
/* Textsecure__SenderKeyStateStructure__SenderMessageKey methods */
void   textsecure__sender_key_state_structure__sender_message_key__init
                     (Textsecure__SenderKeyStateStructure__SenderMessageKey         *message);
/* Textsecure__SenderKeyStateStructure__SenderSigningKey methods */
void   textsecure__sender_key_state_structure__sender_signing_key__init
                     (Textsecure__SenderKeyStateStructure__SenderSigningKey         *message);
/* Textsecure__SenderKeyStateStructure methods */
void   textsecure__sender_key_state_structure__init
                     (Textsecure__SenderKeyStateStructure         *message);
size_t textsecure__sender_key_state_structure__get_packed_size
                     (const Textsecure__SenderKeyStateStructure   *message);
size_t textsecure__sender_key_state_structure__pack
                     (const Textsecure__SenderKeyStateStructure   *message,
                      uint8_t             *out);
size_t textsecure__sender_key_state_structure__pack_to_buffer
                     (const Textsecure__SenderKeyStateStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__SenderKeyStateStructure *
       textsecure__sender_key_state_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__sender_key_state_structure__free_unpacked
                     (Textsecure__SenderKeyStateStructure *message,
                      ProtobufCAllocator *allocator);
/* Textsecure__SenderKeyRecordStructure methods */
void   textsecure__sender_key_record_structure__init
                     (Textsecure__SenderKeyRecordStructure         *message);
size_t textsecure__sender_key_record_structure__get_packed_size
                     (const Textsecure__SenderKeyRecordStructure   *message);
size_t textsecure__sender_key_record_structure__pack
                     (const Textsecure__SenderKeyRecordStructure   *message,
                      uint8_t             *out);
size_t textsecure__sender_key_record_structure__pack_to_buffer
                     (const Textsecure__SenderKeyRecordStructure   *message,
                      ProtobufCBuffer     *buffer);
Textsecure__SenderKeyRecordStructure *
       textsecure__sender_key_record_structure__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   textsecure__sender_key_record_structure__free_unpacked
                     (Textsecure__SenderKeyRecordStructure *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Textsecure__SessionStructure__Chain__ChainKey_Closure)
                 (const Textsecure__SessionStructure__Chain__ChainKey *message,
                  void *closure_data);
typedef void (*Textsecure__SessionStructure__Chain__MessageKey_Closure)
                 (const Textsecure__SessionStructure__Chain__MessageKey *message,
                  void *closure_data);
typedef void (*Textsecure__SessionStructure__Chain_Closure)
                 (const Textsecure__SessionStructure__Chain *message,
                  void *closure_data);
typedef void (*Textsecure__SessionStructure__PendingKeyExchange_Closure)
                 (const Textsecure__SessionStructure__PendingKeyExchange *message,
                  void *closure_data);
typedef void (*Textsecure__SessionStructure__PendingPreKey_Closure)
                 (const Textsecure__SessionStructure__PendingPreKey *message,
                  void *closure_data);
typedef void (*Textsecure__SessionStructure_Closure)
                 (const Textsecure__SessionStructure *message,
                  void *closure_data);
typedef void (*Textsecure__RecordStructure_Closure)
                 (const Textsecure__RecordStructure *message,
                  void *closure_data);
typedef void (*Textsecure__PreKeyRecordStructure_Closure)
                 (const Textsecure__PreKeyRecordStructure *message,
                  void *closure_data);
typedef void (*Textsecure__SignedPreKeyRecordStructure_Closure)
                 (const Textsecure__SignedPreKeyRecordStructure *message,
                  void *closure_data);
typedef void (*Textsecure__IdentityKeyPairStructure_Closure)
                 (const Textsecure__IdentityKeyPairStructure *message,
                  void *closure_data);
typedef void (*Textsecure__SenderKeyStateStructure__SenderChainKey_Closure)
                 (const Textsecure__SenderKeyStateStructure__SenderChainKey *message,
                  void *closure_data);
typedef void (*Textsecure__SenderKeyStateStructure__SenderMessageKey_Closure)
                 (const Textsecure__SenderKeyStateStructure__SenderMessageKey *message,
                  void *closure_data);
typedef void (*Textsecure__SenderKeyStateStructure__SenderSigningKey_Closure)
                 (const Textsecure__SenderKeyStateStructure__SenderSigningKey *message,
                  void *closure_data);
typedef void (*Textsecure__SenderKeyStateStructure_Closure)
                 (const Textsecure__SenderKeyStateStructure *message,
                  void *closure_data);
typedef void (*Textsecure__SenderKeyRecordStructure_Closure)
                 (const Textsecure__SenderKeyRecordStructure *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor textsecure__session_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__session_structure__chain__descriptor;
extern const ProtobufCMessageDescriptor textsecure__session_structure__chain__chain_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__session_structure__chain__message_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__session_structure__pending_key_exchange__descriptor;
extern const ProtobufCMessageDescriptor textsecure__session_structure__pending_pre_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__record_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__pre_key_record_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__signed_pre_key_record_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__identity_key_pair_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__sender_key_state_structure__descriptor;
extern const ProtobufCMessageDescriptor textsecure__sender_key_state_structure__sender_chain_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__sender_key_state_structure__sender_message_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__sender_key_state_structure__sender_signing_key__descriptor;
extern const ProtobufCMessageDescriptor textsecure__sender_key_record_structure__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_LocalStorageProtocol_2eproto__INCLUDED */
