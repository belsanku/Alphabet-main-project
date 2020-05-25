#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
#include <cctype>
#include "symbols.h"

using namespace std;

void symbols(string &sentence, string &x)
{
    setlocale(LC_ALL, "Russian");
    for (unsigned int i = 0; i < sentence.size(); i++) {
        sentence[i] = (char)tolower(sentence[i]);
    }
}
