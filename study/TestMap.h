/* 
 * File:   TestMap.h
 * Author: zuojing
 *
 * Created on July 24, 2013, 12:09 AM
 */

#ifndef TESTMAP_H
#define	TESTMAP_H
#include <map>
#include <iostream>
#include <string>
#include <strstream>
#include <utility>
#include <stdexcept>

using namespace std;

class TestMap {
public:
    TestMap();
    TestMap(const TestMap& orig);
    virtual ~TestMap();

    static void test() {
        // insert
        map<string, int> iMap;
        for (int i = 0; i < 10; i++) {
            string key("map_");
            strstream ss;
            ss << i;
            key.append(ss.str());
            //iMap[key] = i;
            pair < map<string, int>::iterator, bool> ret = iMap.insert(make_pair(key, i));
            if (!ret.second) {
                throw runtime_error("insert error");
            }
        }
        // iterate
        typedef map<string, int>::iterator miter;

        for (miter itr = iMap.begin(); itr != iMap.end(); itr++) {
            cout << "first:" << (*itr).first << "\t\tsecond:" << (*itr).second << endl;
        }

        if (!iMap.count("map_1")) {
            throw runtime_error("assert error");
        }

        iMap.erase("map_1");

        if (iMap.find("map_1") != iMap.end()) {
            throw runtime_error("assert error");
        }




    }

private:

};

#endif	/* TESTMAP_H */

