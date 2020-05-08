#include <string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void printer(vector<string>& sentence1, string& x)
{
    size_t pos = x.find("-r");
    bool reverse = false;
    if (pos != std::string::npos)
        reverse = true;
    if (reverse == true)
    {
        for (int i = sentence1.size() - 1; i >= 0; --i)
        {
            cout << sentence1[i] << endl;
        }
    }
    else
        for (int i = 0; i < sentence1.size(); ++i)
        {
            cout << sentence1[i] << endl;
        }
}
int main()
{
    int t = 0;
    string x;
    vector<string> sentence1 = { "This", "function", "doesn't", "remove", "repeats"};
    while (t != 2)
    {
        if (t == 0)
        {
            x = "-r";
            printer(sentence1, x);
            t++;
        }
        cout<<endl << t << endl;
        if (t == 1)
        {
            x = " ";
            printer(sentence1, x);
            t++;
        }
    }
    sentence1.clear();
}
