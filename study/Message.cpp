/* 
 * File:   Message.cpp
 * Author: zuojing
 * 
 * Created on August 10, 2013, 12:33 PM
 */

#include <algorithm>
#include "Message.h"

using namespace std;

Message::Message(const string &conts) : content(conts) {
}

Message::Message(const Message& orig) : content(orig.content), dirs(orig.dirs) {
    putMsg2Folders(dirs);
}

Message::~Message() {
    removeMsgFromFolders();
}

void Message::putMsg2Folders(vector<Folder*> &folders) {
    vector<Folder*>::const_iterator itr = folders.begin();
    while (itr != folders.end()) {
        (*itr)->putMsg(this);
        itr++;
    }
}

void Message::removeMsgFromFolders() {
    vector<Folder*>::iterator itr = this->dirs.begin();
    while (itr != dirs.end()) {
        (*itr)->removeMsg(this);
        itr++;
    }
}

void Message::save(Folder* folder) {
    dirs.push_back(folder);
}

void Message::remove(Folder* folder) {
    std::remove(dirs.begin(), dirs.end(), folder);
    //folder->removeMsg(this);
}

const string Message::getContent(){
    return this->content;
}

vector<Folder*> Message::getFolders(){
    return this->dirs;
}

