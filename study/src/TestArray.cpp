#include "TestArray.h"
#include <iostream>

using std::cout;
using std::endl;


TestArray::TestArray()
{
    //ctor
}

TestArray::~TestArray()
{
    //dtor
}

void TestArray::test1()
{
    int ia[] = {9999,1,2,3,4};
    cout<<ia<<endl;

    int *p=ia;

    cout<<*(p+3)<<endl;

    cout<<*ia<<endl;

    cout<<sizeof(ia)<<endl;

    for(int *pbegin=ia,*pend=ia+4; pbegin!=pend; pbegin++)
    {
        cout<<*pbegin<<" ";
    }

}

void TestArray::test2()
{
    const int asize = 10;
    int *ia=new int[asize];
    int *ib=new int[asize]();


    cout<<"ia after init:"<<endl;
    for(int *index=ia; index!=ia+asize; index++)
    {
        cout<<*index<<" ";
    }

    cout<<endl<<"ib after init:"<<endl;
    for(int *index=ib; index!=ib+asize; index++)
    {
        cout<<*index<<" ";
    }
    delete[] ia;
    delete[] ib;
}

void TestArray::test3()
{
    int ia[3][4]=
    {
        {
            1,2,3,4
        },{
            5,6,7,8
        },{
            9,10,11,12
        }
    };

    typedef int int_array[4];

    for(int_array *i=ia; i!=ia+3; i++)
    {
        for(int *j=*i; j!=*i+4; j++)
        {
            cout<<*j<<" ";
        }
    }

}

