#include "TestString.h"

#include <iostream>
#include <typeinfo>
#include <cctype>

using namespace std;

TestString::TestString()
{
}

TestString::~TestString()
{
}

void TestString::testGetLine()
{
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
        {
            break;
        }
        cout << line << endl;
    }
}

void TestString::testReadWrite()
{
    string line;
    while (cin >> line)
    {
        if (line.empty())
        {
            break;
        }
        cout << line << endl;
    }
}

void TestString::testReadChar()
{
    string test = "test string";
    for (string::size_type index = 0; index < test.size(); index++)
    {
        cout << test[index] << endl;
        test[index] = '*';
    }
    cout << test << endl;

}

void TestString::testStringMethods()
{

    cout << isdigit('0') << endl;
    cout << isxdigit('x') << endl;

}

void TestString::testStringCopy(){
    string s1="this is a string";
    string s2=s1;
    cout<<"s1:"<<s1<<endl;
    cout<<"s2:"<<s2<<endl;
    s2.append(",haha");
    cout<<"after:"<<endl;
    cout<<"s1:"<<s1<<endl;
    cout<<"s2:"<<s2<<endl;

}
