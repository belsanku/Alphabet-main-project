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
	string line;
	string buf = "";
	char fileName[80];
	cout << "fileName: ";
	cin >> fileName;
	ifstream input(fileName);
	ofstream output("SortFile.txt");
	while (input) {
		getline(input, line);
		if (line.length())
			buf += line + "\n";
	}
	supereraser(buf, x);
	output << buf;
	input.close();
	output.close();
	system("notepad SortFile");
}
