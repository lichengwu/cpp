#include <iostream>

#include "TestString.h"
#include "TestVector.h"
#include "TestBitset.h"
#include "TestPointer.h"
#include "TestArray.h"
#include "TestFunction.h"
#include "TestIO.h"
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

    TestIO::test();

    //    ifstream fis;
    //
    //    fis.open("/tmp/filec2BaUt", ios::in);
    //    //
    //    string line;
    //    //
    //    //cout << "read data from[" << pTmpFileName << "]" << endl;
    //
    //    if (fis) {
    //        while ((fis >> line)) {
    //            cout << line << endl;
    //        }
    //    } else {
    //        cerr << "open temp file error." << endl;
    //    }

    return 0;
}
