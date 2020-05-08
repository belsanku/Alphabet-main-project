#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void textchanger(string& line)
{
	stringstream ss(line);
	string develop = "";
	vector<string>sentence;
	while (!ss.eof())
	{
		string temp;
		ss >> temp;
		develop += temp + " ";
		develop += "* ";
	}

	cout << develop << endl;

	string del("* ");
	size_t next;
	size_t prev = 0;
	size_t delta = del.length();
	while ((next = develop.find(del, prev)) != string::npos)
	{
		string temp = develop.substr(prev, next - prev);
		sentence.push_back(develop.substr(prev, next - prev));
		prev = next + delta;
	}
	string temp = develop.substr(prev);
	cout << temp << endl;
	sentence.push_back(develop.substr(prev));
	for (int i = 0; i < sentence.size(); ++i)
	{
		if (sentence[i] == "")
		{
			sentence.erase(sentence.begin() + i);
		}
		else
		cout << sentence[i] <<" "<<i<<" ";
	}
	cout << endl;
	////////////////////////
}

int main()
{
	string test = "This text should be divided into words. Then the words should be written to the vector under their index.";
	cout << test << endl << endl;
	textchanger(test);
	return 0;
}