/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_CNTypeRestrictions_H_
#define	_S1AP_CNTypeRestrictions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_CNTypeRestrictions_Item;

/* S1AP_CNTypeRestrictions */
typedef struct S1AP_CNTypeRestrictions {
	A_SEQUENCE_OF(struct S1AP_CNTypeRestrictions_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_CNTypeRestrictions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CNTypeRestrictions;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CNTypeRestrictions_H_ */
#include <asn_internal.h>
