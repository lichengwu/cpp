#ifndef TESTVECTOR_H
#define TESTVECTOR_H

#include <vector>
using namespace std;

class TestCollection {
public:
    TestCollection();
    virtual ~TestCollection();
    void testInit();
    void testIterator();
    void testExpansion();
    void testFind();
    void testOther();

    static void test() {

        TestCollection tc;
        //tc.testIterator();
        //tc.testExpansion();
        //tc.testOther();
        tc.testFind();
    }

protected:
    void print(vector<int>::const_iterator begin, vector<int>::const_iterator end);
private:
};

#endif // TESTVECTOR_H
