#include <tomcrypt.h>
#include <openssl/sha.h>
#include "crypto/hash/sha2.h"

namespace usfcl::crypto::hash::sha2 {
#define SHA256_OUTPUT_LEN 32

    HashResult ltc_sha2(const void* input, const long input_lenght){
        const auto hash_output { new unsigned char[SHA256_OUTPUT_LEN]};
        hash_state md;
        sha256_init(&md);
        sha256_process(&md, static_cast<const unsigned char*>(input), input_lenght);
        sha256_done(&md, hash_output);
        HashResult hash_result {hash_output, SHA256_OUTPUT_LEN};
        return hash_result;
    }

    HashResult openssl_sha2(const void* input, const long input_lenght) {
        const auto hash_output { new unsigned char[SHA256_OUTPUT_LEN]};
        SHA256(static_cast<const unsigned char*>(input), input_lenght, hash_output);
        HashResult hash_result {hash_output, SHA256_OUTPUT_LEN};
        return hash_result;
    }
}



