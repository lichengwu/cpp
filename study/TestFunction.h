/*
 * FunctionTest.h
 *
 *  Created on: Jul 20, 2013
 *      Author: zuojing
 */

#ifndef FUNCTIONTEST_H_
#define FUNCTIONTEST_H_

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class TestFunction {
public:
    TestFunction();
    void swap1(int &v1, int &v2);
    void swap2(int *&v1, int *&v2);

    static void test() {
        TestFunction tf;

        // test swap1
        int v1 = 10, v2 = 20;

        cout << "before:\t\t" << "v1=" << v1 << ",v2=" << v2 << endl;

        tf.swap1(v1, v2);

        cout << "after swap1:\t" << "v1=" << v1 << ",v2=" << v2 << endl;

        // test function pointer
        void (TestFunction::*SW)(int &, int &);

        SW = &TestFunction::swap1;
        (tf.*SW)(v1, v2);

        cout << "after sw1:\t" << "v1=" << v1 << ",v2=" << v2 << endl;

        // test swap2
        int *p1 = &v1;
        int *p2 = &v2;

        tf.swap2(p1, p2);

        cout << "after swap2:\t" << "p1=" << *p1 << ",p2=" << *p2 << endl;



    }

};

#endif /* FUNCTIONTEST_H_ */
