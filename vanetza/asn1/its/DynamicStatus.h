/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/TR103562v211.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_DynamicStatus_H_
#define	_DynamicStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DynamicStatus {
	DynamicStatus_dynamic	= 0,
	DynamicStatus_hasBeenDynamic	= 1,
	DynamicStatus_static	= 2
} e_DynamicStatus;

/* DynamicStatus */
typedef long	 DynamicStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DynamicStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DynamicStatus;
asn_struct_free_f DynamicStatus_free;
asn_struct_print_f DynamicStatus_print;
asn_constr_check_f DynamicStatus_constraint;
ber_type_decoder_f DynamicStatus_decode_ber;
der_type_encoder_f DynamicStatus_encode_der;
xer_type_decoder_f DynamicStatus_decode_xer;
xer_type_encoder_f DynamicStatus_encode_xer;
oer_type_decoder_f DynamicStatus_decode_oer;
oer_type_encoder_f DynamicStatus_encode_oer;
per_type_decoder_f DynamicStatus_decode_uper;
per_type_encoder_f DynamicStatus_encode_uper;
per_type_decoder_f DynamicStatus_decode_aper;
per_type_encoder_f DynamicStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DynamicStatus_H_ */
#include "asn_internal.h"