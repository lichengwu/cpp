/* 
 * File:   TextQuery.cpp
 * Author: zuojing
 * 
 * Created on July 24, 2013, 7:54 AM
 */

#include "TextQuery.h"

#include <ostream>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <sstream>

using namespace std;

TextQuery::TextQuery() {
}

TextQuery::TextQuery(const TextQuery& orig) {
}

TextQuery::~TextQuery() {
}

void TextQuery::readFile(const string file) {
    ifstream fis;
    fis.open(file.c_str(), ios::in);

    string line;
    int line_no = 0;
    if (fis) {
        while (getline(fis, line)) {
            this->lines.push_back(line);
            istringstream istr(line);
            string word;
            while (istr >> word) {
                if (!word.empty()) {
                    this->dict[word].insert(line_no);
                }
            }
            line_no++;
        }
    } else {
        throw runtime_error("open file error");
    }
    fis.close();
}

void TextQuery::query(const string word) {

    map<string, set<int> >::iterator itr = this->dict.find(word);
    if (itr == this->dict.end()) {
        cerr << "word [" << word << "] not found!" << endl;
    } else {
        set<int> line_info = (*itr).second;
        cout << "[" << word << "] appear " << line_info.size() << " times:" << endl;
        set<int>::const_iterator line_itr = line_info.begin();
        while (line_itr != line_info.end()) {
            cout << (*line_itr) + 1 << ":\t" << this->lines[*line_itr] << endl;
            line_itr++;
        }
    }


}
