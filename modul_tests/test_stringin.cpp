#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

void stringin(string& l)
{
    getline(cin, l);
    
}
int main ()
{
    strint l;
    stringin(l);
    cout << l;
}