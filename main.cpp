#include <iostream>

#include "crypto/hash/blake2.h"

int main() {

    std::string name{"kiarash"};
    auto res {usfcl::crypto::hash::blake2::blake2s_224((name.data()), 7)};
    res.hex();
    std::cout << res.len();


}

