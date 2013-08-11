/* 
 * File:   HasPtr.h
 * Author: zuojing
 *
 * Created on August 11, 2013, 9:28 PM
 */

#ifndef HASPTR_H
#define	HASPTR_H

#include "U_Ptr.h"

class U_Ptr;

class HasPtr {
public:
    HasPtr(int *ip, int i);

    HasPtr& operator=(const HasPtr&);

    virtual ~HasPtr();
    
    static void test();
    
private:
    U_Ptr *ptr;
    int val;

};

#endif	/* HASPTR_H */

