#include <string>
#include <iostream>
#include <conio.h>
#include "supereraser.h"
#include "stringin.h"

using namespace std;

void stringin(string& l, string& x)
{
	getline(cin, l);
	supereraser(l, x);
}
