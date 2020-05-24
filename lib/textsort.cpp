#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
#include <set>
#include <ctype.h>
#include <conio.h>
#include "parent.h"
#include "printer.h"
#include "symbols.h"

using namespace std;

void textsort(vector<string>& sentence, string& line, string& x)
{
	size_t pos = x.find("string");
	bool str = false;
	if (pos != string::npos) {
		str = true;
	}
	if (str == true)
	{
		set<string>nodubls;
		for (vector<string>::iterator m = sentence.begin(); m != sentence.end(); ++m)
			nodubls.insert(*m);

		vector<string>sentenced(nodubls.begin(), nodubls.end());
		nodubls.clear();
		printer(sentenced, x);
	}
	else
	{
		sentence.resize(sentence.size() - 2);
		line = "";
		set<string>nodubl;
		for (vector<string>::iterator p = sentence.begin(); p != sentence.end(); ++p)
			nodubl.insert(*p);

		vector<string>sentence1(nodubl.begin(), nodubl.end());

		size_t rev = x.find("-r");
		bool da = false;
		if (rev != string::npos)
		{
			da = true;
		}
		if (da == true)
		{
			for (int i = sentence1.size() - 1; i >= 0; --i)
				line += sentence1[i] + "\n";
		}
		else
		{
			for (unsigned int i = 0; i < sentence1.size(); i++)
			{
				line += sentence1[i] + "\n";
			}
		}
		nodubl.clear();
	}
}