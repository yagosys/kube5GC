/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_CNType_H_
#define	_S1AP_CNType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CNType {
	S1AP_CNType_fiveGCForbiddden	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_CNType;

/* S1AP_CNType */
typedef long	 S1AP_CNType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_CNType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CNType;
extern const asn_INTEGER_specifics_t asn_SPC_CNType_specs_1;
asn_struct_free_f CNType_free;
asn_struct_print_f CNType_print;
asn_constr_check_f CNType_constraint;
ber_type_decoder_f CNType_decode_ber;
der_type_encoder_f CNType_encode_der;
xer_type_decoder_f CNType_decode_xer;
xer_type_encoder_f CNType_encode_xer;
oer_type_decoder_f CNType_decode_oer;
oer_type_encoder_f CNType_encode_oer;
per_type_decoder_f CNType_decode_uper;
per_type_encoder_f CNType_encode_uper;
per_type_decoder_f CNType_decode_aper;
per_type_encoder_f CNType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CNType_H_ */
#include <asn_internal.h>
