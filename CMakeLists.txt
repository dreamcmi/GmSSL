cmake_minimum_required(VERSION 3.0)

set (CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")

project(GmSSL)

add_library(gmssl)

file(
    GLOB 
    gmssl_src
    src/version.c
	src/debug.c
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
	src/aes.c
	src/aes_modes.c
	src/sha256.c
	src/sha512.c
	src/chacha20.c
	src/des.c
	src/sha1.c
	src/md5.c
	src/rc4.c
	src/rand.c
	src/hash_drbg.c
	src/block_cipher.c
	src/digest.c
	src/hmac.c
	src/hkdf.c
	src/pbkdf2.c
	src/gf128.c
	src/gcm.c
	src/pkcs8.c
	src/ec.c
	src/rsa.c
	src/asn1.c
	src/hex.c
	src/base64.c
	src/pem.c
	src/x509_oid.c
	src/x509_alg.c
	src/x509_str.c
	src/x509_cer.c
	src/x509_ext.c
	src/x509_req.c
	src/x509_crl.c
	src/cms.c)

target_sources(gmssl PRIVATE ${gmssl_src})

target_include_directories(gmssl PUBLIC include)