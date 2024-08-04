#include <iostream>
#include <iomanip>

#include "crypto/hash/hash.h"

namespace usfcl::crypto::hash {
    //TODO duplicate code resolve
    HashResult::HashResult(std::uint8_t* hash_bytes, const int length)
    : m_hash_bytes {hash_bytes}, m_lenght {length} {}

    HashResult::~HashResult() {
        delete m_hash_bytes;
        m_lenght = 0;
    }
    HashResult::HashResult(const HashResult& other_hash_result) {
        m_lenght = other_hash_result.m_lenght;
        m_hash_bytes = new unsigned char[m_lenght];
        for (int i=0; i<m_lenght; i++)
            m_hash_bytes[i] = other_hash_result.m_hash_bytes[i];
    }
    HashResult& HashResult::operator=(const HashResult& other_hash_result) {
        if (&other_hash_result == this)
            return *this;

        delete m_hash_bytes;
        m_lenght = other_hash_result.m_lenght;
        m_hash_bytes = new unsigned char[m_lenght];
        for (int i=0; i<m_lenght; i++)
            m_hash_bytes[i] = other_hash_result.m_hash_bytes[i];
        return *this;
    }

    void HashResult::hex() const {
        std::cout << m_lenght;
        for (int i=0; i<m_lenght; i++)
            std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(m_hash_bytes[i]);
        std::cout << std::dec << std::endl;
    }

    int HashResult::len() const {
        return m_lenght;
    }


}