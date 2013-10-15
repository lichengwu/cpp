/* 
 * File:   MessageAndFolderTest.cpp
 * Author: zuojing
 * 
 * Created on August 11, 2013, 7:48 PM
 */

#include "MessageAndFolderTest.h"

#include "Folder.h"
#include "Message.h"
#include <istream>
#include <string>
#include <iostream>
#include <assert.h>

using namespace std;

MessageAndFolderTest::MessageAndFolderTest() {
}

MessageAndFolderTest::MessageAndFolderTest(const MessageAndFolderTest& orig) {
}

MessageAndFolderTest::~MessageAndFolderTest() {
}

void MessageAndFolderTest::test() {

    Folder f1;
    Folder f2;

    Message m1 = string("test 1");
    Message m2("test 2");

    // save m1,.2 to f1 
    f1.putMsg(&m1);
    f1.putMsg(&m2);
    m1.save(&f1);
    m2.save(&f1);


    assert(f1.getMessageList().size() == 2);
    assert(m1.getFolders().size() == 1);
    assert(m2.getFolders().size() == 1);

    f2.putMsg(&m1);
    m1.save(&f2);

    assert(f2.getMessageList().size() == 1);
    assert(m1.getFolders().size() == 2);

    cout << "test finish...." << endl;
}

