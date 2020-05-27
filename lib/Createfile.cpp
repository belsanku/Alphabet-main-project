#include "supereraser.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void CreateFile(string& x)
{
    string line, buf = "", path;
    cout << "Enter the name: " << endl;
    getline(cin, path);
    ifstream input(path);
    ofstream output("SortFile.txt");
    while (input) {
        getline(input, line);
        if (!input)
            break;
        if (line.length())
            buf += line + "\n";
    }
    cout << path;
    supereraser(buf, x);
    output << buf;
    input.close();
    path = "";
    output.close();
    cout << "SortFile.txt ready to be open." << endl;
    buf = "";
    line = "";
}
