#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool IsParenthesesOrDash(char c)
{
	switch (c)
	{
	case '(':
	case ')':
	case '-':
	case '_':
	case ',':
	case '.':
	case '/':
	case '\\':
	case '|':
	case ':':
	case ';':
	case '"':
	case '+':
	case '%':
	case '&':
	case '[':
	case ']':
	case '{':
	case '}':
	case '~':
	case '?':
	case '!':
	case '^':
	case '*':
	case '=':
	case '@':
		return true;
	default:
		return false;
	}
}

void supereraser(string& sentence)
{
	cout << "The delete function has started" << endl;
	sentence.erase(remove_if(sentence.begin(), sentence.end(), &IsParenthesesOrDash), sentence.end());
	cout << "The end of the function" << endl;
}

int main()
{
	string test = "(My) na;me i=s A[l]e{x}a|nd*er, a^nd M!y f&ri?end i+s. Ro/ma - we w!ill m:ake thi~s pro/gramm wo{}r!*@ks we""ll";
	//My name is Alexander and My friend is Roma - we will make this programm works well
	cout << test << endl;
	supereraser(test);
	cout << test << endl;
	return 0;
}