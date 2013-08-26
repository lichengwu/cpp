/* 
 * File:   Operator.cpp
 * Author: zuojing
 * 
 * Created on August 26, 2013, 11:03 PM
 */

#include "Operator.h"

Operator::Operator() : size(1) {
}

Operator::Operator(const Operator& orig) {
}

Operator::~Operator() {
}

istream& operator>>(istream& in, Operator& o) {
    in >> o.size;
    return in;
}

ostream& operator<<(ostream& out, Operator& o) {
    out << "size:" << o.size << endl;
    return out;
}

Operator operator+(const Operator& o1, const Operator& o2) {
    Operator o;
    o.size = o1.size + o2.size;
    return o;
}

void Operator::test() {
    Operator o1;
    Operator o2;
    Operator o3 = o1 + o2;
    cout << o3 << endl;
    //cin >> o1;
    //cout << o1 << endl;


}


