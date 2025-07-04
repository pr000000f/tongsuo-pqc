/*
 * Copyright 2019-2022 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/core.h>
#include <openssl/types.h>

/* Digests */
extern const OSSL_DISPATCH ossl_sha1_functions[];
extern const OSSL_DISPATCH ossl_sha224_functions[];
extern const OSSL_DISPATCH ossl_sha256_functions[];
extern const OSSL_DISPATCH ossl_sha384_functions[];
extern const OSSL_DISPATCH ossl_sha512_functions[];
extern const OSSL_DISPATCH ossl_sha512_224_functions[];
extern const OSSL_DISPATCH ossl_sha512_256_functions[];
extern const OSSL_DISPATCH ossl_sha3_224_functions[];
extern const OSSL_DISPATCH ossl_sha3_256_functions[];
extern const OSSL_DISPATCH ossl_sha3_384_functions[];
extern const OSSL_DISPATCH ossl_sha3_512_functions[];
extern const OSSL_DISPATCH ossl_keccak_kmac_128_functions[];
extern const OSSL_DISPATCH ossl_keccak_kmac_256_functions[];
extern const OSSL_DISPATCH ossl_shake_128_functions[];
extern const OSSL_DISPATCH ossl_shake_256_functions[];
extern const OSSL_DISPATCH ossl_md5_functions[];
extern const OSSL_DISPATCH ossl_md5_sha1_functions[];
extern const OSSL_DISPATCH ossl_sm3_functions[];
extern const OSSL_DISPATCH ossl_wp_functions[];
extern const OSSL_DISPATCH ossl_nullmd_functions[];

/* Ciphers */
extern const OSSL_DISPATCH ossl_null_functions[];
extern const OSSL_DISPATCH ossl_aes256ecb_functions[];
extern const OSSL_DISPATCH ossl_aes192ecb_functions[];
extern const OSSL_DISPATCH ossl_aes128ecb_functions[];
extern const OSSL_DISPATCH ossl_aes256cbc_functions[];
extern const OSSL_DISPATCH ossl_aes192cbc_functions[];
extern const OSSL_DISPATCH ossl_aes128cbc_functions[];
extern const OSSL_DISPATCH ossl_aes256cbc_cts_functions[];
extern const OSSL_DISPATCH ossl_aes192cbc_cts_functions[];
extern const OSSL_DISPATCH ossl_aes128cbc_cts_functions[];
extern const OSSL_DISPATCH ossl_aes256ofb_functions[];
extern const OSSL_DISPATCH ossl_aes192ofb_functions[];
extern const OSSL_DISPATCH ossl_aes128ofb_functions[];
extern const OSSL_DISPATCH ossl_aes256cfb_functions[];
extern const OSSL_DISPATCH ossl_aes192cfb_functions[];
extern const OSSL_DISPATCH ossl_aes128cfb_functions[];
extern const OSSL_DISPATCH ossl_aes256cfb1_functions[];
extern const OSSL_DISPATCH ossl_aes192cfb1_functions[];
extern const OSSL_DISPATCH ossl_aes128cfb1_functions[];
extern const OSSL_DISPATCH ossl_aes256cfb8_functions[];
extern const OSSL_DISPATCH ossl_aes192cfb8_functions[];
extern const OSSL_DISPATCH ossl_aes128cfb8_functions[];
extern const OSSL_DISPATCH ossl_aes256ctr_functions[];
extern const OSSL_DISPATCH ossl_aes192ctr_functions[];
extern const OSSL_DISPATCH ossl_aes128ctr_functions[];
extern const OSSL_DISPATCH ossl_aes256xts_functions[];
extern const OSSL_DISPATCH ossl_aes128xts_functions[];
#ifndef OPENSSL_NO_OCB
extern const OSSL_DISPATCH ossl_aes256ocb_functions[];
extern const OSSL_DISPATCH ossl_aes192ocb_functions[];
extern const OSSL_DISPATCH ossl_aes128ocb_functions[];
#endif /* OPENSSL_NO_OCB */
extern const OSSL_DISPATCH ossl_aes256gcm_functions[];
extern const OSSL_DISPATCH ossl_aes192gcm_functions[];
extern const OSSL_DISPATCH ossl_aes128gcm_functions[];
extern const OSSL_DISPATCH ossl_aes256ccm_functions[];
extern const OSSL_DISPATCH ossl_aes192ccm_functions[];
extern const OSSL_DISPATCH ossl_aes128ccm_functions[];
extern const OSSL_DISPATCH ossl_aes256wrap_functions[];
extern const OSSL_DISPATCH ossl_aes192wrap_functions[];
extern const OSSL_DISPATCH ossl_aes128wrap_functions[];
extern const OSSL_DISPATCH ossl_aes256wrappad_functions[];
extern const OSSL_DISPATCH ossl_aes192wrappad_functions[];
extern const OSSL_DISPATCH ossl_aes128wrappad_functions[];
extern const OSSL_DISPATCH ossl_aes256wrapinv_functions[];
extern const OSSL_DISPATCH ossl_aes192wrapinv_functions[];
extern const OSSL_DISPATCH ossl_aes128wrapinv_functions[];
extern const OSSL_DISPATCH ossl_aes256wrappadinv_functions[];
extern const OSSL_DISPATCH ossl_aes192wrappadinv_functions[];
extern const OSSL_DISPATCH ossl_aes128wrappadinv_functions[];
extern const OSSL_DISPATCH ossl_aes256cbc_hmac_sha1_functions[];
extern const OSSL_DISPATCH ossl_aes128cbc_hmac_sha1_functions[];
extern const OSSL_DISPATCH ossl_aes256cbc_hmac_sha256_functions[];
extern const OSSL_DISPATCH ossl_aes128cbc_hmac_sha256_functions[];

#ifndef OPENSSL_NO_SM4
extern const OSSL_DISPATCH ossl_sm4128ecb_functions[];
extern const OSSL_DISPATCH ossl_sm4128cbc_functions[];
extern const OSSL_DISPATCH ossl_sm4128ctr_functions[];
extern const OSSL_DISPATCH ossl_sm4128ofb128_functions[];
extern const OSSL_DISPATCH ossl_sm4128cfb128_functions[];
extern const OSSL_DISPATCH ossl_sm4128gcm_functions[];
extern const OSSL_DISPATCH ossl_sm4128ccm_functions[];
#endif /* OPENSSL_NO_SM4 */
#ifndef OPENSSL_NO_WBSM4_XIAOLAI
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984ecb_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984cbc_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984ctr_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984ofb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984cfb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984gcm_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_xiaolai1225984ccm_functions[];
#endif /* OPENSSL_NO_WBSM4_XIAOLAI */
#ifndef OPENSSL_NO_WBSM4_BAIWU
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208ecb_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208cbc_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208ctr_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208ofb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208cfb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208gcm_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_baiwu272638208ccm_functions[];
#endif /* OPENSSL_NO_WBSM4_BAIWU */
#ifndef OPENSSL_NO_WBSM4_WSISE
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560ecb_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560cbc_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560ctr_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560ofb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560cfb128_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560gcm_functions[];
extern const OSSL_DISPATCH ossl_wbsm4_wsise2274560ccm_functions[];
#endif /* OPENSSL_NO_WBSM4_WSISE */
#ifndef OPENSSL_NO_RC5
extern const OSSL_DISPATCH ossl_rc5128ecb_functions[];
extern const OSSL_DISPATCH ossl_rc5128cbc_functions[];
extern const OSSL_DISPATCH ossl_rc5128ofb64_functions[];
extern const OSSL_DISPATCH ossl_rc5128cfb64_functions[];
#endif /* OPENSSL_NO_RC5 */
#ifndef OPENSSL_NO_DES
extern const OSSL_DISPATCH ossl_tdes_ede3_ecb_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede3_cbc_functions[];
# ifndef FIPS_MODULE
extern const OSSL_DISPATCH ossl_tdes_ede3_ofb_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede3_cfb_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede3_cfb8_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede3_cfb1_functions[];

extern const OSSL_DISPATCH ossl_tdes_ede2_ecb_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede2_cbc_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede2_ofb_functions[];
extern const OSSL_DISPATCH ossl_tdes_ede2_cfb_functions[];

extern const OSSL_DISPATCH ossl_tdes_desx_cbc_functions[];
extern const OSSL_DISPATCH ossl_tdes_wrap_cbc_functions[];

extern const OSSL_DISPATCH ossl_des_ecb_functions[];
extern const OSSL_DISPATCH ossl_des_cbc_functions[];
extern const OSSL_DISPATCH ossl_des_ofb64_functions[];
extern const OSSL_DISPATCH ossl_des_cfb64_functions[];
extern const OSSL_DISPATCH ossl_des_cfb1_functions[];
extern const OSSL_DISPATCH ossl_des_cfb8_functions[];
# endif /* FIPS_MODULE */
#endif /* OPENSSL_NO_DES */

#ifndef OPENSSL_NO_RC4
extern const OSSL_DISPATCH ossl_rc440_functions[];
extern const OSSL_DISPATCH ossl_rc4128_functions[];
# ifndef OPENSSL_NO_MD5
extern const OSSL_DISPATCH ossl_rc4_hmac_ossl_md5_functions[];
# endif /* OPENSSL_NO_MD5 */
#endif /* OPENSSL_NO_RC4 */
#ifndef OPENSSL_NO_CHACHA
extern const OSSL_DISPATCH ossl_chacha20_functions[];
# ifndef OPENSSL_NO_POLY1305
extern const OSSL_DISPATCH ossl_chacha20_ossl_poly1305_functions[];
# endif /* OPENSSL_NO_POLY1305 */
#endif /* OPENSSL_NO_CHACHA */

#ifndef OPENSSL_NO_ZUC
extern const OSSL_DISPATCH ossl_zuc_128_eea3_functions[];
#endif /* OPENSSL_NO_ZUC */

#ifndef OPENSSL_NO_SIV
extern const OSSL_DISPATCH ossl_aes128siv_functions[];
extern const OSSL_DISPATCH ossl_aes192siv_functions[];
extern const OSSL_DISPATCH ossl_aes256siv_functions[];
#endif /* OPENSSL_NO_SIV */

/* MACs */
extern const OSSL_DISPATCH ossl_cmac_functions[];
extern const OSSL_DISPATCH ossl_gmac_functions[];
extern const OSSL_DISPATCH ossl_hmac_functions[];
extern const OSSL_DISPATCH ossl_kmac128_functions[];
extern const OSSL_DISPATCH ossl_kmac256_functions[];
extern const OSSL_DISPATCH ossl_siphash_functions[];
extern const OSSL_DISPATCH ossl_poly1305_functions[];
#ifndef OPENSSL_NO_ZUC
extern const OSSL_DISPATCH ossl_eia3_functions[];
#endif

/* KDFs / PRFs */
extern const OSSL_DISPATCH ossl_kdf_pbkdf1_functions[];
extern const OSSL_DISPATCH ossl_kdf_pbkdf2_functions[];
extern const OSSL_DISPATCH ossl_kdf_pkcs12_functions[];
#ifndef OPENSSL_NO_SCRYPT
extern const OSSL_DISPATCH ossl_kdf_scrypt_functions[];
#endif
extern const OSSL_DISPATCH ossl_kdf_tls1_prf_functions[];
extern const OSSL_DISPATCH ossl_kdf_hkdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_tls1_3_kdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_sshkdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_sskdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_x963_kdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_kbkdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_x942_kdf_functions[];
extern const OSSL_DISPATCH ossl_kdf_krb5kdf_functions[];
#if !defined(OPENSSL_NO_WBSM4_XIAOLAI) || !defined(OPENSSL_NO_WBSM4_BAIWU) || \
    !defined(OPENSSL_NO_WBSM4_WSISE)
extern const OSSL_DISPATCH ossl_kdf_wbsm4_functions[];
#endif

/* RNGs */
extern const OSSL_DISPATCH ossl_test_rng_functions[];
extern const OSSL_DISPATCH ossl_seed_src_functions[];
extern const OSSL_DISPATCH ossl_drbg_hash_functions[];
extern const OSSL_DISPATCH ossl_drbg_ossl_hmac_functions[];
extern const OSSL_DISPATCH ossl_drbg_ctr_functions[];
extern const OSSL_DISPATCH crngt_functions[];

/* Key management */
extern const OSSL_DISPATCH ossl_dh_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_dhx_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_dsa_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_rsa_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_rsapss_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_x25519_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_x448_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_ed25519_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_ed448_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_ec_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_kdf_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_keymgmt_functions[];
extern const OSSL_DISPATCH ossl_cmac_legacy_keymgmt_functions[];
#ifndef OPENSSL_NO_SM2
extern const OSSL_DISPATCH ossl_sm2_keymgmt_functions[];
# ifndef OPENSSL_NO_SM2DH_MLKEM768_HYBRID
extern const OSSL_DISPATCH ossl_sm2dh_mlkem768_hybrid_keymgmt_functions[];
# endif
#endif

/* Key Exchange */
extern const OSSL_DISPATCH ossl_dh_keyexch_functions[];
extern const OSSL_DISPATCH ossl_x25519_keyexch_functions[];
extern const OSSL_DISPATCH ossl_x448_keyexch_functions[];
extern const OSSL_DISPATCH ossl_ecdh_keyexch_functions[];
#ifndef OPENSSL_NO_SM2
extern const OSSL_DISPATCH ossl_sm2dh_keyexch_functions[];
# ifndef OPENSSL_NO_SM2DH_MLKEM768_HYBRID
extern const OSSL_DISPATCH ossl_sm2dh_mlkem768_hybrid_keyexch_functions[];
# endif
#endif
extern const OSSL_DISPATCH ossl_kdf_tls1_prf_keyexch_functions[];
extern const OSSL_DISPATCH ossl_kdf_hkdf_keyexch_functions[];
extern const OSSL_DISPATCH ossl_kdf_scrypt_keyexch_functions[];

/* Signature */
extern const OSSL_DISPATCH ossl_dsa_signature_functions[];
extern const OSSL_DISPATCH ossl_rsa_signature_functions[];
extern const OSSL_DISPATCH ossl_ed25519_signature_functions[];
extern const OSSL_DISPATCH ossl_ed448_signature_functions[];
extern const OSSL_DISPATCH ossl_ecdsa_signature_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_hmac_signature_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_siphash_signature_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_poly1305_signature_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_cmac_signature_functions[];
extern const OSSL_DISPATCH ossl_mac_legacy_eia3_signature_functions[];
extern const OSSL_DISPATCH ossl_sm2_signature_functions[];

/* Asym Cipher */
extern const OSSL_DISPATCH ossl_rsa_asym_cipher_functions[];
#ifndef OPENSSL_NO_SM2
extern const OSSL_DISPATCH ossl_sm2_asym_cipher_functions[];
#endif

/* Asym Key encapsulation  */
extern const OSSL_DISPATCH ossl_rsa_asym_kem_functions[];

/* Encoders */
extern const OSSL_DISPATCH ossl_rsa_to_PKCS1_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_PKCS1_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_RSA_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_RSA_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_msblob_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_pvk_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_text_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_type_specific_keypair_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsa_to_type_specific_keypair_pem_encoder_functions[];

extern const OSSL_DISPATCH ossl_rsapss_to_PKCS1_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_PKCS1_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_rsapss_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_dh_to_DH_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_DH_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_PKCS3_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_PKCS3_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_type_specific_params_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_type_specific_params_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dh_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_dhx_to_DHX_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_DHX_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_X9_42_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_X9_42_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_type_specific_params_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_type_specific_params_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dhx_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_dsa_to_DSA_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_DSA_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_type_specific_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_type_specific_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_msblob_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_pvk_encoder_functions[];
extern const OSSL_DISPATCH ossl_dsa_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_ec_to_EC_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_EC_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_blob_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_X9_62_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_X9_62_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_type_specific_no_pub_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_type_specific_no_pub_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ec_to_text_encoder_functions[];

#ifndef OPENSSL_NO_SM2
extern const OSSL_DISPATCH ossl_sm2_to_SM2_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_SM2_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_blob_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_type_specific_no_pub_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_type_specific_no_pub_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_sm2_to_text_encoder_functions[];
#endif

extern const OSSL_DISPATCH ossl_ed25519_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_OSSL_current_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed25519_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_ed448_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_OSSL_current_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_ed448_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_x25519_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_OSSL_current_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x25519_to_text_encoder_functions[];

extern const OSSL_DISPATCH ossl_x448_to_EncryptedPrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_EncryptedPrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_PrivateKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_PrivateKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_SubjectPublicKeyInfo_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_SubjectPublicKeyInfo_pem_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_OSSL_current_der_encoder_functions[];
extern const OSSL_DISPATCH ossl_x448_to_text_encoder_functions[];

/* Decoders */
extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_dh_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_dh_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_params_der_to_dh_decoder_functions[];
extern const OSSL_DISPATCH ossl_DH_der_to_dh_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_dhx_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_dhx_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_params_der_to_dhx_decoder_functions[];
extern const OSSL_DISPATCH ossl_DHX_der_to_dhx_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_dsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_dsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_der_to_dsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_DSA_der_to_dsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_msblob_to_dsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_pvk_to_dsa_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_ec_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_ec_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_no_pub_der_to_ec_decoder_functions[];
extern const OSSL_DISPATCH ossl_EC_der_to_ec_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_x25519_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_x25519_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_x448_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_x448_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_ed25519_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_ed25519_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_ed448_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_ed448_decoder_functions[];

#ifndef OPENSSL_NO_SM2
extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_sm2_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_sm2_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_no_pub_der_to_sm2_decoder_functions[];
#endif

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_rsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_rsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_type_specific_keypair_der_to_rsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_RSA_der_to_rsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_msblob_to_rsa_decoder_functions[];
extern const OSSL_DISPATCH ossl_pvk_to_rsa_decoder_functions[];

extern const OSSL_DISPATCH ossl_PrivateKeyInfo_der_to_rsapss_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_rsapss_decoder_functions[];

extern const OSSL_DISPATCH ossl_EncryptedPrivateKeyInfo_der_to_der_decoder_functions[];
extern const OSSL_DISPATCH ossl_SubjectPublicKeyInfo_der_to_der_decoder_functions[];
extern const OSSL_DISPATCH ossl_pem_to_der_decoder_functions[];

extern const OSSL_DISPATCH ossl_file_store_functions[];
