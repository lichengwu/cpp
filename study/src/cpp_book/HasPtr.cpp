/* 
 * File:   HasPtr.cpp
 * Author: zuojing
 * 
 * Created on August 11, 2013, 9:28 PM
 */

#include "HasPtr.h"
#include <assert.h>
#include <iostream>

using namespace std;

HasPtr::HasPtr(int *ip, int v) : ptr(new U_Ptr(ip)), val(v) {
    ++ptr->use;
}

HasPtr::~HasPtr() {
    if (--ptr->use == 0) {
        delete ptr;
    }
}

HasPtr& HasPtr::operator =(const HasPtr &rhs) {
    ++rhs.ptr->use;
    if (--ptr->use == 0) {
        delete ptr;
    }
    ptr = rhs.ptr;
    val = rhs.val;
    return *this;
}

void HasPtr::test() {
    int val = 10;
    int *p = &val;

    HasPtr pt(p, val);

    assert(pt.val == val);

    HasPtr pt2 = pt;


    assert(pt2.val == val);
    assert(pt.ptr->use == 2);

    cout << "test finish ..." << endl;

}

