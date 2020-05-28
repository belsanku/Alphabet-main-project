#include "stringin.h"
#include "supereraser.h"
#include "symbols.h"
#include "textsort.h"
#include "textsortfull.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void textchanger(string& line, string& x)
{
    stringstream ss(line);
    string develop = "";
    vector<string> sentence;
    while (!ss.eof()) {
        string temp;
        ss >> temp;
        develop += temp + " ";
        develop += "* ";
    }
    string del("* ");
    size_t next;
    size_t prev = 0;
    size_t delta = del.length();
    while ((next = develop.find(del, prev)) != string::npos) {
        string temp = develop.substr(prev, next - prev);
        sentence.push_back(develop.substr(prev, next - prev));
        prev = next + delta;
    }
    string temp = develop.substr(prev);
    cout << temp << endl;
    for (unsigned int i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == "") {
            sentence.erase(sentence.begin() + i);
        }
    }
    sentence.push_back(develop.substr(prev));
    cout << endl;
    ////////////////////////
    size_t pos = x.find("-d");
    bool dedubl = false;
    if (pos != string::npos)
        dedubl = true;
    if (dedubl == true) {
        textsort(sentence, line, x);
    } else {
        textsortfull(sentence, line, x);
    }
}
