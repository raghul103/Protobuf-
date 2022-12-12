/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_HELLO_PB_H_INCLUDED
#define PB_HELLO_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _Data { 
    float Temp; 
    int32_t count; 
    bool flag; 
} Data;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Data_init_default                        {0, 0, 0}
#define Data_init_zero                           {0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Data_Temp_tag                            1
#define Data_count_tag                           2
#define Data_flag_tag                            3

/* Struct field encoding specification for nanopb */
#define Data_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    Temp,              1) \
X(a, STATIC,   SINGULAR, INT32,    count,             2) \
X(a, STATIC,   SINGULAR, BOOL,     flag,              3)
#define Data_CALLBACK NULL
#define Data_DEFAULT NULL

extern const pb_msgdesc_t Data_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Data_fields &Data_msg

/* Maximum encoded size of messages (where known) */
#define Data_size                                18

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
