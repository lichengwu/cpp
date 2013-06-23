/*
 * TestString.cpp
 *
 *  Created on: Jun 23, 2013
 *      Author: zuojing
 */

#include "TestString.h"

#include <iostream>
#include <typeinfo>

using namespace std;

TestString::TestString() {
}

TestString::~TestString() {
}

void TestString::testGetLine() {
	string line;
	while (getline(cin, line)) {
		if (line.empty()) {
			break;
		}
		cout << line << endl;
	}
}

void TestString::testReadWrite() {
	string line;
	while (cin >> line) {
		if (line.empty()) {
			break;
		}
		cout << line << endl;
	}
}
