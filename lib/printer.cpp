#include "printer.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printer(vector<string>& sentence1, string& x)
{
    size_t pos = x.find("-r");
    bool reverse = false;
    if (pos != std::string::npos)
        reverse = true;
    if (reverse == true) {
        for (unsigned int i = sentence1.size() - 1; i >= 0; --i) {
            cout << sentence1[i] << endl;
            if (i == 0)
                break;
        }
    } else {
        for (unsigned int i = 0; i < sentence1.size(); ++i) {
            cout << sentence1[i] << endl;
        }
    }
    sentence1.clear();
}