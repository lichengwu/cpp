/* 
 * File:   U_Ptr.h
 * Author: zuojing
 *
 * Created on August 11, 2013, 9:27 PM
 */

#ifndef U_PTR_H
#define	U_PTR_H

class HasPtr;

#include "HasPtr.h"
#include <stddef.h>

class U_Ptr {
public:
    U_Ptr(int *p);
    virtual ~U_Ptr();
private:
    friend class HasPtr;
    int * ip;
    size_t use;

};

#endif	/* U_PTR_H */

