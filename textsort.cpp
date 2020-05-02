#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <locale>

using namespace std;
void textsort(vector<string>& sentence, string &line)
{
	sentence.resize(sentence.size() - 3);
	int leng = sentence.size();
	string tempter;
	line = "";
	
	for (int i = 0; i < leng - 1; ++i)
	{
		for (int j = 0; j < leng - i - 1; ++j)
		{
			if (sentence[j] > sentence[j + 1])
			{
				tempter = sentence[j];
				sentence[j] = sentence[j + 1];
				sentence[j + 1] = tempter;
			}
		}
	}
	for (int i = 0; i < sentence.size(); i++)
		line += sentence[i] + "\n";
//	printer(sentence);
}