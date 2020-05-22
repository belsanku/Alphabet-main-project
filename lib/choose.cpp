#include "Createfile.h"
#include "assistant.h"
#include "choose.h"
#include "stringin.h"
#include <iostream>
#include <string>
using namespace std;
void choose(string& l, string& x) {
    getline(cin, x);
    if (x == "help") {
        cout << endl;
        assistant();
        cout << endl;
    } else {
        size_t pos = x.find("string");
        bool str = false;
        if (pos != string::npos)
            str = true;
        if (str == true) {
            stringin(l, x);
        } else {
            pos = x.find("file");
            bool file = false;
            if (pos != string::npos)
                file = true;
            if (file == true) {
                CreateFile(x);
            }
        }
    }
    cout << endl;
}
