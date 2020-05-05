#include <iostream>

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
		return true;
	default:
		return false;
	}
}