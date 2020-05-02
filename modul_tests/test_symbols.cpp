#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
#include <cctype>
#include <conio.h>

using namespace std;

void symbols(string& sentence)
{
    setlocale(LC_ALL, "Russian");
    int size = sentence.size();
    for (int i = 0; i < size; i++)
    {
        sentence[i] = (char)tolower(sentence[i]);
    }
    cout << sentence << endl;;
}
int main()
{
    system("chcp 1251");
    string sentence = "English or Русский эТо doesn't matTer";
    symbols(sentence);
    sentence = "";
}