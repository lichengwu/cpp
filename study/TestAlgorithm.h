/* 
 * File:   TestAlgorithm.h
 * Author: zuojing
 *
 * Created on July 24, 2013, 11:37 PM
 */

#ifndef TESTALGORITHM_H
#define	TESTALGORITHM_H
#include <string>

using namespace std;

class TestAlgorithm {
public:
    TestAlgorithm();
    TestAlgorithm(const TestAlgorithm& orig);
    virtual ~TestAlgorithm();

    void countWord();

    static void test() {
        TestAlgorithm at;
        at.countWord();
        
        
    }
private:

    bool isShorter(const string &s1, const string &s2) {
        return s1.size() < s2.size();
    }

    bool ge(const string &str) {
        return str.size() >= 0;
    }

    //int size = 0;

};

#endif	/* TESTALGORITHM_H */

