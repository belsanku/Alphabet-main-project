#include "symbols.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <locale>
#include <string>
#include <vector>

using namespace std;

void symbols(string& sentence, string& x) {
    setlocale(LC_ALL, "Russian");
    for (unsigned int i = 0; i < sentence.size(); i++) {
        sentence[i] = (char)tolower(sentence[i]);
    }
}
