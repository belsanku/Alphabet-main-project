#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printer(vector<string>& sentence1, string& x, int& check)
{
    check = 0;
    size_t pos = x.find("-r");
    bool reverse = false;
    if (pos != std::string::npos)
        reverse = true;
    if (reverse == true) {
        check = 1;
        for (unsigned int i = sentence1.size() - 1; i >= 0; --i) {
            // cout << sentence1[i] << endl;      //useless in test
            if (i == 0)
                break;
        }
    } else {
        check = 2;
        for (unsigned int i = 0; i < sentence1.size(); ++i) {
            // cout << sentence1[i] << endl;     //useless in test
        }
    }
    sentence1.clear();
}
