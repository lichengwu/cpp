#include "TestVector.h"
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::string;


TestVector::TestVector()
{
//ctor
}

TestVector::~TestVector()
{
    //dtor
    void TestVector::testInit()
    {
        vector<int> v1;
        cout << "v1 init,size:" << v1.size() << endl;
        vector<int> v2(v1);
        cout << "v2 init,size:" << v2.size() << endl;
        vector<int> v3(10,1);
        cout << "v3 init,size:" << v3.size() << endl;
        vector<int> v4(10);
        cout << "v4 init,size:" << v4.size() << endl;

    }
    void TestVector::testIterator()
    {
        string line;
        vector<string> list;
        while(getline(cin,line))
        {
            if(line.empty())
                break;
        }
        list.push_back(line);
    }

    cout<<"vector size :"<<list.size()<<endl;
    for(vector<string>::const_iterator itr=list.begin(); itr!=list.end(); itr++)
    {
        cout<<*itr<<",";
    }
    cout<<endl;
    for(vector<string>::iterator itr=list.begin(); itr!=list.end(); itr++)
    {
        *itr="";
    }

    for(vector<string>::const_iterator itr=list.begin(); itr!=list.end(); itr++)
    {
        cout << *itr << ",";
    }

}
