#include <iostream>
#include <string>

using namespace std;

void choose(string& l, string& x, int& check)
{
    check = 0;
    // getline(cin, x); // Impossible to realize in tests, because
    if (x == "help") { /// streaming input
        check = 3;
        cout << endl;
        // assistant();  // Removed because it clogs tests
        cout << endl;
    } else {
        size_t pos = x.find("string");
        bool str = false;
        if (pos != string::npos)
            str = true;
        if (str == true) {
            check = 1;
            // stringin(l, x); // Impossible to realize in tests,
        } else { /// because streaming input
            pos = x.find("file");
            bool file = false;
            if (pos != string::npos)
                file = true;
            if (file == true) {
                check = 2;
                // CreateFile(x, check); // Impossible to realize in tests,
            } /// because streaming input
        }
    }
}
