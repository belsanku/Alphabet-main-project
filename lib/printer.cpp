#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "printer.h"

using namespace std;

void printer(vector<string>& sentence1, string& x)
{
	size_t pos = x.find("-r");
	bool reverse = false;
	if (pos != std::string::npos)
		reverse = true;
	if (reverse == true)
	{
		for (int i = sentence1.size()-1; i >= 0; --i)
		{
			cout << sentence1[i] << endl;
		}
	}
	else
		for (int i = 0; i < sentence1.size(); ++i)
	{
		cout << sentence1[i] << endl;
	}
	sentence1.clear();
}                             