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

using namespace std;


int main()
{
	setlocale(LC_ALL, "English");
	string x, l;
	const int KEY_ESC = 27;
	cout << "To exit, press ESC. For help, write 'help'" << endl;
	assistant();
	cout<<endl;
	getline(cin, x);
	while (_kbhit() != KEY_ESC)
	{
		//getline(cin, x);
		if (x == "help")
		{
			cout << endl;
			assistant();
			cout << endl;
		}
		else
			if (x == "sort -d file")
			{
				CreateFile(x);
			}
			else
				if (x == "sort -d string")
				{
					stringin(l, x);
				}
				else
					if (x == "sort -d -A string")
					{
						stringin(l, x);
					}
					else
						if (x == "sort -d -A file")
						{
							CreateFile(x);
						}
		//else cout << "input error" << endl;
		cout << endl;
		getline(cin, x);
	}
}