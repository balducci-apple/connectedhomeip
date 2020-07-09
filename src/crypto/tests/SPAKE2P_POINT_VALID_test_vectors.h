/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file - This file contains point validity test vectors.
 */

#ifndef _SPAKE2P_POINT_VALID_TEST_VECTORS_H_
#define _SPAKE2P_POINT_VALID_TEST_VECTORS_H_

namespace chip {
namespace Crypto {

struct spake2p_point_valid_tv {
    const unsigned char *point;
    size_t point_len;
    int valid;
};

static const unsigned char chiptest_ecb486a5e131_point_1[] = { 0x04, 0x27, 0xa3, 0x2c, 0xfb, 0xa5, 0x6e, 0xc7, 0x33, 0x9e, 0x00, 0x1e, 0x7e, 0x1c, 0xa7, 0x7d, 0xdd, 0x2b, 0x05, 0x6c, 0xc2, 0xbd, 0xaa, 0xab, 0x9e, 0xe7, 0xa9, 0x13, 0xa8, 0x72, 0x65, 0x5a, 0x93, 0x77, 0x53, 0x6e, 0x90, 0xcb, 0xd6, 0x62, 0xde, 0x56, 0xe8, 0x87, 0xe0, 0x4a, 0x94, 0x1a, 0xcf, 0xcf, 0x61, 0x50, 0x7d, 0xff, 0xa1, 0x2a, 0x6b, 0x58, 0x85, 0xd1, 0x01, 0xf1, 0x3a, 0xe2, 0x2d };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_2 = { .point = chiptest_ecb486a5e131_point_1, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_3[] = { 0x04, 0x27, 0xa3, 0x2c, 0xfb, 0xa5, 0x6e, 0xc7, 0x33, 0x9e, 0x00, 0x1e, 0x7e, 0x1c, 0xa7, 0x7d, 0xdd, 0x2b, 0x05, 0x6c, 0xc2, 0xbd, 0xaa, 0xab, 0x9e, 0xe7, 0xa9, 0x13, 0xa8, 0x72, 0x65, 0x5a, 0x93, 0x77, 0x53, 0x6e, 0x90, 0xcb, 0xd6, 0x62, 0xde, 0x56, 0xe8, 0x87, 0xe0, 0x4a, 0x94, 0x1a, 0xcf, 0xcf, 0x61, 0x50, 0x7d, 0xff, 0xa1, 0x2a, 0x6b, 0x58, 0x85, 0xd1, 0x01, 0xf1, 0x3a, 0xe2, 0x2e };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_4 = { .point = chiptest_ecb486a5e131_point_3, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_5[] = { 0x04, 0x26, 0x17, 0x7f, 0x61, 0xa5, 0xcb, 0x81, 0xab, 0xf4, 0xd3, 0x16, 0xe1, 0x1b, 0xff, 0x8f, 0x51, 0xc9, 0x39, 0x83, 0xcb, 0xef, 0x8b, 0x1e, 0x2b, 0xb3, 0x15, 0x5a, 0x91, 0x33, 0xe1, 0x17, 0x9a, 0x9b, 0xd1, 0x3b, 0x49, 0x3b, 0x4f, 0xa9, 0x73, 0x70, 0x0c, 0x18, 0xc8, 0x50, 0x7e, 0xd9, 0x4c, 0x61, 0x1f, 0x3d, 0x98, 0x7f, 0x05, 0x3a, 0x7b, 0x26, 0x1a, 0xbf, 0x9f, 0x3c, 0x5a, 0x63, 0x6e };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_6 = { .point = chiptest_ecb486a5e131_point_5, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_7[] = { 0x04, 0x26, 0x17, 0x7f, 0x61, 0xa5, 0xcb, 0x81, 0xab, 0xf4, 0xd3, 0x16, 0xe1, 0x1b, 0xff, 0x8f, 0x51, 0xc9, 0x39, 0x83, 0xcb, 0xef, 0x8b, 0x1e, 0x2b, 0xb3, 0x15, 0x5a, 0x91, 0x33, 0xe1, 0x17, 0x9a, 0x9b, 0xd1, 0x3b, 0x49, 0x3b, 0x4f, 0xa9, 0x73, 0x70, 0x0c, 0x18, 0xc8, 0x50, 0x7e, 0xd9, 0x4c, 0x61, 0x1f, 0x3d, 0x98, 0x7f, 0x05, 0x3a, 0x7b, 0x26, 0x1a, 0xbf, 0x9f, 0x3c, 0x5a, 0x63, 0x6f };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_8 = { .point = chiptest_ecb486a5e131_point_7, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_9[] = { 0x04, 0xd1, 0x14, 0xc1, 0x9a, 0x72, 0xf3, 0x3f, 0xd4, 0x26, 0x3e, 0x3d, 0x01, 0xe6, 0xb3, 0xe0, 0xb4, 0x87, 0xc2, 0x56, 0xe9, 0xc7, 0x2d, 0x4b, 0x72, 0xf2, 0x62, 0xec, 0xf4, 0x78, 0x50, 0x39, 0xd6, 0x0f, 0x3c, 0x84, 0xbc, 0xdc, 0xde, 0x8a, 0x47, 0x0c, 0xb1, 0xfb, 0xf6, 0xd6, 0x19, 0xf6, 0x4d, 0xb8, 0xf8, 0x67, 0x62, 0x2a, 0x6c, 0x61, 0x82, 0x81, 0xd9, 0x9c, 0x0c, 0x44, 0xb3, 0xfe, 0x5f };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_10 = { .point = chiptest_ecb486a5e131_point_9, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_11[] = { 0x04, 0xd1, 0x14, 0xc1, 0x9a, 0x72, 0xf3, 0x3f, 0xd4, 0x26, 0x3e, 0x3d, 0x01, 0xe6, 0xb3, 0xe0, 0xb4, 0x87, 0xc2, 0x56, 0xe9, 0xc7, 0x2d, 0x4b, 0x72, 0xf2, 0x62, 0xec, 0xf4, 0x78, 0x50, 0x39, 0xd6, 0x0f, 0x3c, 0x84, 0xbc, 0xdc, 0xde, 0x8a, 0x47, 0x0c, 0xb1, 0xfb, 0xf6, 0xd6, 0x19, 0xf6, 0x4d, 0xb8, 0xf8, 0x67, 0x62, 0x2a, 0x6c, 0x61, 0x82, 0x81, 0xd9, 0x9c, 0x0c, 0x44, 0xb3, 0xfe, 0x60 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_12 = { .point = chiptest_ecb486a5e131_point_11, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_13[] = { 0x04, 0xb6, 0x4d, 0xb4, 0xfe, 0x10, 0xb9, 0x28, 0x8b, 0x0f, 0xdc, 0x03, 0xe2, 0x65, 0x7c, 0x35, 0x50, 0xe1, 0xf2, 0x6f, 0x61, 0xf6, 0xfe, 0x93, 0x27, 0xa6, 0x8b, 0x01, 0x8a, 0x33, 0x0e, 0xcf, 0x3b, 0x75, 0x5f, 0x39, 0xa5, 0xd2, 0x82, 0x61, 0x36, 0x3c, 0xbb, 0xb9, 0x87, 0xd4, 0x17, 0x59, 0x5e, 0x5d, 0xbf, 0xff, 0xd1, 0xee, 0x2f, 0xa0, 0x7f, 0xb0, 0xda, 0x9e, 0x11, 0x5b, 0x64, 0x57, 0xcc };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_14 = { .point = chiptest_ecb486a5e131_point_13, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_15[] = { 0x04, 0xb6, 0x4d, 0xb4, 0xfe, 0x10, 0xb9, 0x28, 0x8b, 0x0f, 0xdc, 0x03, 0xe2, 0x65, 0x7c, 0x35, 0x50, 0xe1, 0xf2, 0x6f, 0x61, 0xf6, 0xfe, 0x93, 0x27, 0xa6, 0x8b, 0x01, 0x8a, 0x33, 0x0e, 0xcf, 0x3b, 0x75, 0x5f, 0x39, 0xa5, 0xd2, 0x82, 0x61, 0x36, 0x3c, 0xbb, 0xb9, 0x87, 0xd4, 0x17, 0x59, 0x5e, 0x5d, 0xbf, 0xff, 0xd1, 0xee, 0x2f, 0xa0, 0x7f, 0xb0, 0xda, 0x9e, 0x11, 0x5b, 0x64, 0x57, 0xcd };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_16 = { .point = chiptest_ecb486a5e131_point_15, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_17[] = { 0x04, 0xa5, 0x30, 0x29, 0xca, 0xfc, 0xeb, 0xa2, 0x3a, 0xe1, 0xe2, 0x4e, 0x01, 0x19, 0xb0, 0x8f, 0x7b, 0x3a, 0xd9, 0xdd, 0x6c, 0xd3, 0x40, 0xba, 0xa1, 0x41, 0x1a, 0xa9, 0x81, 0xdf, 0x85, 0x3b, 0x37, 0x2f, 0xea, 0x48, 0x17, 0x04, 0xdd, 0xe1, 0x45, 0xb6, 0x7b, 0x3b, 0xa1, 0x2d, 0xfa, 0x10, 0x3a, 0x52, 0x55, 0xdb, 0x2c, 0x84, 0x0c, 0x42, 0x66, 0x58, 0xe8, 0x2c, 0x97, 0xb4, 0x5a, 0x18, 0xce };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_18 = { .point = chiptest_ecb486a5e131_point_17, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_19[] = { 0x04, 0xa5, 0x30, 0x29, 0xca, 0xfc, 0xeb, 0xa2, 0x3a, 0xe1, 0xe2, 0x4e, 0x01, 0x19, 0xb0, 0x8f, 0x7b, 0x3a, 0xd9, 0xdd, 0x6c, 0xd3, 0x40, 0xba, 0xa1, 0x41, 0x1a, 0xa9, 0x81, 0xdf, 0x85, 0x3b, 0x37, 0x2f, 0xea, 0x48, 0x17, 0x04, 0xdd, 0xe1, 0x45, 0xb6, 0x7b, 0x3b, 0xa1, 0x2d, 0xfa, 0x10, 0x3a, 0x52, 0x55, 0xdb, 0x2c, 0x84, 0x0c, 0x42, 0x66, 0x58, 0xe8, 0x2c, 0x97, 0xb4, 0x5a, 0x18, 0xcf };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_20 = { .point = chiptest_ecb486a5e131_point_19, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_21[] = { 0x04, 0x01, 0x89, 0x4f, 0x6e, 0xba, 0xd7, 0x61, 0xca, 0xae, 0x5f, 0x1d, 0x64, 0x86, 0x75, 0x6e, 0xaa, 0x6c, 0xfe, 0xb2, 0xd2, 0xaf, 0x77, 0x49, 0xde, 0x3f, 0xb5, 0xa5, 0xa7, 0xf2, 0x0a, 0xa9, 0xfd, 0x21, 0x8f, 0x65, 0x5c, 0x07, 0x72, 0xda, 0x59, 0x90, 0xc3, 0xae, 0xd6, 0x5c, 0xb9, 0x7c, 0xf5, 0x53, 0x5e, 0xbc, 0x15, 0x10, 0x22, 0xbe, 0x27, 0xf8, 0x93, 0xa2, 0x3b, 0x0e, 0x53, 0x2d, 0x9c };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_22 = { .point = chiptest_ecb486a5e131_point_21, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_23[] = { 0x04, 0x01, 0x89, 0x4f, 0x6e, 0xba, 0xd7, 0x61, 0xca, 0xae, 0x5f, 0x1d, 0x64, 0x86, 0x75, 0x6e, 0xaa, 0x6c, 0xfe, 0xb2, 0xd2, 0xaf, 0x77, 0x49, 0xde, 0x3f, 0xb5, 0xa5, 0xa7, 0xf2, 0x0a, 0xa9, 0xfd, 0x21, 0x8f, 0x65, 0x5c, 0x07, 0x72, 0xda, 0x59, 0x90, 0xc3, 0xae, 0xd6, 0x5c, 0xb9, 0x7c, 0xf5, 0x53, 0x5e, 0xbc, 0x15, 0x10, 0x22, 0xbe, 0x27, 0xf8, 0x93, 0xa2, 0x3b, 0x0e, 0x53, 0x2d, 0x9d };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_24 = { .point = chiptest_ecb486a5e131_point_23, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_25[] = { 0x04, 0xb5, 0xc3, 0xd3, 0x42, 0x1e, 0x1e, 0xb9, 0x49, 0xc5, 0x70, 0x5d, 0x8d, 0xad, 0x96, 0xc1, 0xbf, 0xdf, 0xd5, 0x0f, 0x74, 0x01, 0xd3, 0x22, 0x2e, 0x8a, 0x04, 0x2d, 0x33, 0xfc, 0xd3, 0x93, 0x5f, 0x73, 0xad, 0x6a, 0x35, 0x60, 0x0f, 0x2e, 0xca, 0xdb, 0x6f, 0x67, 0xcc, 0x1a, 0x78, 0x08, 0x79, 0xc6, 0x05, 0x3d, 0x60, 0xaa, 0x1b, 0x2b, 0xfb, 0xd1, 0x20, 0xc8, 0x3f, 0x19, 0x4f, 0xf4, 0xe6 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_26 = { .point = chiptest_ecb486a5e131_point_25, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_27[] = { 0x04, 0xb5, 0xc3, 0xd3, 0x42, 0x1e, 0x1e, 0xb9, 0x49, 0xc5, 0x70, 0x5d, 0x8d, 0xad, 0x96, 0xc1, 0xbf, 0xdf, 0xd5, 0x0f, 0x74, 0x01, 0xd3, 0x22, 0x2e, 0x8a, 0x04, 0x2d, 0x33, 0xfc, 0xd3, 0x93, 0x5f, 0x73, 0xad, 0x6a, 0x35, 0x60, 0x0f, 0x2e, 0xca, 0xdb, 0x6f, 0x67, 0xcc, 0x1a, 0x78, 0x08, 0x79, 0xc6, 0x05, 0x3d, 0x60, 0xaa, 0x1b, 0x2b, 0xfb, 0xd1, 0x20, 0xc8, 0x3f, 0x19, 0x4f, 0xf4, 0xe7 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_28 = { .point = chiptest_ecb486a5e131_point_27, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_29[] = { 0x04, 0x90, 0x7f, 0x1c, 0x14, 0x0c, 0x97, 0x5d, 0xae, 0x92, 0x2e, 0x0e, 0x34, 0x74, 0x58, 0x34, 0xe5, 0xe5, 0x62, 0x9a, 0x4c, 0x95, 0xd4, 0xe5, 0x36, 0x3b, 0x6f, 0x0a, 0xae, 0x91, 0x66, 0x54, 0x26, 0x17, 0x31, 0x5a, 0x80, 0xd4, 0xc5, 0xd9, 0x21, 0x5f, 0x41, 0x00, 0x4f, 0x1c, 0x20, 0x8a, 0x3a, 0x62, 0xf2, 0x60, 0x0b, 0xcd, 0x68, 0xc2, 0xe5, 0x8f, 0x8e, 0xb2, 0x42, 0xd1, 0x3a, 0x73, 0x08 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_30 = { .point = chiptest_ecb486a5e131_point_29, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_31[] = { 0x04, 0x90, 0x7f, 0x1c, 0x14, 0x0c, 0x97, 0x5d, 0xae, 0x92, 0x2e, 0x0e, 0x34, 0x74, 0x58, 0x34, 0xe5, 0xe5, 0x62, 0x9a, 0x4c, 0x95, 0xd4, 0xe5, 0x36, 0x3b, 0x6f, 0x0a, 0xae, 0x91, 0x66, 0x54, 0x26, 0x17, 0x31, 0x5a, 0x80, 0xd4, 0xc5, 0xd9, 0x21, 0x5f, 0x41, 0x00, 0x4f, 0x1c, 0x20, 0x8a, 0x3a, 0x62, 0xf2, 0x60, 0x0b, 0xcd, 0x68, 0xc2, 0xe5, 0x8f, 0x8e, 0xb2, 0x42, 0xd1, 0x3a, 0x73, 0x09 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_32 = { .point = chiptest_ecb486a5e131_point_31, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_33[] = { 0x04, 0xb7, 0xad, 0xdc, 0x94, 0xb0, 0xd8, 0xc0, 0x27, 0x5c, 0x41, 0xb1, 0x34, 0xab, 0xcc, 0xb2, 0xb3, 0x82, 0x4a, 0xa7, 0x80, 0xcb, 0x15, 0xbd, 0x78, 0xfc, 0x07, 0x2f, 0x3d, 0xba, 0x17, 0x44, 0x3b, 0x5b, 0x85, 0xf3, 0xc2, 0x97, 0x41, 0xa8, 0x27, 0x91, 0xad, 0x56, 0x75, 0x91, 0xe6, 0x4c, 0xd5, 0x7a, 0x4d, 0x77, 0x89, 0x67, 0xe5, 0x13, 0x23, 0xae, 0x7c, 0x1f, 0xa7, 0xa2, 0x13, 0x5f, 0x37 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_34 = { .point = chiptest_ecb486a5e131_point_33, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_35[] = { 0x04, 0xb7, 0xad, 0xdc, 0x94, 0xb0, 0xd8, 0xc0, 0x27, 0x5c, 0x41, 0xb1, 0x34, 0xab, 0xcc, 0xb2, 0xb3, 0x82, 0x4a, 0xa7, 0x80, 0xcb, 0x15, 0xbd, 0x78, 0xfc, 0x07, 0x2f, 0x3d, 0xba, 0x17, 0x44, 0x3b, 0x5b, 0x85, 0xf3, 0xc2, 0x97, 0x41, 0xa8, 0x27, 0x91, 0xad, 0x56, 0x75, 0x91, 0xe6, 0x4c, 0xd5, 0x7a, 0x4d, 0x77, 0x89, 0x67, 0xe5, 0x13, 0x23, 0xae, 0x7c, 0x1f, 0xa7, 0xa2, 0x13, 0x5f, 0x38 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_36 = { .point = chiptest_ecb486a5e131_point_35, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_37[] = { 0x04, 0xbc, 0x1d, 0xfd, 0x9c, 0x92, 0x09, 0x25, 0x78, 0xee, 0x4a, 0xc2, 0xf3, 0x66, 0x0d, 0x7e, 0xe8, 0xf4, 0x00, 0xab, 0x48, 0xdb, 0x71, 0x10, 0x16, 0x62, 0x1d, 0x1a, 0xf1, 0xef, 0xe0, 0xa0, 0xb7, 0xd8, 0x27, 0xb9, 0xc8, 0x9d, 0x39, 0xbe, 0xf6, 0x43, 0x97, 0xa7, 0x3f, 0x4e, 0xb6, 0x27, 0x96, 0x2b, 0x75, 0x94, 0x60, 0x92, 0x44, 0x48, 0x78, 0x8e, 0x69, 0xf5, 0x26, 0x25, 0x3f, 0x9c, 0x82 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_38 = { .point = chiptest_ecb486a5e131_point_37, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_39[] = { 0x04, 0xbc, 0x1d, 0xfd, 0x9c, 0x92, 0x09, 0x25, 0x78, 0xee, 0x4a, 0xc2, 0xf3, 0x66, 0x0d, 0x7e, 0xe8, 0xf4, 0x00, 0xab, 0x48, 0xdb, 0x71, 0x10, 0x16, 0x62, 0x1d, 0x1a, 0xf1, 0xef, 0xe0, 0xa0, 0xb7, 0xd8, 0x27, 0xb9, 0xc8, 0x9d, 0x39, 0xbe, 0xf6, 0x43, 0x97, 0xa7, 0x3f, 0x4e, 0xb6, 0x27, 0x96, 0x2b, 0x75, 0x94, 0x60, 0x92, 0x44, 0x48, 0x78, 0x8e, 0x69, 0xf5, 0x26, 0x25, 0x3f, 0x9c, 0x83 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_40 = { .point = chiptest_ecb486a5e131_point_39, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_41[] = { 0x04, 0x11, 0xfd, 0x2f, 0xbe, 0x37, 0x21, 0x62, 0x26, 0x35, 0x48, 0x88, 0xcf, 0x5c, 0xed, 0x00, 0x3b, 0xa8, 0x09, 0xb0, 0xb7, 0xec, 0x74, 0xbf, 0x85, 0x63, 0x7a, 0x3f, 0x96, 0x61, 0xd9, 0xd1, 0x38, 0xa4, 0xf7, 0xa1, 0xec, 0xf2, 0xde, 0x7d, 0x04, 0x6e, 0x4a, 0xfd, 0x36, 0xb9, 0x86, 0x1f, 0x45, 0x7e, 0x01, 0xcb, 0xce, 0x8f, 0xda, 0xa8, 0xc4, 0xa2, 0x1f, 0x2b, 0xca, 0x88, 0x69, 0xfc, 0x03 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_42 = { .point = chiptest_ecb486a5e131_point_41, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_43[] = { 0x04, 0x11, 0xfd, 0x2f, 0xbe, 0x37, 0x21, 0x62, 0x26, 0x35, 0x48, 0x88, 0xcf, 0x5c, 0xed, 0x00, 0x3b, 0xa8, 0x09, 0xb0, 0xb7, 0xec, 0x74, 0xbf, 0x85, 0x63, 0x7a, 0x3f, 0x96, 0x61, 0xd9, 0xd1, 0x38, 0xa4, 0xf7, 0xa1, 0xec, 0xf2, 0xde, 0x7d, 0x04, 0x6e, 0x4a, 0xfd, 0x36, 0xb9, 0x86, 0x1f, 0x45, 0x7e, 0x01, 0xcb, 0xce, 0x8f, 0xda, 0xa8, 0xc4, 0xa2, 0x1f, 0x2b, 0xca, 0x88, 0x69, 0xfc, 0x04 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_44 = { .point = chiptest_ecb486a5e131_point_43, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_45[] = { 0x04, 0x20, 0xed, 0xe2, 0x27, 0x12, 0xdc, 0x52, 0x30, 0xd0, 0x96, 0x8a, 0xb1, 0xb3, 0xe3, 0x15, 0x72, 0x76, 0x2c, 0xc0, 0xc6, 0xf1, 0xb0, 0x61, 0x35, 0xed, 0xb7, 0x3f, 0xdd, 0xbf, 0x44, 0x9f, 0xd6, 0xf9, 0xc0, 0x62, 0xa3, 0xab, 0x90, 0xe6, 0xcf, 0xae, 0xf1, 0xa9, 0x5b, 0x05, 0xda, 0x56, 0x74, 0x0d, 0x85, 0x66, 0xad, 0x9f, 0xb9, 0x5b, 0x4e, 0x25, 0x1b, 0x89, 0x83, 0x3a, 0xd2, 0x64, 0xf8 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_46 = { .point = chiptest_ecb486a5e131_point_45, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_47[] = { 0x04, 0x20, 0xed, 0xe2, 0x27, 0x12, 0xdc, 0x52, 0x30, 0xd0, 0x96, 0x8a, 0xb1, 0xb3, 0xe3, 0x15, 0x72, 0x76, 0x2c, 0xc0, 0xc6, 0xf1, 0xb0, 0x61, 0x35, 0xed, 0xb7, 0x3f, 0xdd, 0xbf, 0x44, 0x9f, 0xd6, 0xf9, 0xc0, 0x62, 0xa3, 0xab, 0x90, 0xe6, 0xcf, 0xae, 0xf1, 0xa9, 0x5b, 0x05, 0xda, 0x56, 0x74, 0x0d, 0x85, 0x66, 0xad, 0x9f, 0xb9, 0x5b, 0x4e, 0x25, 0x1b, 0x89, 0x83, 0x3a, 0xd2, 0x64, 0xf9 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_48 = { .point = chiptest_ecb486a5e131_point_47, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_49[] = { 0x04, 0x9f, 0xb5, 0x61, 0x99, 0xe2, 0x5e, 0x9a, 0xee, 0xb6, 0x08, 0x36, 0xa2, 0x67, 0xc8, 0x86, 0x78, 0x3f, 0x91, 0xdb, 0xcd, 0xab, 0xb5, 0x85, 0x55, 0x53, 0x3a, 0x98, 0xdc, 0xc5, 0x63, 0xa5, 0xa2, 0xa8, 0xaf, 0x4f, 0x3d, 0x60, 0x57, 0x92, 0xf6, 0x6b, 0x4a, 0x9d, 0x8d, 0xbc, 0xc3, 0x01, 0xe6, 0x8a, 0xd4, 0x50, 0x73, 0xab, 0xb5, 0x52, 0xca, 0x8a, 0xd5, 0xe7, 0x71, 0xf6, 0x77, 0x0a, 0x0a };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_50 = { .point = chiptest_ecb486a5e131_point_49, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_51[] = { 0x04, 0x9f, 0xb5, 0x61, 0x99, 0xe2, 0x5e, 0x9a, 0xee, 0xb6, 0x08, 0x36, 0xa2, 0x67, 0xc8, 0x86, 0x78, 0x3f, 0x91, 0xdb, 0xcd, 0xab, 0xb5, 0x85, 0x55, 0x53, 0x3a, 0x98, 0xdc, 0xc5, 0x63, 0xa5, 0xa2, 0xa8, 0xaf, 0x4f, 0x3d, 0x60, 0x57, 0x92, 0xf6, 0x6b, 0x4a, 0x9d, 0x8d, 0xbc, 0xc3, 0x01, 0xe6, 0x8a, 0xd4, 0x50, 0x73, 0xab, 0xb5, 0x52, 0xca, 0x8a, 0xd5, 0xe7, 0x71, 0xf6, 0x77, 0x0a, 0x0b };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_52 = { .point = chiptest_ecb486a5e131_point_51, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_53[] = { 0x04, 0xb3, 0x5b, 0x83, 0xda, 0x5e, 0xdc, 0x52, 0x0f, 0xc7, 0xac, 0xa9, 0x2c, 0x72, 0xfe, 0xd2, 0x7c, 0x34, 0xaa, 0x3d, 0xe6, 0xef, 0xd0, 0x9e, 0x70, 0x1e, 0xfa, 0x73, 0xda, 0xb3, 0x07, 0xf1, 0x97, 0x6b, 0x4e, 0x6b, 0x2b, 0x3d, 0x21, 0x55, 0xd7, 0xa4, 0x2c, 0x6b, 0x33, 0x95, 0x0a, 0x3f, 0x59, 0xe5, 0xa4, 0x31, 0x5b, 0xad, 0xaf, 0x93, 0x8a, 0xa1, 0xcb, 0xcb, 0x65, 0xec, 0x62, 0xa9, 0x71 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_54 = { .point = chiptest_ecb486a5e131_point_53, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_55[] = { 0x04, 0xb3, 0x5b, 0x83, 0xda, 0x5e, 0xdc, 0x52, 0x0f, 0xc7, 0xac, 0xa9, 0x2c, 0x72, 0xfe, 0xd2, 0x7c, 0x34, 0xaa, 0x3d, 0xe6, 0xef, 0xd0, 0x9e, 0x70, 0x1e, 0xfa, 0x73, 0xda, 0xb3, 0x07, 0xf1, 0x97, 0x6b, 0x4e, 0x6b, 0x2b, 0x3d, 0x21, 0x55, 0xd7, 0xa4, 0x2c, 0x6b, 0x33, 0x95, 0x0a, 0x3f, 0x59, 0xe5, 0xa4, 0x31, 0x5b, 0xad, 0xaf, 0x93, 0x8a, 0xa1, 0xcb, 0xcb, 0x65, 0xec, 0x62, 0xa9, 0x72 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_56 = { .point = chiptest_ecb486a5e131_point_55, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_57[] = { 0x04, 0x01, 0x37, 0x05, 0xf2, 0x24, 0x04, 0x0d, 0x10, 0x33, 0xee, 0x3d, 0x95, 0x66, 0x33, 0xfc, 0xcf, 0xd5, 0x1c, 0x3f, 0x24, 0xc8, 0x03, 0x41, 0x53, 0xa6, 0x67, 0x76, 0xdf, 0xe2, 0x3f, 0xa6, 0xfa, 0x9b, 0x85, 0x52, 0xcc, 0x98, 0x0b, 0xc2, 0x0d, 0x5d, 0x16, 0x44, 0xae, 0x12, 0x2a, 0xbd, 0xe1, 0x42, 0xdb, 0xe9, 0x48, 0x6d, 0xef, 0xf8, 0x91, 0xee, 0x21, 0x2e, 0x09, 0x0d, 0x59, 0x3c, 0xf0 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_58 = { .point = chiptest_ecb486a5e131_point_57, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_59[] = { 0x04, 0x01, 0x37, 0x05, 0xf2, 0x24, 0x04, 0x0d, 0x10, 0x33, 0xee, 0x3d, 0x95, 0x66, 0x33, 0xfc, 0xcf, 0xd5, 0x1c, 0x3f, 0x24, 0xc8, 0x03, 0x41, 0x53, 0xa6, 0x67, 0x76, 0xdf, 0xe2, 0x3f, 0xa6, 0xfa, 0x9b, 0x85, 0x52, 0xcc, 0x98, 0x0b, 0xc2, 0x0d, 0x5d, 0x16, 0x44, 0xae, 0x12, 0x2a, 0xbd, 0xe1, 0x42, 0xdb, 0xe9, 0x48, 0x6d, 0xef, 0xf8, 0x91, 0xee, 0x21, 0x2e, 0x09, 0x0d, 0x59, 0x3c, 0xf1 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_60 = { .point = chiptest_ecb486a5e131_point_59, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_61[] = { 0x04, 0x15, 0xdd, 0x5a, 0xc3, 0x27, 0x20, 0x39, 0xf4, 0xba, 0xa8, 0x65, 0xaa, 0x95, 0xef, 0xbb, 0x31, 0xca, 0x70, 0x69, 0xb6, 0xcc, 0x3b, 0xa3, 0x0e, 0x37, 0xcc, 0xaa, 0xe9, 0x6b, 0x9b, 0xd4, 0x07, 0xd2, 0x56, 0x83, 0x64, 0x7e, 0x24, 0x94, 0xfa, 0x9b, 0xf4, 0x3b, 0x92, 0xed, 0xcc, 0x64, 0xa7, 0x23, 0x8b, 0xa2, 0xc2, 0xea, 0xee, 0x07, 0x76, 0x61, 0xba, 0xc3, 0xda, 0x7b, 0xc6, 0xfc, 0xc4 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_62 = { .point = chiptest_ecb486a5e131_point_61, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_63[] = { 0x04, 0x15, 0xdd, 0x5a, 0xc3, 0x27, 0x20, 0x39, 0xf4, 0xba, 0xa8, 0x65, 0xaa, 0x95, 0xef, 0xbb, 0x31, 0xca, 0x70, 0x69, 0xb6, 0xcc, 0x3b, 0xa3, 0x0e, 0x37, 0xcc, 0xaa, 0xe9, 0x6b, 0x9b, 0xd4, 0x07, 0xd2, 0x56, 0x83, 0x64, 0x7e, 0x24, 0x94, 0xfa, 0x9b, 0xf4, 0x3b, 0x92, 0xed, 0xcc, 0x64, 0xa7, 0x23, 0x8b, 0xa2, 0xc2, 0xea, 0xee, 0x07, 0x76, 0x61, 0xba, 0xc3, 0xda, 0x7b, 0xc6, 0xfc, 0xc5 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_64 = { .point = chiptest_ecb486a5e131_point_63, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_65[] = { 0x04, 0x40, 0xf6, 0x10, 0xda, 0x78, 0x00, 0xe0, 0x8a, 0x43, 0x97, 0xb7, 0xa7, 0x1c, 0xbf, 0xa6, 0x90, 0xed, 0xc9, 0x1a, 0xdb, 0x38, 0xd2, 0x7a, 0xab, 0x11, 0x42, 0x09, 0xf3, 0x3a, 0x34, 0x61, 0x48, 0x5e, 0xb2, 0xad, 0x5f, 0x1f, 0x28, 0xca, 0xd1, 0x3d, 0xd1, 0x00, 0x33, 0xd1, 0xc9, 0x21, 0x27, 0x83, 0xa6, 0xf7, 0x98, 0x0c, 0x95, 0xde, 0x1a, 0x58, 0xf4, 0x52, 0x24, 0x2a, 0x19, 0xac, 0x13 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_66 = { .point = chiptest_ecb486a5e131_point_65, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_67[] = { 0x04, 0x40, 0xf6, 0x10, 0xda, 0x78, 0x00, 0xe0, 0x8a, 0x43, 0x97, 0xb7, 0xa7, 0x1c, 0xbf, 0xa6, 0x90, 0xed, 0xc9, 0x1a, 0xdb, 0x38, 0xd2, 0x7a, 0xab, 0x11, 0x42, 0x09, 0xf3, 0x3a, 0x34, 0x61, 0x48, 0x5e, 0xb2, 0xad, 0x5f, 0x1f, 0x28, 0xca, 0xd1, 0x3d, 0xd1, 0x00, 0x33, 0xd1, 0xc9, 0x21, 0x27, 0x83, 0xa6, 0xf7, 0x98, 0x0c, 0x95, 0xde, 0x1a, 0x58, 0xf4, 0x52, 0x24, 0x2a, 0x19, 0xac, 0x14 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_68 = { .point = chiptest_ecb486a5e131_point_67, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_69[] = { 0x04, 0x9a, 0x93, 0x88, 0xbf, 0x47, 0xf7, 0x6d, 0x60, 0xb7, 0xca, 0x63, 0x82, 0x70, 0x4d, 0xe6, 0x42, 0x42, 0xcc, 0x40, 0xf1, 0xbf, 0x20, 0x1d, 0xeb, 0xf1, 0x1a, 0x2a, 0x88, 0x89, 0x2f, 0x42, 0x9d, 0xfa, 0xa1, 0x22, 0x74, 0x26, 0x30, 0x3a, 0x79, 0x79, 0x01, 0x5f, 0x19, 0xd0, 0x8b, 0x68, 0x3d, 0x7a, 0x50, 0x1e, 0x2e, 0x9d, 0xa4, 0x8c, 0xe0, 0x1b, 0x41, 0xca, 0x72, 0x35, 0x98, 0x04, 0xac };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_70 = { .point = chiptest_ecb486a5e131_point_69, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_71[] = { 0x04, 0x9a, 0x93, 0x88, 0xbf, 0x47, 0xf7, 0x6d, 0x60, 0xb7, 0xca, 0x63, 0x82, 0x70, 0x4d, 0xe6, 0x42, 0x42, 0xcc, 0x40, 0xf1, 0xbf, 0x20, 0x1d, 0xeb, 0xf1, 0x1a, 0x2a, 0x88, 0x89, 0x2f, 0x42, 0x9d, 0xfa, 0xa1, 0x22, 0x74, 0x26, 0x30, 0x3a, 0x79, 0x79, 0x01, 0x5f, 0x19, 0xd0, 0x8b, 0x68, 0x3d, 0x7a, 0x50, 0x1e, 0x2e, 0x9d, 0xa4, 0x8c, 0xe0, 0x1b, 0x41, 0xca, 0x72, 0x35, 0x98, 0x04, 0xad };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_72 = { .point = chiptest_ecb486a5e131_point_71, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_73[] = { 0x04, 0xae, 0xce, 0xe2, 0x61, 0xe5, 0xb6, 0xe6, 0x95, 0x88, 0xeb, 0x38, 0xc8, 0x52, 0xcc, 0x70, 0x70, 0x4c, 0x4f, 0x2d, 0xae, 0x99, 0x34, 0xb9, 0x01, 0x32, 0x44, 0xd2, 0xbe, 0xca, 0x8d, 0x77, 0x69, 0x42, 0x57, 0x8e, 0x6b, 0x0d, 0x6b, 0x91, 0x77, 0xaf, 0xf7, 0xd3, 0x4a, 0xc5, 0xf1, 0xcf, 0x63, 0xdf, 0x87, 0x23, 0x4f, 0xc3, 0xef, 0x5c, 0x6b, 0xe2, 0x0b, 0x96, 0x95, 0xf0, 0xb2, 0xb4, 0x1d };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_74 = { .point = chiptest_ecb486a5e131_point_73, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_75[] = { 0x04, 0xae, 0xce, 0xe2, 0x61, 0xe5, 0xb6, 0xe6, 0x95, 0x88, 0xeb, 0x38, 0xc8, 0x52, 0xcc, 0x70, 0x70, 0x4c, 0x4f, 0x2d, 0xae, 0x99, 0x34, 0xb9, 0x01, 0x32, 0x44, 0xd2, 0xbe, 0xca, 0x8d, 0x77, 0x69, 0x42, 0x57, 0x8e, 0x6b, 0x0d, 0x6b, 0x91, 0x77, 0xaf, 0xf7, 0xd3, 0x4a, 0xc5, 0xf1, 0xcf, 0x63, 0xdf, 0x87, 0x23, 0x4f, 0xc3, 0xef, 0x5c, 0x6b, 0xe2, 0x0b, 0x96, 0x95, 0xf0, 0xb2, 0xb4, 0x1e };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_76 = { .point = chiptest_ecb486a5e131_point_75, .point_len = 65, .valid = 0,  };
static const unsigned char chiptest_ecb486a5e131_point_77[] = { 0x04, 0xe7, 0x87, 0x53, 0x59, 0xa3, 0x84, 0x80, 0x2f, 0x16, 0xfd, 0x4f, 0x79, 0x39, 0xec, 0x88, 0xa8, 0x29, 0x75, 0x1d, 0x85, 0x8e, 0xf6, 0xbd, 0x7c, 0xfd, 0x0f, 0x49, 0x5e, 0x10, 0x13, 0xae, 0x07, 0xbf, 0x21, 0x4c, 0x3a, 0x36, 0xca, 0xe7, 0xa1, 0xc0, 0xb4, 0xa8, 0x88, 0x5f, 0x22, 0x62, 0xeb, 0xc8, 0x07, 0x58, 0x96, 0xe3, 0xce, 0x70, 0x14, 0x54, 0xd2, 0x06, 0x06, 0xcb, 0x0e, 0x46, 0x05 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_78 = { .point = chiptest_ecb486a5e131_point_77, .point_len = 65, .valid = 1,  };
static const unsigned char chiptest_ecb486a5e131_point_79[] = { 0x04, 0xe7, 0x87, 0x53, 0x59, 0xa3, 0x84, 0x80, 0x2f, 0x16, 0xfd, 0x4f, 0x79, 0x39, 0xec, 0x88, 0xa8, 0x29, 0x75, 0x1d, 0x85, 0x8e, 0xf6, 0xbd, 0x7c, 0xfd, 0x0f, 0x49, 0x5e, 0x10, 0x13, 0xae, 0x07, 0xbf, 0x21, 0x4c, 0x3a, 0x36, 0xca, 0xe7, 0xa1, 0xc0, 0xb4, 0xa8, 0x88, 0x5f, 0x22, 0x62, 0xeb, 0xc8, 0x07, 0x58, 0x96, 0xe3, 0xce, 0x70, 0x14, 0x54, 0xd2, 0x06, 0x06, 0xcb, 0x0e, 0x46, 0x06 };
static const struct spake2p_point_valid_tv chiptest_ecb486a5e131_test_vector_80 = { .point = chiptest_ecb486a5e131_point_79, .point_len = 65, .valid = 0,  };
static const struct spake2p_point_valid_tv *point_valid_tvs[] = { &chiptest_ecb486a5e131_test_vector_2, &chiptest_ecb486a5e131_test_vector_4, &chiptest_ecb486a5e131_test_vector_6, &chiptest_ecb486a5e131_test_vector_8, &chiptest_ecb486a5e131_test_vector_10, &chiptest_ecb486a5e131_test_vector_12, &chiptest_ecb486a5e131_test_vector_14, &chiptest_ecb486a5e131_test_vector_16, &chiptest_ecb486a5e131_test_vector_18, &chiptest_ecb486a5e131_test_vector_20, &chiptest_ecb486a5e131_test_vector_22, &chiptest_ecb486a5e131_test_vector_24, &chiptest_ecb486a5e131_test_vector_26, &chiptest_ecb486a5e131_test_vector_28, &chiptest_ecb486a5e131_test_vector_30, &chiptest_ecb486a5e131_test_vector_32, &chiptest_ecb486a5e131_test_vector_34, &chiptest_ecb486a5e131_test_vector_36, &chiptest_ecb486a5e131_test_vector_38, &chiptest_ecb486a5e131_test_vector_40, &chiptest_ecb486a5e131_test_vector_42, &chiptest_ecb486a5e131_test_vector_44, &chiptest_ecb486a5e131_test_vector_46, &chiptest_ecb486a5e131_test_vector_48, &chiptest_ecb486a5e131_test_vector_50, &chiptest_ecb486a5e131_test_vector_52, &chiptest_ecb486a5e131_test_vector_54, &chiptest_ecb486a5e131_test_vector_56, &chiptest_ecb486a5e131_test_vector_58, &chiptest_ecb486a5e131_test_vector_60, &chiptest_ecb486a5e131_test_vector_62, &chiptest_ecb486a5e131_test_vector_64, &chiptest_ecb486a5e131_test_vector_66, &chiptest_ecb486a5e131_test_vector_68, &chiptest_ecb486a5e131_test_vector_70, &chiptest_ecb486a5e131_test_vector_72, &chiptest_ecb486a5e131_test_vector_74, &chiptest_ecb486a5e131_test_vector_76, &chiptest_ecb486a5e131_test_vector_78, &chiptest_ecb486a5e131_test_vector_80 };


}
}

#endif