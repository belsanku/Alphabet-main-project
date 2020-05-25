#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <locale>
#include <set>
#include <ctype.h>
#include "printer.h"
#include "textsortfull.h"
#include "textsort.h"
#include "parent.h"
#include "symbols.h"
#include "textchanger.h"
#include "supereraser.h"
#include "Createfile.h"
#include "stringin.h"
#include "assistant.h"
#include "choose.h"

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
