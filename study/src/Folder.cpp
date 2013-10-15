/* 
 * File:   Folder.cpp
 * Author: zuojing
 * 
 * Created on August 10, 2013, 12:35 PM
 */

#include "Folder.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

Folder::Folder() {
}

Folder::Folder(const Folder& orig) : msgs(orig.msgs) {
}

void Folder::putMsg(Message* msg) {
    msgs.push_back(msg);
}

void Folder::removeMsg(Message* msg) {
    std::remove(msgs.begin(), msgs.end(), msg);
}

Folder::~Folder() {
    vector<Message*>::iterator itr = msgs.begin();
    while (itr != msgs.end()) {
        (*itr)->remove(this);
        itr++;
    }
}

const vector<Message*> Folder::getMessageList() {
    return msgs;
}

