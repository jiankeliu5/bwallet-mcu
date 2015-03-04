/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.1 */

#ifndef PB_MESSAGES_PB_H_INCLUDED
#define PB_MESSAGES_PB_H_INCLUDED
#include "pb.h"
#include "types.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MessageType {
    MessageType_MessageType_Initialize = 0,
    MessageType_MessageType_Ping = 1,
    MessageType_MessageType_Success = 2,
    MessageType_MessageType_Failure = 3,
    MessageType_MessageType_ChangePin = 4,
    MessageType_MessageType_WipeDevice = 5,
    MessageType_MessageType_FirmwareErase = 6,
    MessageType_MessageType_FirmwareUpload = 7,
    MessageType_MessageType_GetEntropy = 9,
    MessageType_MessageType_Entropy = 10,
    MessageType_MessageType_GetPublicKey = 11,
    MessageType_MessageType_PublicKey = 12,
    MessageType_MessageType_LoadDevice = 13,
    MessageType_MessageType_ResetDevice = 14,
    MessageType_MessageType_SignTx = 15,
    MessageType_MessageType_SimpleSignTx = 16,
    MessageType_MessageType_Features = 17,
    MessageType_MessageType_PinMatrixRequest = 18,
    MessageType_MessageType_PinMatrixAck = 19,
    MessageType_MessageType_Cancel = 20,
    MessageType_MessageType_TxRequest = 21,
    MessageType_MessageType_TxAck = 22,
    MessageType_MessageType_CipherKeyValue = 23,
    MessageType_MessageType_CipheredKeyValue = 48,
    MessageType_MessageType_ClearSession = 24,
    MessageType_MessageType_ApplySettings = 25,
    MessageType_MessageType_ButtonRequest = 26,
    MessageType_MessageType_ButtonAck = 27,
    MessageType_MessageType_GetAddress = 29,
    MessageType_MessageType_Address = 30,
    MessageType_MessageType_EntropyRequest = 35,
    MessageType_MessageType_EntropyAck = 36,
    MessageType_MessageType_SignMessage = 38,
    MessageType_MessageType_VerifyMessage = 39,
    MessageType_MessageType_MessageSignature = 40,
    MessageType_MessageType_EncryptMessage = 49,
    MessageType_MessageType_EncryptedMessage = 50,
    MessageType_MessageType_DecryptMessage = 51,
    MessageType_MessageType_DecryptedMessage = 52,
    MessageType_MessageType_PassphraseRequest = 41,
    MessageType_MessageType_PassphraseAck = 42,
    MessageType_MessageType_EstimateTxSize = 43,
    MessageType_MessageType_TxSize = 44,
    MessageType_MessageType_RecoveryDevice = 45,
    MessageType_MessageType_WordRequest = 46,
    MessageType_MessageType_WordAck = 47,
    MessageType_MessageType_DebugLinkDecision = 100,
    MessageType_MessageType_DebugLinkGetState = 101,
    MessageType_MessageType_DebugLinkState = 102,
    MessageType_MessageType_DebugLinkStop = 103,
    MessageType_MessageType_DebugLinkLog = 104
} MessageType;

/* Struct definitions */
typedef struct _ButtonAck {
    uint8_t dummy_field;
} ButtonAck;

typedef struct _Cancel {
    uint8_t dummy_field;
} Cancel;

typedef struct _ClearSession {
    uint8_t dummy_field;
} ClearSession;

typedef struct _DebugLinkGetState {
    uint8_t dummy_field;
} DebugLinkGetState;

typedef struct _DebugLinkStop {
    uint8_t dummy_field;
} DebugLinkStop;

typedef struct _EntropyRequest {
    uint8_t dummy_field;
} EntropyRequest;

typedef struct _FirmwareErase {
    uint8_t dummy_field;
} FirmwareErase;

typedef struct _Initialize {
    uint8_t dummy_field;
} Initialize;

typedef struct _PassphraseRequest {
    uint8_t dummy_field;
} PassphraseRequest;

typedef struct _WipeDevice {
    uint8_t dummy_field;
} WipeDevice;

typedef struct _WordRequest {
    uint8_t dummy_field;
} WordRequest;

typedef struct _Address {
    char address[35];
} Address;

typedef struct _ApplySettings {
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    bool has_use_passphrase;
    bool use_passphrase;
} ApplySettings;

typedef struct _ButtonRequest {
    bool has_code;
    ButtonRequestType code;
    bool has_data;
    char data[256];
} ButtonRequest;

typedef struct _ChangePin {
    bool has_remove;
    bool remove;
} ChangePin;

typedef PB_BYTES_ARRAY_T(1024) CipherKeyValue_value_t;

typedef struct _CipherKeyValue {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_key;
    char key[256];
    bool has_value;
    CipherKeyValue_value_t value;
    bool has_encrypt;
    bool encrypt;
    bool has_ask_on_encrypt;
    bool ask_on_encrypt;
    bool has_ask_on_decrypt;
    bool ask_on_decrypt;
} CipherKeyValue;

typedef PB_BYTES_ARRAY_T(1024) CipheredKeyValue_value_t;

typedef struct _CipheredKeyValue {
    bool has_value;
    CipheredKeyValue_value_t value;
} CipheredKeyValue;

typedef struct _DebugLinkDecision {
    bool yes_no;
} DebugLinkDecision;

typedef struct _DebugLinkLog {
    bool has_level;
    uint32_t level;
    bool has_bucket;
    char bucket[33];
    bool has_text;
    char text[256];
} DebugLinkLog;

typedef PB_BYTES_ARRAY_T(1024) DebugLinkState_layout_t;

typedef PB_BYTES_ARRAY_T(128) DebugLinkState_reset_entropy_t;

typedef struct _DebugLinkState {
    bool has_layout;
    DebugLinkState_layout_t layout;
    bool has_pin;
    char pin[10];
    bool has_matrix;
    char matrix[10];
    bool has_mnemonic;
    char mnemonic[241];
    bool has_node;
    HDNodeType node;
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_reset_word;
    char reset_word[12];
    bool has_reset_entropy;
    DebugLinkState_reset_entropy_t reset_entropy;
    bool has_recovery_fake_word;
    char recovery_fake_word[12];
    bool has_recovery_word_pos;
    uint32_t recovery_word_pos;
} DebugLinkState;

typedef PB_BYTES_ARRAY_T(33) DecryptMessage_nonce_t;

typedef PB_BYTES_ARRAY_T(1120) DecryptMessage_message_t;

typedef PB_BYTES_ARRAY_T(8) DecryptMessage_hmac_t;

typedef struct _DecryptMessage {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_nonce;
    DecryptMessage_nonce_t nonce;
    bool has_message;
    DecryptMessage_message_t message;
    bool has_hmac;
    DecryptMessage_hmac_t hmac;
} DecryptMessage;

typedef PB_BYTES_ARRAY_T(1024) DecryptedMessage_message_t;

typedef struct _DecryptedMessage {
    bool has_message;
    DecryptedMessage_message_t message;
    bool has_address;
    char address[35];
} DecryptedMessage;

typedef PB_BYTES_ARRAY_T(33) EncryptMessage_pubkey_t;

typedef PB_BYTES_ARRAY_T(1024) EncryptMessage_message_t;

typedef struct _EncryptMessage {
    bool has_pubkey;
    EncryptMessage_pubkey_t pubkey;
    bool has_message;
    EncryptMessage_message_t message;
    bool has_display_only;
    bool display_only;
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_coin_name;
    char coin_name[17];
} EncryptMessage;

typedef PB_BYTES_ARRAY_T(33) EncryptedMessage_nonce_t;

typedef PB_BYTES_ARRAY_T(1120) EncryptedMessage_message_t;

typedef PB_BYTES_ARRAY_T(8) EncryptedMessage_hmac_t;

typedef struct _EncryptedMessage {
    bool has_nonce;
    EncryptedMessage_nonce_t nonce;
    bool has_message;
    EncryptedMessage_message_t message;
    bool has_hmac;
    EncryptedMessage_hmac_t hmac;
} EncryptedMessage;

typedef PB_BYTES_ARRAY_T(1024) Entropy_entropy_t;

typedef struct _Entropy {
    Entropy_entropy_t entropy;
} Entropy;

typedef PB_BYTES_ARRAY_T(128) EntropyAck_entropy_t;

typedef struct _EntropyAck {
    bool has_entropy;
    EntropyAck_entropy_t entropy;
} EntropyAck;

typedef struct _EstimateTxSize {
    uint32_t outputs_count;
    uint32_t inputs_count;
    bool has_coin_name;
    char coin_name[17];
} EstimateTxSize;

typedef struct _Failure {
    bool has_code;
    FailureType code;
    bool has_message;
    char message[256];
} Failure;

typedef PB_BYTES_ARRAY_T(20) Features_revision_t;

typedef PB_BYTES_ARRAY_T(32) Features_bootloader_hash_t;

typedef struct _Features {
    bool has_vendor;
    char vendor[33];
    bool has_major_version;
    uint32_t major_version;
    bool has_minor_version;
    uint32_t minor_version;
    bool has_patch_version;
    uint32_t patch_version;
    bool has_bootloader_mode;
    bool bootloader_mode;
    bool has_device_id;
    char device_id[25];
    bool has_pin_protection;
    bool pin_protection;
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    pb_size_t coins_count;
    CoinType coins[5];
    bool has_initialized;
    bool initialized;
    bool has_revision;
    Features_revision_t revision;
    bool has_bootloader_hash;
    Features_bootloader_hash_t bootloader_hash;
    bool has_imported;
    bool imported;
} Features;

typedef PB_BYTES_ARRAY_T(0) FirmwareUpload_payload_t;

typedef struct _FirmwareUpload {
    FirmwareUpload_payload_t payload;
} FirmwareUpload;

typedef struct _GetAddress {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_coin_name;
    char coin_name[17];
    bool has_show_display;
    bool show_display;
    bool has_multisig;
    MultisigRedeemScriptType multisig;
} GetAddress;

typedef struct _GetEntropy {
    uint32_t size;
} GetEntropy;

typedef struct _GetPublicKey {
    pb_size_t address_n_count;
    uint32_t address_n[8];
} GetPublicKey;

typedef struct _LoadDevice {
    bool has_mnemonic;
    char mnemonic[241];
    bool has_node;
    HDNodeType node;
    bool has_pin;
    char pin[10];
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    bool has_skip_checksum;
    bool skip_checksum;
} LoadDevice;

typedef PB_BYTES_ARRAY_T(65) MessageSignature_signature_t;

typedef struct _MessageSignature {
    bool has_address;
    char address[35];
    bool has_signature;
    MessageSignature_signature_t signature;
} MessageSignature;

typedef struct _PassphraseAck {
    char passphrase[51];
} PassphraseAck;

typedef struct _PinMatrixAck {
    char pin[10];
} PinMatrixAck;

typedef struct _PinMatrixRequest {
    bool has_type;
    PinMatrixRequestType type;
} PinMatrixRequest;

typedef struct _Ping {
    bool has_message;
    char message[256];
    bool has_button_protection;
    bool button_protection;
    bool has_pin_protection;
    bool pin_protection;
    bool has_passphrase_protection;
    bool passphrase_protection;
} Ping;

typedef struct _PublicKey {
    HDNodeType node;
    bool has_xpub;
    char xpub[113];
} PublicKey;

typedef struct _RecoveryDevice {
    bool has_word_count;
    uint32_t word_count;
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_pin_protection;
    bool pin_protection;
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    bool has_enforce_wordlist;
    bool enforce_wordlist;
} RecoveryDevice;

typedef struct _ResetDevice {
    bool has_display_random;
    bool display_random;
    bool has_strength;
    uint32_t strength;
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_pin_protection;
    bool pin_protection;
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
} ResetDevice;

typedef PB_BYTES_ARRAY_T(1024) SignMessage_message_t;

typedef struct _SignMessage {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    SignMessage_message_t message;
    bool has_coin_name;
    char coin_name[17];
} SignMessage;

typedef struct _SignTx {
    uint32_t outputs_count;
    uint32_t inputs_count;
    bool has_coin_name;
    char coin_name[17];
} SignTx;

typedef struct _SimpleSignTx {
    pb_size_t inputs_count;
    TxInputType inputs[0];
    pb_size_t outputs_count;
    TxOutputType outputs[0];
    pb_size_t transactions_count;
    TransactionType transactions[0];
    bool has_coin_name;
    char coin_name[17];
} SimpleSignTx;

typedef struct _Success {
    bool has_message;
    char message[256];
} Success;

typedef struct _TxAck {
    bool has_tx;
    TransactionType tx;
} TxAck;

typedef struct _TxRequest {
    bool has_request_type;
    RequestType request_type;
    bool has_details;
    TxRequestDetailsType details;
    bool has_serialized;
    TxRequestSerializedType serialized;
} TxRequest;

typedef struct _TxSize {
    bool has_tx_size;
    uint32_t tx_size;
} TxSize;

typedef PB_BYTES_ARRAY_T(65) VerifyMessage_signature_t;

typedef PB_BYTES_ARRAY_T(1024) VerifyMessage_message_t;

typedef struct _VerifyMessage {
    bool has_address;
    char address[35];
    bool has_signature;
    VerifyMessage_signature_t signature;
    bool has_message;
    VerifyMessage_message_t message;
} VerifyMessage;

typedef struct _WordAck {
    char word[12];
} WordAck;

/* Default values for struct fields */
extern const char GetAddress_coin_name_default[17];
extern const char LoadDevice_language_default[17];
extern const uint32_t ResetDevice_strength_default;
extern const char ResetDevice_language_default[17];
extern const char RecoveryDevice_language_default[17];
extern const char SignMessage_coin_name_default[17];
extern const char EncryptMessage_coin_name_default[17];
extern const char EstimateTxSize_coin_name_default[17];
extern const char SignTx_coin_name_default[17];
extern const char SimpleSignTx_coin_name_default[17];

/* Initializer values for message structs */
#define Initialize_init_default                  {0}
#define Features_init_default                    {false, "", false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, "", false, "", 0, {CoinType_init_default, CoinType_init_default, CoinType_init_default, CoinType_init_default, CoinType_init_default}, false, 0, false, {0, {0}}, false, {0, {0}}, false, 0}
#define ClearSession_init_default                {0}
#define ApplySettings_init_default               {false, "", false, "", false, 0}
#define ChangePin_init_default                   {false, 0}
#define Ping_init_default                        {false, "", false, 0, false, 0, false, 0}
#define Success_init_default                     {false, ""}
#define Failure_init_default                     {false, (FailureType)0, false, ""}
#define ButtonRequest_init_default               {false, (ButtonRequestType)0, false, ""}
#define ButtonAck_init_default                   {0}
#define PinMatrixRequest_init_default            {false, (PinMatrixRequestType)0}
#define PinMatrixAck_init_default                {""}
#define Cancel_init_default                      {0}
#define PassphraseRequest_init_default           {0}
#define PassphraseAck_init_default               {""}
#define GetEntropy_init_default                  {0}
#define Entropy_init_default                     {{0, {0}}}
#define GetPublicKey_init_default                {0, {0, 0, 0, 0, 0, 0, 0, 0}}
#define PublicKey_init_default                   {HDNodeType_init_default, false, ""}
#define GetAddress_init_default                  {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, "Bitcoin", false, 0, false, MultisigRedeemScriptType_init_default}
#define Address_init_default                     {""}
#define WipeDevice_init_default                  {0}
#define LoadDevice_init_default                  {false, "", false, HDNodeType_init_default, false, "", false, 0, false, "english", false, "", false, 0}
#define ResetDevice_init_default                 {false, 0, false, 128u, false, 0, false, 0, false, "english", false, ""}
#define EntropyRequest_init_default              {0}
#define EntropyAck_init_default                  {false, {0, {0}}}
#define RecoveryDevice_init_default              {false, 0, false, 0, false, 0, false, "english", false, "", false, 0}
#define WordRequest_init_default                 {0}
#define WordAck_init_default                     {""}
#define SignMessage_init_default                 {0, {0, 0, 0, 0, 0, 0, 0, 0}, {0, {0}}, false, "Bitcoin"}
#define VerifyMessage_init_default               {false, "", false, {0, {0}}, false, {0, {0}}}
#define MessageSignature_init_default            {false, "", false, {0, {0}}}
#define EncryptMessage_init_default              {false, {0, {0}}, false, {0, {0}}, false, 0, 0, {0, 0, 0, 0, 0, 0, 0, 0}, false, "Bitcoin"}
#define EncryptedMessage_init_default            {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define DecryptMessage_init_default              {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define DecryptedMessage_init_default            {false, {0, {0}}, false, ""}
#define CipherKeyValue_init_default              {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, "", false, {0, {0}}, false, 0, false, 0, false, 0}
#define CipheredKeyValue_init_default            {false, {0, {0}}}
#define EstimateTxSize_init_default              {0, 0, false, "Bitcoin"}
#define TxSize_init_default                      {false, 0}
#define SignTx_init_default                      {0, 0, false, "Bitcoin"}
#define SimpleSignTx_init_default                {0, {}, 0, {}, 0, {}, false, "Bitcoin"}
#define TxRequest_init_default                   {false, (RequestType)0, false, TxRequestDetailsType_init_default, false, TxRequestSerializedType_init_default}
#define TxAck_init_default                       {false, TransactionType_init_default}
#define FirmwareErase_init_default               {0}
#define FirmwareUpload_init_default              {{0, {0}}}
#define DebugLinkDecision_init_default           {0}
#define DebugLinkGetState_init_default           {0}
#define DebugLinkState_init_default              {false, {0, {0}}, false, "", false, "", false, "", false, HDNodeType_init_default, false, 0, false, "", false, {0, {0}}, false, "", false, 0}
#define DebugLinkStop_init_default               {0}
#define DebugLinkLog_init_default                {false, 0, false, "", false, ""}
#define Initialize_init_zero                     {0}
#define Features_init_zero                       {false, "", false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, "", false, "", 0, {CoinType_init_zero, CoinType_init_zero, CoinType_init_zero, CoinType_init_zero, CoinType_init_zero}, false, 0, false, {0, {0}}, false, {0, {0}}, false, 0}
#define ClearSession_init_zero                   {0}
#define ApplySettings_init_zero                  {false, "", false, "", false, 0}
#define ChangePin_init_zero                      {false, 0}
#define Ping_init_zero                           {false, "", false, 0, false, 0, false, 0}
#define Success_init_zero                        {false, ""}
#define Failure_init_zero                        {false, (FailureType)0, false, ""}
#define ButtonRequest_init_zero                  {false, (ButtonRequestType)0, false, ""}
#define ButtonAck_init_zero                      {0}
#define PinMatrixRequest_init_zero               {false, (PinMatrixRequestType)0}
#define PinMatrixAck_init_zero                   {""}
#define Cancel_init_zero                         {0}
#define PassphraseRequest_init_zero              {0}
#define PassphraseAck_init_zero                  {""}
#define GetEntropy_init_zero                     {0}
#define Entropy_init_zero                        {{0, {0}}}
#define GetPublicKey_init_zero                   {0, {0, 0, 0, 0, 0, 0, 0, 0}}
#define PublicKey_init_zero                      {HDNodeType_init_zero, false, ""}
#define GetAddress_init_zero                     {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, "", false, 0, false, MultisigRedeemScriptType_init_zero}
#define Address_init_zero                        {""}
#define WipeDevice_init_zero                     {0}
#define LoadDevice_init_zero                     {false, "", false, HDNodeType_init_zero, false, "", false, 0, false, "", false, "", false, 0}
#define ResetDevice_init_zero                    {false, 0, false, 0, false, 0, false, 0, false, "", false, ""}
#define EntropyRequest_init_zero                 {0}
#define EntropyAck_init_zero                     {false, {0, {0}}}
#define RecoveryDevice_init_zero                 {false, 0, false, 0, false, 0, false, "", false, "", false, 0}
#define WordRequest_init_zero                    {0}
#define WordAck_init_zero                        {""}
#define SignMessage_init_zero                    {0, {0, 0, 0, 0, 0, 0, 0, 0}, {0, {0}}, false, ""}
#define VerifyMessage_init_zero                  {false, "", false, {0, {0}}, false, {0, {0}}}
#define MessageSignature_init_zero               {false, "", false, {0, {0}}}
#define EncryptMessage_init_zero                 {false, {0, {0}}, false, {0, {0}}, false, 0, 0, {0, 0, 0, 0, 0, 0, 0, 0}, false, ""}
#define EncryptedMessage_init_zero               {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define DecryptMessage_init_zero                 {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define DecryptedMessage_init_zero               {false, {0, {0}}, false, ""}
#define CipherKeyValue_init_zero                 {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, "", false, {0, {0}}, false, 0, false, 0, false, 0}
#define CipheredKeyValue_init_zero               {false, {0, {0}}}
#define EstimateTxSize_init_zero                 {0, 0, false, ""}
#define TxSize_init_zero                         {false, 0}
#define SignTx_init_zero                         {0, 0, false, ""}
#define SimpleSignTx_init_zero                   {0, {}, 0, {}, 0, {}, false, ""}
#define TxRequest_init_zero                      {false, (RequestType)0, false, TxRequestDetailsType_init_zero, false, TxRequestSerializedType_init_zero}
#define TxAck_init_zero                          {false, TransactionType_init_zero}
#define FirmwareErase_init_zero                  {0}
#define FirmwareUpload_init_zero                 {{0, {0}}}
#define DebugLinkDecision_init_zero              {0}
#define DebugLinkGetState_init_zero              {0}
#define DebugLinkState_init_zero                 {false, {0, {0}}, false, "", false, "", false, "", false, HDNodeType_init_zero, false, 0, false, "", false, {0, {0}}, false, "", false, 0}
#define DebugLinkStop_init_zero                  {0}
#define DebugLinkLog_init_zero                   {false, 0, false, "", false, ""}

/* Field tags (for use in manual encoding/decoding) */
#define Address_address_tag                      1
#define ApplySettings_language_tag               1
#define ApplySettings_label_tag                  2
#define ApplySettings_use_passphrase_tag         3
#define ButtonRequest_code_tag                   1
#define ButtonRequest_data_tag                   2
#define ChangePin_remove_tag                     1
#define CipherKeyValue_address_n_tag             1
#define CipherKeyValue_key_tag                   2
#define CipherKeyValue_value_tag                 3
#define CipherKeyValue_encrypt_tag               4
#define CipherKeyValue_ask_on_encrypt_tag        5
#define CipherKeyValue_ask_on_decrypt_tag        6
#define CipheredKeyValue_value_tag               1
#define DebugLinkDecision_yes_no_tag             1
#define DebugLinkLog_level_tag                   1
#define DebugLinkLog_bucket_tag                  2
#define DebugLinkLog_text_tag                    3
#define DebugLinkState_layout_tag                1
#define DebugLinkState_pin_tag                   2
#define DebugLinkState_matrix_tag                3
#define DebugLinkState_mnemonic_tag              4
#define DebugLinkState_node_tag                  5
#define DebugLinkState_passphrase_protection_tag 6
#define DebugLinkState_reset_word_tag            7
#define DebugLinkState_reset_entropy_tag         8
#define DebugLinkState_recovery_fake_word_tag    9
#define DebugLinkState_recovery_word_pos_tag     10
#define DecryptMessage_address_n_tag             1
#define DecryptMessage_nonce_tag                 2
#define DecryptMessage_message_tag               3
#define DecryptMessage_hmac_tag                  4
#define DecryptedMessage_message_tag             1
#define DecryptedMessage_address_tag             2
#define EncryptMessage_pubkey_tag                1
#define EncryptMessage_message_tag               2
#define EncryptMessage_display_only_tag          3
#define EncryptMessage_address_n_tag             4
#define EncryptMessage_coin_name_tag             5
#define EncryptedMessage_nonce_tag               1
#define EncryptedMessage_message_tag             2
#define EncryptedMessage_hmac_tag                3
#define Entropy_entropy_tag                      1
#define EntropyAck_entropy_tag                   1
#define EstimateTxSize_outputs_count_tag         1
#define EstimateTxSize_inputs_count_tag          2
#define EstimateTxSize_coin_name_tag             3
#define Failure_code_tag                         1
#define Failure_message_tag                      2
#define Features_vendor_tag                      1
#define Features_major_version_tag               2
#define Features_minor_version_tag               3
#define Features_patch_version_tag               4
#define Features_bootloader_mode_tag             5
#define Features_device_id_tag                   6
#define Features_pin_protection_tag              7
#define Features_passphrase_protection_tag       8
#define Features_language_tag                    9
#define Features_label_tag                       10
#define Features_coins_tag                       11
#define Features_initialized_tag                 12
#define Features_revision_tag                    13
#define Features_bootloader_hash_tag             14
#define Features_imported_tag                    15
#define FirmwareUpload_payload_tag               1
#define GetAddress_address_n_tag                 1
#define GetAddress_coin_name_tag                 2
#define GetAddress_show_display_tag              3
#define GetAddress_multisig_tag                  4
#define GetEntropy_size_tag                      1
#define GetPublicKey_address_n_tag               1
#define LoadDevice_mnemonic_tag                  1
#define LoadDevice_node_tag                      2
#define LoadDevice_pin_tag                       3
#define LoadDevice_passphrase_protection_tag     4
#define LoadDevice_language_tag                  5
#define LoadDevice_label_tag                     6
#define LoadDevice_skip_checksum_tag             7
#define MessageSignature_address_tag             1
#define MessageSignature_signature_tag           2
#define PassphraseAck_passphrase_tag             1
#define PinMatrixAck_pin_tag                     1
#define PinMatrixRequest_type_tag                1
#define Ping_message_tag                         1
#define Ping_button_protection_tag               2
#define Ping_pin_protection_tag                  3
#define Ping_passphrase_protection_tag           4
#define PublicKey_node_tag                       1
#define PublicKey_xpub_tag                       2
#define RecoveryDevice_word_count_tag            1
#define RecoveryDevice_passphrase_protection_tag 2
#define RecoveryDevice_pin_protection_tag        3
#define RecoveryDevice_language_tag              4
#define RecoveryDevice_label_tag                 5
#define RecoveryDevice_enforce_wordlist_tag      6
#define ResetDevice_display_random_tag           1
#define ResetDevice_strength_tag                 2
#define ResetDevice_passphrase_protection_tag    3
#define ResetDevice_pin_protection_tag           4
#define ResetDevice_language_tag                 5
#define ResetDevice_label_tag                    6
#define SignMessage_address_n_tag                1
#define SignMessage_message_tag                  2
#define SignMessage_coin_name_tag                3
#define SignTx_outputs_count_tag                 1
#define SignTx_inputs_count_tag                  2
#define SignTx_coin_name_tag                     3
#define SimpleSignTx_inputs_tag                  1
#define SimpleSignTx_outputs_tag                 2
#define SimpleSignTx_transactions_tag            3
#define SimpleSignTx_coin_name_tag               4
#define Success_message_tag                      1
#define TxAck_tx_tag                             1
#define TxRequest_request_type_tag               1
#define TxRequest_details_tag                    2
#define TxRequest_serialized_tag                 3
#define TxSize_tx_size_tag                       1
#define VerifyMessage_address_tag                1
#define VerifyMessage_signature_tag              2
#define VerifyMessage_message_tag                3
#define WordAck_word_tag                         1

/* Struct field encoding specification for nanopb */
extern const pb_field_t Initialize_fields[1];
extern const pb_field_t Features_fields[16];
extern const pb_field_t ClearSession_fields[1];
extern const pb_field_t ApplySettings_fields[4];
extern const pb_field_t ChangePin_fields[2];
extern const pb_field_t Ping_fields[5];
extern const pb_field_t Success_fields[2];
extern const pb_field_t Failure_fields[3];
extern const pb_field_t ButtonRequest_fields[3];
extern const pb_field_t ButtonAck_fields[1];
extern const pb_field_t PinMatrixRequest_fields[2];
extern const pb_field_t PinMatrixAck_fields[2];
extern const pb_field_t Cancel_fields[1];
extern const pb_field_t PassphraseRequest_fields[1];
extern const pb_field_t PassphraseAck_fields[2];
extern const pb_field_t GetEntropy_fields[2];
extern const pb_field_t Entropy_fields[2];
extern const pb_field_t GetPublicKey_fields[2];
extern const pb_field_t PublicKey_fields[3];
extern const pb_field_t GetAddress_fields[5];
extern const pb_field_t Address_fields[2];
extern const pb_field_t WipeDevice_fields[1];
extern const pb_field_t LoadDevice_fields[8];
extern const pb_field_t ResetDevice_fields[7];
extern const pb_field_t EntropyRequest_fields[1];
extern const pb_field_t EntropyAck_fields[2];
extern const pb_field_t RecoveryDevice_fields[7];
extern const pb_field_t WordRequest_fields[1];
extern const pb_field_t WordAck_fields[2];
extern const pb_field_t SignMessage_fields[4];
extern const pb_field_t VerifyMessage_fields[4];
extern const pb_field_t MessageSignature_fields[3];
extern const pb_field_t EncryptMessage_fields[6];
extern const pb_field_t EncryptedMessage_fields[4];
extern const pb_field_t DecryptMessage_fields[5];
extern const pb_field_t DecryptedMessage_fields[3];
extern const pb_field_t CipherKeyValue_fields[7];
extern const pb_field_t CipheredKeyValue_fields[2];
extern const pb_field_t EstimateTxSize_fields[4];
extern const pb_field_t TxSize_fields[2];
extern const pb_field_t SignTx_fields[4];
extern const pb_field_t SimpleSignTx_fields[5];
extern const pb_field_t TxRequest_fields[4];
extern const pb_field_t TxAck_fields[2];
extern const pb_field_t FirmwareErase_fields[1];
extern const pb_field_t FirmwareUpload_fields[2];
extern const pb_field_t DebugLinkDecision_fields[2];
extern const pb_field_t DebugLinkGetState_fields[1];
extern const pb_field_t DebugLinkState_fields[11];
extern const pb_field_t DebugLinkStop_fields[1];
extern const pb_field_t DebugLinkLog_fields[4];

/* Maximum encoded size of messages (where known) */
#define Initialize_size                          0
#define Features_size                            (230 + 5*CoinType_size)
#define ClearSession_size                        0
#define ApplySettings_size                       56
#define ChangePin_size                           2
#define Ping_size                                265
#define Success_size                             259
#define Failure_size                             265
#define ButtonRequest_size                       265
#define ButtonAck_size                           0
#define PinMatrixRequest_size                    6
#define PinMatrixAck_size                        12
#define Cancel_size                              0
#define PassphraseRequest_size                   0
#define PassphraseAck_size                       53
#define GetEntropy_size                          6
#define Entropy_size                             1027
#define GetPublicKey_size                        48
#define PublicKey_size                           (121 + HDNodeType_size)
#define GetAddress_size                          (75 + MultisigRedeemScriptType_size)
#define Address_size                             37
#define WipeDevice_size                          0
#define LoadDevice_size                          (320 + HDNodeType_size)
#define ResetDevice_size                         66
#define EntropyRequest_size                      0
#define EntropyAck_size                          131
#define RecoveryDevice_size                      66
#define WordRequest_size                         0
#define WordAck_size                             14
#define SignMessage_size                         1094
#define VerifyMessage_size                       1131
#define MessageSignature_size                    104
#define EncryptMessage_size                      1131
#define EncryptedMessage_size                    1168
#define DecryptMessage_size                      1216
#define DecryptedMessage_size                    1064
#define CipherKeyValue_size                      1340
#define CipheredKeyValue_size                    1027
#define EstimateTxSize_size                      31
#define TxSize_size                              6
#define SignTx_size                              31
#define SimpleSignTx_size                        (19 + 0*TxInputType_size + 0*TxOutputType_size + 0*TransactionType_size)
#define TxRequest_size                           (18 + TxRequestDetailsType_size + TxRequestSerializedType_size)
#define TxAck_size                               (6 + TransactionType_size)
#define FirmwareErase_size                       0
#define FirmwareUpload_size                      2
#define DebugLinkDecision_size                   2
#define DebugLinkGetState_size                   0
#define DebugLinkState_size                      (1468 + HDNodeType_size)
#define DebugLinkStop_size                       0
#define DebugLinkLog_size                        300

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif