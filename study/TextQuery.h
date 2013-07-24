/* 
 * File:   TextQuery.h
 * Author: zuojing
 *
 * Created on July 24, 2013, 7:54 AM
 */

#ifndef TEXTQUERY_H
#define	TEXTQUERY_H
#include <vector>
#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

class TextQuery {
public:
    TextQuery();
    TextQuery(const TextQuery& orig);
    virtual ~TextQuery();
    void readFile(const string file);
    void query(const string word);

    static void test() {
        TextQuery tq;
        tq.readFile("/tmp/tq.txt");
        string word;
        cerr << "enter word for query:" << endl;
        while (getline(cin, word)) {
            if (word.empty() || word == "q") {
                break;
            }
            tq.query(word);
        }

    }

private:
    vector<string> lines;
    map<string, set<int > > dict;

};

#endif	/* TEXTQUERY_H */

