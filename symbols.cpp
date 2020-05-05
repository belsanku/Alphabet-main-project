#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
#include <cctype>
#include "symbols.h"
#include <conio.h>

using namespace std;

void symbols(string& sentence, string& x)
{
    setlocale(LC_ALL, "Russian");
    int size = sentence.size();
    for (int i = 0; i < size; i++)
    {
        sentence[i] = (char)tolower(sentence[i]);
    }
}