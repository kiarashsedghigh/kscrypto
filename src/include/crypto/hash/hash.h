#ifndef HASH_H
#define HASH_H

#include <cstdint>

namespace usfcl::crypto::hash {
    class HashResult {
    public:
        HashResult() = default;
        HashResult(std::uint8_t* hash_bytes, int length);
        ~HashResult();
        HashResult(const HashResult& other_hash_result);
        HashResult& operator=(const HashResult& other_hash_result);
        void hex() const;
        int len() const;

    private:
        std::uint8_t* m_hash_bytes;
        int m_lenght;
    };
}

#endif //HASH_H
