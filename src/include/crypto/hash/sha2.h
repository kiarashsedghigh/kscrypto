#ifndef SHA2_H
#define SHA2_H

#include "crypto/hash/hash.h"

namespace usfcl::crypto::hash::sha2 {
    HashResult ltc_sha2(const void* input, long input_lenght);
    HashResult openssl_sha2(const void* input, long input_lenght);
}




#endif //SHA2_H
