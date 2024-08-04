cmake_minimum_required(VERSION 3.28)
project(usfcryptolab)

set(CMAKE_CXX_STANDARD 26)


include_directories(src/include)


link_libraries(tomcrypt ssl crypto)

add_executable(main
        main.cpp
        src/include/crypto/hash/sha2.h
        src/lib/crypto/hash/sha2.cpp
        src/include/crypto/hash/hash.h
        src/lib/crypto/hash/HashResult.cpp
        src/lib/crypto/hash/blake/blake2b.c
        src/lib/crypto/hash/blake/blake2s.c
        src/include/crypto/hash/blake2/tomcrypt.h
        src/include/crypto/hash/blake2/tomcrypt_argchk.h
        src/include/crypto/hash/blake2/tomcrypt_cfg.h
        src/include/crypto/hash/blake2/tomcrypt_cipher.h
        src/include/crypto/hash/blake2/tomcrypt_custom.h
        src/include/crypto/hash/blake2/tomcrypt_hash.h
        src/include/crypto/hash/blake2/tomcrypt_mac.h
        src/include/crypto/hash/blake2/tomcrypt_macros.h
        src/include/crypto/hash/blake2/tomcrypt_math.h
        src/include/crypto/hash/blake2/tomcrypt_misc.h
        src/include/crypto/hash/blake2/tomcrypt_pk.h
        src/include/crypto/hash/blake2/tomcrypt_pkcs.h
        src/include/crypto/hash/blake2/tomcrypt_prng.h
        src/lib/crypto/hash/blake2.cpp
        src/include/crypto/hash/blake2.h)
