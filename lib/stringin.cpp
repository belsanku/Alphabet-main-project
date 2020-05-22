#include "stringin.h"
#include "supereraser.h"
#include <iostream>
#include <string>

using namespace std;

void stringin(string& l, string& x) {
    getline(cin, l);
    supereraser(l, x);
}
