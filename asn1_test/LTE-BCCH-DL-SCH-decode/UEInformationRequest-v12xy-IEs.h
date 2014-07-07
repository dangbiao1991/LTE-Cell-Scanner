/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UEInformationRequest_v12xy_IEs_H_
#define	_UEInformationRequest_v12xy_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEInformationRequest_v12xy_IEs__mobilityHistoryReportReq_r12 {
	UEInformationRequest_v12xy_IEs__mobilityHistoryReportReq_r12_true	= 0
} e_UEInformationRequest_v12xy_IEs__mobilityHistoryReportReq_r12;

/* UEInformationRequest-v12xy-IEs */
typedef struct UEInformationRequest_v12xy_IEs {
	long	*mobilityHistoryReportReq_r12	/* OPTIONAL */;
	struct UEInformationRequest_v12xy_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationRequest_v12xy_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mobilityHistoryReportReq_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_v12xy_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationRequest_v12xy_IEs_H_ */
#include <asn_internal.h>