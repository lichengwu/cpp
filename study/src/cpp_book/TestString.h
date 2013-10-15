#ifndef TESTSTRING_H
#define TESTSTRING_H


class TestString

{
public:
    TestString();
    virtual ~TestString();
    void testGetLine();
    void testReadWrite();
    void testReadChar();
    void testStringMethods();
    void testStringCopy();
    void testFind();
    
    
    static void test(){
       TestString ts;
       ts.testFind();
    }
    
protected:
private:
};

#endif // TESTSTRING_H
