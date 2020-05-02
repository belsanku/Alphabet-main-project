#include <string>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void textsortfull(vector<string>& sentence)
{
		multiset<string>sorted;
		for (vector<string>::iterator m = sentence.begin(); m != sentence.end(); ++m)
			sorted.insert(*m);

		vector<string>sentenced(sorted.begin(), sorted.end());
		sorted.clear();
		for (int i = 0; i < sentenced.size(); ++i)
		{
			cout << sentenced[i] << " ";
		}
}

int main()
{
	vector<string>sentence = {"This", "function", "doesn't", "remove", "repeats", "so", "repeats", "is", "our", "experience", "function", "doesn't",
		"remove", "repeats", "so", "repeats", "is", "our", "experience"};
	// Expected: This doesn't doesn't experience experience function function is is our our remove remove repeats repeats repeats repeats so so
	textsortfull(sentence);
	return 0;
}