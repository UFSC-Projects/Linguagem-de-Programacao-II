#ifndef CONVERSIONTABLE_HPP
#define CONVERSIONTABLE_HPP

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class ConversionTable {
private:
    vector<pair<unsigned char,unsigned char>> Table;
public:
    ConversionTable(size_t key);
    ~ConversionTable() {};
    const vector<pair<unsigned char,unsigned char>>& GetTable();
private:
    void CreateTable(size_t key);
};




#endif