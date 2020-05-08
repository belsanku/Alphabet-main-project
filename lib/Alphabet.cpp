#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <locale>
#include <set>
#include <ctype.h>
#include <conio.h>
#include "printer.h"
#include "textsortfull.h"
#include "textsort.h"
#include "parent.h"
#include "symbols.h"
#include "textchanger.h"
#include "supereraser.h"
#include "Createfile.h"
#include "stringin.h"
#include "assistant.h"
#include "choose.h"

using namespace std;



int main()
{
	system("chcp 1251");
	string x, l;
	assistant();
	cout<<endl;
	while (x != "exit")
	{
		choose(l, x);
	}
}
