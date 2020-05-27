#include "../modul_tests/tCreatefile.h"
#include "../modul_tests/tchoose.h"
#include "../modul_tests/tprinter.h"
#include "../modul_tests/tsort_dedubl.h"
#include "../modul_tests/tsupereraser.h"
#include "../modul_tests/ttextchanger.h"
#include "../modul_tests/ttextsortfull.h"
#include "parent.h"
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

TEST(CHOOSE, choose_test)
{
    string l = "";
    int check = 0;
    string s1 = "string";
    choose(l, s1, check);
    ASSERT_EQ(1, check);
    string s2 = "file";
    choose(l, s2, check);
    ASSERT_EQ(2, check);
    string s3 = "trash";
    choose(l, s3, check);
    ASSERT_EQ(0, check);
    string s4 = "help";
    choose(l, s4, check);
    ASSERT_EQ(3, check);
}

TEST(PRINTER, printer_test)
{
    int check = 0;
    vector<string> sentence1 = {"test", "awful", "sick"};
    string x1 = "-r";
    string x2 = "-afd";
    printer(sentence1, x1, check);
    ASSERT_EQ(1, check);
    printer(sentence1, x2, check);
    ASSERT_EQ(2, check);
}

TEST(PARENT, parent_test)
{
    char c1 = {'a'};
    char c2 = {'!'};
    ASSERT_FALSE(IsParenthesesOrDash(c1));
    ASSERT_TRUE(IsParenthesesOrDash(c2));
}

TEST(TEXTCHANGER, string_spliter)
{
    int check = 0;
    string test = "my name is Roma";
    string empty = "empty";
    vector<string> sentence;
    textchanger(test, empty, check, sentence);
    ASSERT_EQ(0, check);
    if (sentence[0] == "my " && sentence[1] == "name " && sentence[2] == "is "
        && sentence[3] == "Roma ") {
        check = 2;
    }
    ASSERT_EQ(2, check);
    sentence.resize(sentence.size() - 2);
    empty = "-d";
    textchanger(test, empty, check, sentence);
    ASSERT_EQ(5, check);
    sentence.clear();
}

TEST(FULLSORT, test_multisetsort)
{
    int check = 0;
    string line = "";
    string x1 = "string";
    string x2 = "file";
    vector<string> sentence3 = {"123", "345", "567", "789"};
    vector<string> sentence1 = {"test", "work", "dom", "тест"};
    vector<string> sentence2 = {"A", "j", "AA", "aa"};
    textsortfull(sentence3, line, x1, check);
    ASSERT_EQ(1, check);
    textsortfull(sentence3, line, x2, check);
    ASSERT_EQ(2, check);
    textsortfull(sentence1, line, x1, check);
    ASSERT_EQ(3, check);
    textsortfull(sentence2, line, x2, check);
    ASSERT_EQ(4, check);
}