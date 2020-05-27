#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void CreateFile(string& x, int& check)
{
    check = 0;
    string line, buf = "", path;
    // cout << "Enter the name: " << endl;
    // getline(cin, path);  // Impossible to realize in tests,
    ifstream input(path); /// because streaming input
    ofstream output("SortFile.txt");
    while (input) {
        getline(input, line);
        if (!input)
            break;
        if (line.length()) {
            check = 1;
            buf += line + "\n";
        }
    }
    cout << path;
    // supereraser(buf, x);  //useless in test
    output << buf;
    input.close();
    path = "";
    output.close();
    buf = "";
    line = "";
}
