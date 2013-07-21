/* 
 * File:   TestIO.cpp
 * Author: zuojing
 * 
 * Created on July 21, 2013, 8:38 PM
 */

#include "TestIO.h"
#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;

TestIO::TestIO() {
}

TestIO::TestIO(const TestIO& orig) {
}

TestIO::~TestIO() {
}

void TestIO::testRWFile() {

    // create temp file

    string tmpFileName("/tmp/cpp_io_test");


    cout << "create temp file[" << tmpFileName << "]" << endl;

    //write string to temp file
    ofstream fos;
    fos.open(tmpFileName.c_str(), ios::out);

    if (fos) {
        for (int i = 0; i < 100; i++) {
            fos << "line" << i << endl;
        }
    } else {
        cerr << "open temp file [" << tmpFileName << "] error." << endl;
    }

    fos.close();
    //read temp file

    ifstream fis;
    fis.open(tmpFileName.c_str(), ios::in);

    string line;

    cout << "read data from[" << tmpFileName << "]" << endl;

    if (fis) {
        while ((fis >> line)) {
            cout << line << endl;
        }
    } else {
        cerr << "open temp file [" << tmpFileName << "] error." << endl;
    }
    fis.close();



}


