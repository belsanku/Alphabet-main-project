#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "supereraser.h"



using namespace std;



void CreateFile(string& x)
{
	string line, buf = "", path;
	cout << "Enter the path: "<<endl;
	getline(cin, path);
	ifstream input(path);
	if (!input.is_open()) // второй,  не очень юнит тест, скрытый
	{
		cout << "File can't be open!\n";
		return;
	}
	ofstream output("SortFile.txt");
	while (input) {
		getline(input, line);
		if (line.length())
			buf += line + "\n";
	}
	//cout << path; // первый скрытый юнит тест
	supereraser(buf, x);
	output << buf;
	input.close();
	path= "";
	output.close();
	buf = "";
	line = "";
	system("notepad SortFile");
}
