/* 
 * File:   Operator.h
 * Author: zuojing
 *
 * Created on August 26, 2013, 11:03 PM
 */

#ifndef OPERATOR_H
#define	OPERATOR_H

#include <iostream>

using namespace std;

class Operator {
public:
    Operator();
    Operator(const Operator& orig);
    virtual ~Operator();
    friend istream& operator>>(istream& in, Operator& o);
    friend ostream& operator<<(ostream& out, Operator& o);
    friend Operator operator+(const Operator& o1,const Operator& o2);
    static void test();
private:
    int size;


};


#endif	/* OPERATOR_H */

