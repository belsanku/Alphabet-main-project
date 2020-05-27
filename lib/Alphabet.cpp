#include <fstream>
#include "Createfile.h"
#include "assistant.h"
#include "choose.h"
#include "parent.h"
#include "printer.h"
#include "stringin.h"
#include "supereraser.h"
#include "symbols.h"
#include "textchanger.h"
#include "textsort.h"
#include "textsortfull.h"
#include <algorithm>
#include <ctype.h>
#include <locale>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string x, l;
    assistant();
    cout << endl;
    while (x != "exit") {
        choose(l, x);
    }
}
