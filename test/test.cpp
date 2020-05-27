#include "../modul_tests/tCreatefile.h"
#include "../modul_tests/tsort_dedubl.h"
#include "../modul_tests/tsupereraser.h"
#include "symbols.h"
#include <algorithm>
#include <fstream>
#include <gtest/gtest.h>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

TEST(SUPERERASER, supereraser_test)
{
    int check = 0;
    string sentence = "";
    string x1 = "123";
    supereraser(sentence, x1, check);
    ASSERT_EQ(2, check);
    string x2 = "avc";
    supereraser(sentence, x2, check);
    ASSERT_EQ(2, check);
    string x3 = "-Ac";
    supereraser(sentence, x3, check);
    ASSERT_EQ(1, check);
    string x4 = "-A";
    supereraser(sentence, x4, check);
    ASSERT_EQ(1, check);
}

TEST(CREATEFILE, create_test)
{
    int check = 0;
    string x = "";
    CreateFile(x, check);
    ASSERT_EQ(0, check);
}

TEST(SYMBOLS, up_to_lower)
{
    int check = 0;
    string test1 = "TESTiNG StRING";
    string empty = "";
    symbols(test1, empty);
    if (test1 == "testing string") {
        check = 1;
    }
    ASSERT_EQ(1, check);
    string test2 = "Я САША";
    symbols(test2, empty);
    if (test2 == "Я САША") {
        check = -1;
    }
    ASSERT_EQ(-1, check);
    string test3 = "";
    symbols(test3, empty);
    if (test3 == "") {
        check = -2;
    }
    ASSERT_EQ(-2, check);
    test1 = "";
    test2 = "";
    test3 = "";
}

TEST(SORTING, dedubl_sort_tester)
{
    int check = 0;
    vector<string> sentence = {"123", "345", "567", "789"};
    vector<string> sentence1 = {"nothing", "else", "matters", "metallica"};
    string line = "";
    string x1 = "string";
    string x2 = "file";
    textsort(sentence, line, x1, check);
    ASSERT_EQ(1, check);
    textsort(sentence, line, x2, check);
    ASSERT_EQ(2, check);
    textsort(sentence1, line, x1, check);
    ASSERT_EQ(3, check);
}
