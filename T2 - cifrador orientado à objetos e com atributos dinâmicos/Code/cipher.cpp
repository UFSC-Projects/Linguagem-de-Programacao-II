#include "cipher.hpp"
#include <fstream>


Cipher::Cipher(size_t key) {
    this->Table = new ConversionTable(key);
}

void Cipher::RegenerateTable(size_t key) {
    delete this->Table;
    this->Table = new ConversionTable(key);
}

const string Cipher::EncryptText(string text) {
    string encryptText;

    for(size_t i = 0; i < text.size(); i++) {
        unsigned char ch = text.at(i);
        encryptText += this->Table->GetTable().at(ch).second;
    }

    return encryptText;
}

const string Cipher::DecryptText(string text) {
    string decryptText;

    for(size_t i = 0; i < text.size(); i++) {

        unsigned char ch = text.at(i);

        for (size_t j = 0; j < 256; j++) {

            if (ch == this->Table->GetTable().at(j).second) {
                decryptText += this->Table->GetTable().at(j).first;
                break;
            }
        }
    }

    return decryptText;
}


void Cipher::SaveFileText(string text, string path) {

    ofstream file_out(path);

    if (file_out.is_open()) {
        file_out << text;
    }

    file_out.close();
}


const string Cipher::ReadFile(string path) {

    ifstream file_in(path);

    if (file_in.is_open()) {

        string text_file;
        string line;

        while (getline(file_in, line)) {
            text_file += line; 
        }

        return text_file;
    }

    return " ";
}