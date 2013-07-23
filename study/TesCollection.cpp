#include "TestCollection.h"
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

TestCollection::TestCollection() {
    //ctor
}

TestCollection::~TestCollection() {
}
//dtor

void TestCollection::testInit() {
    vector<int> v1;
    cout << "v1 init,size:" << v1.size() << endl;
    vector<int> v2(v1);
    cout << "v2 init,size:" << v2.size() << endl;
    vector<int> v3(10, 1);
    cout << "v3 init,size:" << v3.size() << endl;
    vector<int> v4(10);
    cout << "v4 init,size:" << v4.size() << endl;

}

void TestCollection::testIterator() {
    string line;
    vector<string> vct;
    while (getline(cin, line)) {
        if (line.empty())
            break;
        vct.push_back(line);
    }

    cout << "iterate:" << endl;

    // iterator
    cout << "vector size :" << vct.size() << endl;
    for (vector<string>::const_iterator itr = vct.begin(); itr != vct.end(); itr++) {
        cout << *itr << ",";
    }
    cout << endl << "revert iterate:" << endl;

    // revert
    for (vector<string>::const_reverse_iterator itr = vct.rbegin(); itr != vct.rend(); itr++) {
        cout << *itr << ",";
    }

    //clear

    cout << endl << "clear:" << endl;

    for (vector<string>::iterator itr = vct.begin(); itr != vct.end(); itr++) {
        *itr = "";
    }

    for (vector<string>::const_iterator itr = vct.begin(); itr != vct.end(); itr++) {
        cout << *itr << ",";
    }

}

void TestCollection::testExpansion() {
    vector<int> iList;
    iList.reserve(0);
    int last_capacity = iList.capacity();
    cout << "size:" << iList.size() << ",capacity:" << iList.capacity() << endl;
    for (int i = 0; i <= 10000; ++i) {
        iList.push_back(i);
        if (last_capacity != iList.capacity()) {
            last_capacity = iList.capacity();
            cout << "size:" << iList.size() << ",capacity:" << iList.capacity() << endl;
        }
    }
}

void TestCollection::testOther() {
    vector<int> iList1;
    vector<int> iList2;
    for (int i = 0; i < 10; i++) {
        iList1.push_back(i);
        iList2.push_back(10 - i);
    }

    cout << "list 1:" << endl;
    print(iList1.begin(), iList1.end());

    cout << "list 2:" << endl;
    print(iList2.begin(), iList2.end());

    iList1.swap(iList2);

    cout << "after swap:" << endl;

    cout << "list 1:" << endl;
    print(iList1.begin(), iList1.end());

    cout << "list 2:" << endl;
    print(iList2.begin(), iList2.end());

}

void TestCollection::print(vector<int>::const_iterator begin, vector<int>::const_iterator end) {
    while (begin != end) {
        if ((begin + 1) == end) {
            cout << *begin << endl;
        } else {
            cout << *begin << ",";
        }
        begin++;
    }
}

void TestCollection::testFind() {
    vector<string> vct;
    for (int i = 0; i < 100; i++) {
        vct.push_back("test string " + i);
    }

    vector<string>::iterator idx = find(vct.begin(), vct.end(), "test string 50");
    cout << *idx << endl;

}