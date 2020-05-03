#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "textchanger.h"
#include "symbols.h"
#include "supereraser.h"
#include "stringin.h"

void supereraser(string& sentence, string& x)
{
	if (x == "sort -d string" || x == "sort -d file")
	{
		sentence.erase(remove_if(sentence.begin(), sentence.end(), &IsParenthesesOrDash), sentence.end());
		textchanger(sentence, x);
	}
	if (x == "sort -d -A string" || x == "sort -d -A file")
	{
		symbols(sentence, x);
		sentence.erase(remove_if(sentence.begin(), sentence.end(), &IsParenthesesOrDash), sentence.end());
		textchanger(sentence, x);
	}
	if (x == "sort string" || x == "sort file")
	{
		sentence.erase(remove_if(sentence.begin(), sentence.end(), &IsParenthesesOrDash), sentence.end());
		textchanger(sentence, x);
	}
}