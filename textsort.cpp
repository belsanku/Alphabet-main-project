#include <string>
#include <iostream>
#include <vector>
#include "printer.h"
#include "textchanger.h"
#include "symbols.h"
#include <set>
#include "textsortfull.h" 

using namespace std;

void textsortfull(vector<string>& sentence, string& line, string& x)
{
	size_t pos = x.find("string");
	bool str = false;
	if (pos != string::npos) {
		str = true;
	}
	if (str == true)
	{
		multiset<string>sorted;
		for (vector<string>::iterator m = sentence.begin(); m != sentence.end(); ++m)
			sorted.insert(*m);

		vector<string>sentenced(sorted.begin(), sorted.end());
		sorted.clear();
		printer(sentenced, x);
	}else
		{
			sentence.resize(sentence.size() - 2);
			line = "";
			multiset<string>filesort;
			for (vector<string>::iterator p = sentence.begin(); p != sentence.end(); ++p)
				filesort.insert(*p);

			vector<string>sentence1(filesort.begin(), filesort.end());
			filesort.clear();
			for (int i = 0; i < sentence1.size(); i++)
				line += sentence1[i] + "\n";
		}
}