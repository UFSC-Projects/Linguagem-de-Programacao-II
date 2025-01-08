#ifndef CIPHER_HPP
#define CIPHER_HPP


#include "conversiontable.hpp"

class Cipher {
private:
    ConversionTable *Table;
public:
    Cipher(size_t key);
    ~Cipher() {delete this->Table;}
    void RegenerateTable(size_t key);
    const string EncryptText(string text);
    const string DecryptText(string text);
    void SaveFileText(string text, string path);
    const string ReadFile(string path);
};


#endif