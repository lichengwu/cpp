/* 
 * File:   TestIO.h
 * Author: zuojing
 *
 * Created on July 21, 2013, 8:38 PM
 */

#ifndef TESTIO_H
#define	TESTIO_H
#include <stdio.h>
#include <string>

using std::string;

class TestIO {
public:
    TestIO();
    TestIO(const TestIO& orig);
    virtual ~TestIO();

    void testRWFile();

    static void test() {
        TestIO tio;
        tio.testRWFile();
    }
private:

};

#endif	/* TESTIO_H */

