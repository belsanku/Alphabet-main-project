#include <string>
#include <iostream>
#include <vector>
#include <set>
#include "printer.h"
#include "textchanger.h"
#include "symbols.h"
#include "textsortfull.h" 

using namespace std;

void textsortfull(vector<string> &sentence, string &line, string &x)
{
    size_t pos = x.find("string");
    bool str = false;
    if (pos != string::npos) {
        str = true;
    }
    if (str == true) {
        multiset<string> sorted;
        for (vector<string>::iterator m = sentence.begin(); m != sentence.end();
             ++m)
            sorted.insert(*m);

        vector<string> sentenced(sorted.begin(), sorted.end());
        sorted.clear();
        printer(sentenced, x);
    } else {
        sentence.resize(sentence.size() - 1);
        line = "";
        multiset<string> filesort;
        for (vector<string>::iterator p = sentence.begin(); p != sentence.end();
             ++p)
            filesort.insert(*p);

        vector<string> sentence1(filesort.begin(), filesort.end());
        filesort.clear();
        size_t rev = x.find("-r");
        bool da = false;
        if (rev != string::npos) {
            da = true;
        }
        if (da == true) {
            for (unsigned int i = sentence1.size() - 1; i >= 0; --i) {
                line += sentence1[i] + "\n";
                if (i == 0)
                    break;
            }
        } else {
            for (unsigned int i = 0; i < sentence1.size(); i++)
                line += sentence1[i] + "\n";
        }
    }
}