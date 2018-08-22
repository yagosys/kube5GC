/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_M7Configuration.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_M7Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_M7Configuration, m7period),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_M7period,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m7period"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_M7Configuration, m7_links_to_log),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_Links_to_log,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m7-links-to-log"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_M7Configuration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7055P75,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_M7Configuration_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_M7Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_M7Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* m7period */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m7-links-to-log */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_M7Configuration_specs_1 = {
	sizeof(struct S1AP_M7Configuration),
	offsetof(struct S1AP_M7Configuration, _asn_ctx),
	asn_MAP_S1AP_M7Configuration_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_M7Configuration_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_M7Configuration = {
	"M7Configuration",
	"M7Configuration",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_M7Configuration_tags_1,
	sizeof(asn_DEF_S1AP_M7Configuration_tags_1)
		/sizeof(asn_DEF_S1AP_M7Configuration_tags_1[0]), /* 1 */
	asn_DEF_S1AP_M7Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_M7Configuration_tags_1)
		/sizeof(asn_DEF_S1AP_M7Configuration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_M7Configuration_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_M7Configuration_specs_1	/* Additional specs */
};

