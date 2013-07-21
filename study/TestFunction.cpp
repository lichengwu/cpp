/*
 * FunctionTest.cpp
 *
 *  Created on: Jul 20, 2013
 *      Author: zuojing
 */

#include "TestFunction.h"

TestFunction::TestFunction() {
}

void TestFunction::swap1(int &v1, int &v2) {
	int temp = v1;
	v1 = v2;
	v2 = temp;
}

void TestFunction::swap2(int *&v1, int *&v2) {
	int *tmp = v1;
	v1 = v2;
	v2 = tmp;
}

