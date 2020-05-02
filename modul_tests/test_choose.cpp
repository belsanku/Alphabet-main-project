#include <cstdio>
#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

void choose()
{
	cout << "Function started. To check the function print |string| or |file|" << endl;
	string x = "";
	getline(cin, x);
		size_t pos = x.find("string");
		bool str = false;
		if (pos != string::npos) {
			str = true;
		}
		if (str == true)
		{
			cout << "The string is found" << endl;
		}
		else
		{
			pos = x.find("file");
			bool file = false;
			if (pos != string::npos) {
				file = true;
			}
			if (file == true)
			{
				cout << "File will be sorted" << endl;
			}
		}
	cout <<"The function worked"<< endl;
}

int main()
{
	choose();
	return 0;
}