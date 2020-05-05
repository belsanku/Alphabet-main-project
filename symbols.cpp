#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "symbols.h"

using namespace std;

void symbols(string& sentence, string& x)
{
	int size = sentence.size();
	for (int i = 0; i < size; i++)
	{
		if ((sentence[i] >= 65 && sentence[i] <= 90))
			sentence[i] = (int)sentence[i] + 32;
		if ((sentence[i] >= 97 && sentence[i] <= 122) || sentence[i] >= 208) sentence[i] = sentence[i] - 32;
		else if (sentence[i] == 184) sentence[i] = sentence[i] - 16;  
	}
}
