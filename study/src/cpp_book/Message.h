/* 
 * File:   Message.h
 * Author: zuojing
 *
 * Created on August 10, 2013, 12:33 PM
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include "Folder.h"

#include <string>
#include <vector>

using namespace std;

class Folder;

class Message {
public:

    Message(const string &conts = "");
    Message(const Message& orig);
    Message& operator=(const Message& msg);
    vector<Folder*> getFolders();
    

    void save(Folder * folder);
    void remove(Folder* folder);
    const string getContent(); 

    virtual ~Message();
private:
    string content;
    vector<Folder*> dirs;
    void putMsg2Folders(vector<Folder*> &folders);
    void removeMsgFromFolders();
};

#endif	/* MESSAGE_H */

