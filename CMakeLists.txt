cmake_minimum_required(VERSION 3.0)

set (CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")

project(GmSSL)

add_library(gmssl)

file(
    GLOB 
    gmssl_src
    src/version.c
	src/debug.c
    src/rand.c
    src/hex.c
    src/asn1.c
	src/sm4_common.c
	src/sm4_enc.c
	src/sm4_modes.c
	src/sm4_setkey.c
	src/sm3.c
	src/sm3_hmac.c
	src/sm3_kdf.c
	src/sm2_alg.c
	src/sm2_key.c
	src/sm2_lib.c
	src/sm9_alg.c
	src/sm9_key.c
	src/sm9_lib.c
	src/zuc.c
	src/zuc_modes.c
)

target_sources(gmssl PRIVATE ${gmssl_src})

target_include_directories(gmssl PUBLIC include)