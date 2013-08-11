/* 
 * File:   Folder.h
 * Author: zuojing
 *
 * Created on August 10, 2013, 12:35 PM
 */


#ifndef FOLDER_H
#define	FOLDER_H

#include "Message.h"
#include "Folder.h"
#include <vector>

using namespace std;

class Message;

class Folder {
public:
    Folder();
    Folder(const Folder& orig);
    virtual ~Folder();
    void putMsg(Message * msg);
    void removeMsg(Message * msg);
    const vector<Message*> getMessageList();
    
private:
    vector<Message*> msgs;


};

#endif	/* FOLDER_H */

