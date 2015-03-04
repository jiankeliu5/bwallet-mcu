/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.1 */

#include "storage.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Storage_fields[10] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, Storage, version, version, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, Storage, node, version, &HDNodeType_fields),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, Storage, mnemonic, node, 0),
    PB_FIELD(  4, BOOL    , OPTIONAL, STATIC  , OTHER, Storage, passphrase_protection, mnemonic, 0),
    PB_FIELD(  5, UINT32  , OPTIONAL, STATIC  , OTHER, Storage, pin_failed_attempts, passphrase_protection, 0),
    PB_FIELD(  6, STRING  , OPTIONAL, STATIC  , OTHER, Storage, pin, pin_failed_attempts, 0),
    PB_FIELD(  7, STRING  , OPTIONAL, STATIC  , OTHER, Storage, language, pin, 0),
    PB_FIELD(  8, STRING  , OPTIONAL, STATIC  , OTHER, Storage, label, language, 0),
    PB_FIELD(  9, BOOL    , OPTIONAL, STATIC  , OTHER, Storage, imported, label, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Storage, node) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Storage)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Storage, node) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Storage)
#endif

