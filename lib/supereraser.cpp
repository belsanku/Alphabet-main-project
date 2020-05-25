#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "textchanger.h"
#include "symbols.h"
#include "supereraser.h"
#include "stringin.h"

void supereraser(string &sentence, string &x)
{
    size_t pos = x.find("-A");
    bool symb = false;
    if (pos != string::npos)
        symb = true;
    if (symb == true) {
        symbols(sentence, x);
        sentence.erase(
                remove_if(
                        sentence.begin(), sentence.end(), &IsParenthesesOrDash),
                sentence.end());
        textchanger(sentence, x);
    } else {
        sentence.erase(
                remove_if(
                        sentence.begin(), sentence.end(), &IsParenthesesOrDash),
                sentence.end());
        textchanger(sentence, x);
    }
}
