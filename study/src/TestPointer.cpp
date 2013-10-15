#include "TestPointer.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

TestPointer::TestPointer()
{
    //ctor
}

TestPointer::~TestPointer()
{
    //dtor
}

void TestPointer::test()
{
    string s1("hello word");
    string s2("hello word2");
    string *p1 = &s1;
    string *p2 = &s2;
    string &r1 = s1;
    string &r2 = s2;

    cout<<"p1="<<*p1<<endl;
    cout<<"p2="<<*p2<<endl;
    cout<<"r1="<<r1<<endl;
    cout<<"r2="<<r2<<endl;

    r1="test";

    cout<<"r1="<<r1<<endl;
    cout<<"s1="<<s1<<endl;
    cout<<"p1="<<*p1<<endl;

    *p1 = "change p1 value";

    cout<<"p1 value:"<<*p1<<endl;
    cout<<"s1 value:"<<s1<<endl;
    cout<<"r1 value:"<<r1<<endl;

    p1=p2;

    cout<<"p1 address "<<p1<<endl;
    cout<<"p2 address "<<p2<<endl;
    cout<<"s2 address "<<&s2<<endl;

    string s3("test3");

    string *p3=&s3;
    string **pp3=&p3;
    cout<<s3<<endl;
    cout<<*p3<<endl;
    cout<<**pp3<<endl;


    cout<<p3<<endl;
    cout<<*pp3<<endl;
















}
