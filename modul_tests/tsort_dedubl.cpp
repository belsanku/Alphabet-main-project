#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <locale>
#include <set>
#include <string>
#include <vector>

using namespace std;

void textsort(vector<string>& sentence, string& line, string& x, int& check)
{
    check = 0;
    size_t pos = x.find("string");
    bool str = false;
    if (pos != string::npos) {
        str = true;
    }
    if (str == true) {
        check = 1;
        set<string> nodubls;
        for (vector<string>::iterator m = sentence.begin(); m != sentence.end();
             ++m)
            nodubls.insert(*m);

        vector<string> sentenced(nodubls.begin(), nodubls.end());
        if (sentenced[0] == "else" && sentenced[1] == "matters"
            && sentenced[2] == "metallica" && sentenced[3] == "nothing") {
            check = 3;
        }
        nodubls.clear();
        // printer(sentenced, x);
    } else {
        check = 2;
        sentence.resize(sentence.size() - 2);
        line = "";
        set<string> nodubl;
        for (vector<string>::iterator p = sentence.begin(); p != sentence.end();
             ++p)
            nodubl.insert(*p);

        vector<string> sentence1(nodubl.begin(), nodubl.end());

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
            for (unsigned int i = 0; i < sentence1.size(); i++) {
                line += sentence1[i] + "\n";
            }
        }
        nodubl.clear();
    }
}
