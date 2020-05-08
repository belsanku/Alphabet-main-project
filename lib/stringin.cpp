#include <string>
#include <iostream>
#include "supereraser.h"
#include "stringin.h"

using namespace std;

void stringin(string& l, string& x)
{
	getline(cin, l);
	supereraser(l, x);
}
