#include "crypto/hash/hash.h"
#include "crypto/hash/blake2.h"

namespace usfcl::crypto::hash::blake2 {
#define BLAKE2b_256 32
#define BLAKE2b_384 48
#define BLAKE2b_512 64
#define BLAKE2s_128 16
#define BLAKE2s_160 20
#define BLAKE2s_224 28
#define BLAKE2s_256 32

    HashResult blake2b_256(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2b_256]};
        hash_state md;
        blake2b_256_init(&md);
        blake2b_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2b_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2b_256};
        return hash_result;
    }

    HashResult blake2b_384(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2b_384]};
        hash_state md;
        blake2b_384_init(&md);
        blake2b_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2b_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2b_384};
        return hash_result;
    }

    HashResult blake2b_512(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2b_512]};
        hash_state md;
        blake2b_512_init(&md);
        blake2b_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2b_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2b_512};
        return hash_result;
    }

    HashResult blake2s_128(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2s_128]};
        hash_state md;
        blake2s_128_init(&md);
        blake2s_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2s_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2s_128};
        return hash_result;
    }

    HashResult blake2s_160(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2s_160]};
        hash_state md;
        blake2s_160_init(&md);
        blake2s_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2s_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2s_160};
        return hash_result;
    }

    HashResult blake2s_224(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2s_224]};
        hash_state md;
        blake2s_224_init(&md);
        blake2s_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2s_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2s_224};
        return hash_result;
    }

    HashResult blake2s_256(const void* input , long input_length) {
        const auto hash_output { new unsigned char[BLAKE2s_256]};
        hash_state md;
        blake2s_256_init(&md);
        blake2s_process(&md, static_cast<const unsigned char*>(input), input_length);
        blake2s_done(&md, hash_output);
        HashResult hash_result {hash_output, BLAKE2s_256};
        return hash_result;
    }

}
