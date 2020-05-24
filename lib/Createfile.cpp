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
	ofstream output("SortFile.txt");
	while (input) {
		getline(input, line);
		if (!input) break;
		if (line.length())
			buf += line + "\n";
	}
	cout << path;
	supereraser(buf, x);
	output << buf;
	input.close();
	path= "";
	output.close();
	buf = "";
	line = "";
}
