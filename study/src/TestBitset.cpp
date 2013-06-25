#include "TestBitset.h"

#include <bitset>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

using std::bitset;

TestBitset::TestBitset()
{
    //ctor
}

TestBitset::~TestBitset()
{
    //dtor
}

void TestBitset::testInit()
{
    bitset<32> b1(0xFFFF);
    cout <<"bit 1 : "<<b1<<endl;

    bitset<32> b2(string("111100001111"));

    cout << "bit 2 : "<<b2<<endl;
}
