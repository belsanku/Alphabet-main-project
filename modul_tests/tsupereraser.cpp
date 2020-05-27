#include "parent.h"
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void supereraser(string& sentence, string& x, int& check)
{
    check = 0;
    size_t pos = x.find("-A");
    bool symb = false;
    if (pos != string::npos)
        symb = true;
    if (symb == true) {
        check = 1;
        // symbols(sentence, x); // Impossible to realize in tests
        sentence.erase(
                remove_if(
                        sentence.begin(), sentence.end(), &IsParenthesesOrDash),
                sentence.end());
        // textchanger(sentence, x, check);
    } else {
        check = 2;
        sentence.erase(
                remove_if(
                        sentence.begin(), sentence.end(), &IsParenthesesOrDash),
                sentence.end());
        // textchanger(sentence, x, check); // Impossible to realize in tests
    }
}
