/* 
 * File:   U_Ptr.cpp
 * Author: zuojing
 * 
 * Created on August 11, 2013, 9:27 PM
 */

#include "U_Ptr.h"

U_Ptr::U_Ptr(int *p) : ip(p), use(1) {
}

U_Ptr::~U_Ptr() {
    if (--use == 0) {
        delete ip;
    }
}

