/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_Global-ENB-ID.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_Global_ENB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Global_ENB_ID, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Global_ENB_ID, eNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1AP_ENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eNB-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_Global_ENB_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7055P49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_Global_ENB_ID_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_Global_ENB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_Global_ENB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_Global_ENB_ID_specs_1 = {
	sizeof(struct S1AP_Global_ENB_ID),
	offsetof(struct S1AP_Global_ENB_ID, _asn_ctx),
	asn_MAP_S1AP_Global_ENB_ID_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_Global_ENB_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_Global_ENB_ID = {
	"Global-ENB-ID",
	"Global-ENB-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_Global_ENB_ID_tags_1,
	sizeof(asn_DEF_S1AP_Global_ENB_ID_tags_1)
		/sizeof(asn_DEF_S1AP_Global_ENB_ID_tags_1[0]), /* 1 */
	asn_DEF_S1AP_Global_ENB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_Global_ENB_ID_tags_1)
		/sizeof(asn_DEF_S1AP_Global_ENB_ID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_Global_ENB_ID_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_Global_ENB_ID_specs_1	/* Additional specs */
};

