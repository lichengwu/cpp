#include <iostream>

#include "TestString.h"
#include "TestCollection.h"
#include "TestBitset.h"
#include "TestPointer.h"
#include "TestArray.h"
#include "TestFunction.h"
#include "TestIO.h"
#include "TestMap.h"
#include <fstream>

using namespace std;

int main() {

    //TestString::testReadWrite();

    //TestString::testGetLine();

    //TestString::testReadChar();

    //TestString::testStringMethods();

    //TestString::testStringCopy();
    //======test vector======
    //TestVector::testInit();

    //TestVector::testIterator();

    //======test bitset=======

    //TestBitset::testInit();

    //======test pointer=======
    //TestPointer::test();

    //======test array=======
    //TestArray::test1();
    //TestArray::test2();
    //TestArray::test3();

    //TestFunction::test();

    //TestIO::test();

    //    TestCollection::test();

    //    TestString::test();
    
    TestMap::test();

    return 0;
}
