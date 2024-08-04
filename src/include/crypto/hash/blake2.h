#ifndef BLAKE2_H
#define BLAKE2_H

#include "./blake2/tomcrypt.h"
#include "crypto/hash/hash.h"
namespace usfcl::crypto::hash::blake2 {
    HashResult blake2b_256(const void* input , long input_length);
    HashResult blake2b_384(const void* input , long input_length);
    HashResult blake2b_512(const void* input , long input_length);
    HashResult blake2s_128(const void* input , long input_length);
    HashResult blake2s_160(const void* input , long input_length);
    HashResult blake2s_224(const void* input , long input_length);
    HashResult blake2s_256(const void* input , long input_length);
}



#endif //BLAKE2_H
