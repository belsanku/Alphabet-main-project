#include "stringin.h"
#include "supereraser.h"
#include "symbols.h"
#include "textchanger.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void supereraser(string& sentence, string& x) {
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
