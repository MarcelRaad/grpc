/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/resource_locator.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "udpa/core/v1/resource_locator.upbdefs.h"

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_core_v1_context_params_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout udpa_core_v1_ResourceLocator_msginit;
extern const upb_msglayout udpa_core_v1_ResourceLocator_Directive_msginit;

static const upb_msglayout *layouts[2] = {
  &udpa_core_v1_ResourceLocator_msginit,
  &udpa_core_v1_ResourceLocator_Directive_msginit,
};

static const char descriptor[756] = {'\n', '#', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 'l', 
'o', 'c', 'a', 't', 'o', 'r', '.', 'p', 'r', 'o', 't', 'o', '\022', '\014', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', 
'1', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 
's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'c', 'o', 'n', 
't', 'e', 'x', 't', '_', 'p', 'a', 'r', 'a', 'm', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 
't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\233', '\004', '\n', '\017', 'R', 'e', 's', 
'o', 'u', 'r', 'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', '\022', 'F', '\n', '\006', 's', 'c', 'h', 'e', 'm', 'e', '\030', '\001', ' ', 
'\001', '(', '\016', '2', '$', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'R', 'e', 's', 'o', 'u', 'r', 
'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', '.', 'S', 'c', 'h', 'e', 'm', 'e', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', 
'\001', 'R', '\006', 's', 'c', 'h', 'e', 'm', 'e', '\022', '\030', '\n', '\002', 'i', 'd', '\030', '\002', ' ', '\003', '(', '\t', 'B', '\010', '\372', 'B', 
'\005', '\222', '\001', '\002', '\010', '\001', 'R', '\002', 'i', 'd', '\022', '\034', '\n', '\t', 'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\030', '\003', 
' ', '\001', '(', '\t', 'R', '\t', 'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\022', ',', '\n', '\r', 'r', 'e', 's', 'o', 'u', 'r', 
'c', 'e', '_', 't', 'y', 'p', 'e', '\030', '\004', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\014', 'r', 
'e', 's', 'o', 'u', 'r', 'c', 'e', 'T', 'y', 'p', 'e', '\022', 'B', '\n', '\r', 'e', 'x', 'a', 'c', 't', '_', 'c', 'o', 'n', 't', 
'e', 'x', 't', '\030', '\005', ' ', '\001', '(', '\013', '2', '\033', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 
'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'a', 'r', 'a', 'm', 's', 'H', '\000', 'R', '\014', 'e', 'x', 'a', 'c', 't', 'C', 'o', 'n', 
't', 'e', 'x', 't', '\022', 'G', '\n', '\n', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', 's', '\030', '\006', ' ', '\003', '(', '\013', '2', 
'\'', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'L', 'o', 
'c', 'a', 't', 'o', 'r', '.', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', 'R', '\n', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'v', 
'e', 's', '\032', '\211', '\001', '\n', '\t', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', '\022', '1', '\n', '\003', 'a', 'l', 't', '\030', '\001', 
' ', '\001', '(', '\013', '2', '\035', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'R', 'e', 's', 'o', 'u', 
'r', 'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', 'H', '\000', 'R', '\003', 'a', 'l', 't', '\022', '7', '\n', '\005', 'e', 'n', 't', 'r', 
'y', '\030', '\002', ' ', '\001', '(', '\t', 'B', '\037', '\372', 'B', '\034', 'r', '\032', '\020', '\001', '2', '\026', '^', '[', '0', '-', '9', 'a', '-', 
'z', 'A', '-', 'Z', '_', '\\', '-', '\\', '.', '/', '~', ':', ']', '+', '$', 'H', '\000', 'R', '\005', 'e', 'n', 't', 'r', 'y', 'B', 
'\020', '\n', '\t', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', '\022', '\003', '\370', 'B', '\001', '\"', '&', '\n', '\006', 'S', 'c', 'h', 'e', 
'm', 'e', '\022', '\010', '\n', '\004', 'U', 'D', 'P', 'A', '\020', '\000', '\022', '\010', '\n', '\004', 'H', 'T', 'T', 'P', '\020', '\001', '\022', '\010', '\n', 
'\004', 'F', 'I', 'L', 'E', '\020', '\002', 'B', '\031', '\n', '\027', 'c', 'o', 'n', 't', 'e', 'x', 't', '_', 'p', 'a', 'r', 'a', 'm', '_', 
's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'r', 'B', '>', '\n', '\034', 'c', 'o', 'm', '.', 'g', 'i', 't', 'h', 'u', 'b', '.', 'u', 
'd', 'p', 'a', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', 'B', '\024', 'R', 'e', 's', 'o', 'u', 'r', 'c', 
'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\010', '\001', 'b', '\006', 
'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_core_v1_context_params_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init udpa_core_v1_resource_locator_proto_upbdefinit = {
  deps,
  layouts,
  "udpa/core/v1/resource_locator.proto",
  UPB_STRVIEW_INIT(descriptor, 756)
};