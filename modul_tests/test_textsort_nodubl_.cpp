#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
#include <set>


using namespace std;

void textsort(vector<string>& sentence)
{
		set<string>nodubls;
		for (vector<string>::iterator m = sentence.begin(); m != sentence.end(); ++m)
		{
			nodubls.insert(*m);
		}

		vector<string>sentenced(nodubls.begin(), nodubls.end());
		nodubls.clear();
		for (int i = 0; i < sentenced.size(); ++i)
		{
			cout << sentenced[i] << " ";
		}
}

int main()
{
	vector<string>sentence = {"Alphabet", "alphabet", "argument", "argentum", "alphabet", "argument", "argentum"};
	// Must be: Alphabet alphabet argentum argument. No repeats
	textsort(sentence);
	return 0;
}