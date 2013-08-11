
#include "TestString.h"
#include "TestCollection.h"
#include "TestBitset.h"
#include "TestPointer.h"
#include "TestArray.h"
#include "TestFunction.h"
#include "TestIO.h"
#include "TestMap.h"
#include "TextQuery.h"
#include "TestAlgorithm.h"
#include "TestIterator.h"
#include <fstream>

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "MessageAndFolderTest.h"

using namespace std;

bool ge(const string &str) {
    return str.length() >= 3;
}

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

    //TestMap::test();

    //    TextQuery::test();
    //    TestAlgorithm::test();
    //TestIterator::test();

    //    vector<string> words;
    //    string word;
    //    while ((cin >> word)) {
    //        if (word.empty() || word == "q") {
    //            break;
    //        }
    //        words.push_back(word);
    //    }
    //
    //    sort(words.begin(), words.end());
    //
    //    vector<string>::iterator end_unqiue = unique(words.begin(), words.end());
    //
    //    words.erase(end_unqiue, words.end());
    //
    //    stable_sort(words.begin(), words.end());
    //
    //    vector<string>::size_type wc = count_if(words.begin(), words.end(), ge);
    //
    //    cout << wc << " word[s] longer than 3" << endl;

    MessageAndFolderTest::test();

    return 0;
}


