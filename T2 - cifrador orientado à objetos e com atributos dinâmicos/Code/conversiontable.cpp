#include "conversiontable.hpp"

ConversionTable::ConversionTable(size_t key) {
    this->CreateTable(key);
}

const vector<pair<unsigned char,unsigned char>> & ConversionTable::GetTable() {
    return this->Table;
}

void ConversionTable::CreateTable(size_t key) {

    this->Table.resize(256);
    
    for (size_t i = 0; i < this->Table.size(); i++) {
        Table.at(i).first = i;
        Table.at(i).second = i + key;
    }

    for(size_t i = 0; i < 256; i += 2) {
        swap(Table.at(i).second, Table.at(255 - i).second);
    }

}