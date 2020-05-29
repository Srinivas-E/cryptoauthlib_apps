#include "atca_test.h"
#ifndef DO_NOT_TEST_CERT

#include "atcacert/atcacert_def.h"

const uint8_t g_test_cert_template_0_device[] = {
    0x30, 0x82, 0x01, 0x8A, 0x30, 0x82, 0x01, 0x30, 0xA0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x0A, 0x40,
    0x01, 0x23, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0xEE, 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x04, 0x03, 0x02, 0x30, 0x3A, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x0A,
    0x0C, 0x07, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x31, 0x26, 0x30, 0x24, 0x06, 0x03, 0x55,
    0x04, 0x03, 0x0C, 0x1D, 0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x41, 0x54, 0x45, 0x43,
    0x43, 0x35, 0x30, 0x38, 0x41, 0x20, 0x53, 0x69, 0x67, 0x6E, 0x65, 0x72, 0x20, 0x58, 0x58, 0x58,
    0x58, 0x30, 0x1E, 0x17, 0x0D, 0x31, 0x35, 0x30, 0x37, 0x33, 0x31, 0x30, 0x30, 0x31, 0x32, 0x31,
    0x36, 0x5A, 0x17, 0x0D, 0x33, 0x35, 0x30, 0x37, 0x33, 0x31, 0x30, 0x30, 0x31, 0x32, 0x31, 0x36,
    0x5A, 0x30, 0x35, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C, 0x07, 0x45, 0x78,
    0x61, 0x6D, 0x70, 0x6C, 0x65, 0x31, 0x21, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C, 0x18,
    0x45, 0x78, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x41, 0x54, 0x45, 0x43, 0x43, 0x35, 0x30, 0x38,
    0x41, 0x20, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A, 0x86,
    0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07, 0x03,
    0x42, 0x00, 0x04, 0xC3, 0xDC, 0x86, 0xE9, 0xCC, 0x59, 0xA1, 0xFA, 0xF8, 0xE6, 0x02, 0xB3, 0x44,
    0x89, 0xD1, 0x70, 0x4A, 0x3B, 0x44, 0x04, 0x52, 0xAA, 0x11, 0x93, 0x35, 0xA9, 0xBE, 0x6F, 0x68,
    0x32, 0xDC, 0x59, 0xCE, 0x5E, 0x74, 0x73, 0xB8, 0x44, 0xBD, 0x08, 0x4D, 0x5D, 0x3D, 0xE5, 0xDE,
    0x21, 0xC3, 0x4F, 0x8D, 0xC1, 0x61, 0x4F, 0x17, 0x27, 0xAF, 0x6D, 0xC4, 0x9C, 0x42, 0x83, 0xEE,
    0x36, 0xE2, 0x31, 0xA3, 0x23, 0x30, 0x21, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x1D, 0x23, 0x04, 0x18,
    0x30, 0x16, 0x80, 0x14, 0x1F, 0xAF, 0x8F, 0x90, 0x86, 0x5F, 0x7D, 0xD2, 0x26, 0xB0, 0x6F, 0xE3,
    0x20, 0x4E, 0x48, 0xA5, 0xD2, 0x94, 0x65, 0xE2, 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE,
    0x3D, 0x04, 0x03, 0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20, 0x5E, 0x13, 0x59, 0x05, 0x08,
    0xDA, 0x03, 0xFD, 0x94, 0x1B, 0xAF, 0xEF, 0x8A, 0x3D, 0xC8, 0x24, 0xE5, 0x49, 0x07, 0xB8, 0xA2,
    0xBD, 0x36, 0x60, 0x26, 0x14, 0x75, 0x27, 0x36, 0x66, 0xE1, 0xAA, 0x02, 0x21, 0x00, 0x96, 0xFF,
    0x2B, 0xDF, 0x34, 0x54, 0x9B, 0x7C, 0x56, 0x8F, 0x54, 0x44, 0x4F, 0xE6, 0xAD, 0x3B, 0xFE, 0x63,
    0xBD, 0xD2, 0x93, 0x65, 0xF2, 0x65, 0x59, 0x22, 0xC6, 0x25, 0x90, 0x7A, 0xEC, 0x19
};

const atcacert_def_t g_test_cert_def_0_device = {
    .type                       = CERTTYPE_X509,
    .template_id                = 0,
    .chain_id                   = 0,
    .private_key_slot           = 0,
    .sn_source                  = SNSRC_DEVICE_SN,
    .cert_sn_dev_loc            = {
        .zone                   = DEVZONE_NONE,
        .slot                   = 0,
        .is_genkey              = 0,
        .offset                 = 0,
        .count                  = 0
    },
    .issue_date_format          = DATEFMT_RFC5280_UTC,
    .expire_date_format         = DATEFMT_RFC5280_UTC,
    .tbs_cert_loc               = {
        .offset                 = 4,
        .count                  = 308
    },
    .expire_years               = 20,
    .public_key_dev_loc         = {
        .zone                   = DEVZONE_DATA,
        .slot                   = 0,
        .is_genkey              = 1,
        .offset                 = 0,
        .count                  = 64
    },
    .comp_cert_dev_loc          = {
        .zone                   = DEVZONE_DATA,
        .slot                   = 10,
        .is_genkey              = 0,
        .offset                 = 0,
        .count                  = 72
    },
    .std_cert_elements          = {
        {   // STDCERT_PUBLIC_KEY
            .offset             = 211,
            .count              = 64
        },
        {   // STDCERT_SIGNATURE
            .offset             = 324,
            .count              = 73
        },
        {   // STDCERT_ISSUE_DATE
            .offset             = 101,
            .count              = 13
        },
        {   // STDCERT_EXPIRE_DATE
            .offset             = 116,
            .count              = 13
        },
        {   // STDCERT_SIGNER_ID
            .offset             = 93,
            .count              = 4
        },
        {   // STDCERT_CERT_SN
            .offset             = 15,
            .count              = 10
        },
        {   // STDCERT_AUTH_KEY_ID
            .offset             = 292,
            .count              = 20
        },
        {   // STDCERT_SUBJ_KEY_ID
            .offset             = 0,
            .count              = 0
        }
    },
    .cert_elements              = NULL,
    .cert_elements_count        = 0,
    .cert_template              = g_test_cert_template_0_device,
    .cert_template_size         = sizeof(g_test_cert_template_0_device),
};
#endif
