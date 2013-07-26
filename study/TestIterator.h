/* 
 * File:   TestIterator.h
 * Author: zuojing
 *
 * Created on July 26, 2013, 7:36 AM
 */

#ifndef TESTITERATOR_H
#define	TESTITERATOR_H

#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

class TestIterator {
public:
    TestIterator();
    TestIterator(const TestIterator& orig);
    virtual ~TestIterator();

    static void test() {

        istream_iterator<string> cin_it(cin), eof;
        ostream_iterator<string> cout_it(cout, "\n");
        while (cin_it != eof) {
            *cout_it++ = *cin_it++;
        }

        //ofstream outfile;
        //ostream_iterator<int>
    }

private:

};

#endif	/* TESTITERATOR_H */

