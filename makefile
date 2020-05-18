.PHONY: clean all
CC = g++
CXXFLAGS = -Wall -Werror --std=c++17
EXE = bin/Alphabet-main-project
TESTS = bin/test
DIR_SRC = build/src
DIR_INCLUDE = lib
DIR_TEST = build/test
GTEST_D = thirdparty/googletest
LD_FLAGS = -L $(GTEST_D)/lib -lgtest_main -lpthread
CFLAG += -isystem $(GTEST_D)/include
CXX += -g -Wall -Wextra -pthread -std=c++17

all: $(EXE) 
# 	$(TESTS)

$(EXE): $(DIR_SRC)/Alphabet.o $(DIR_SRC)/assistant.o $(DIR_SRC)/choose.o $(DIR_SRC)/Createfile.o $(DIR_SRC)/parent.o $(DIR_SRC)/printer.o $(DIR_SRC)/stringin.o $(DIR_SRC)/supereraser.o $(DIR_SRC)/symbols.o $(DIR_SRC)/textchanger.o $(DIR_SRC)/textsort.o $(DIR_SRC)/textsortfull.o
	$(CC) $(CXXFLAGS) $(DIR_SRC)/Alphabet.o $(DIR_SRC)/assistant.o $(DIR_SRC)/choose.o $(DIR_SRC)/Createfile.o $(DIR_SRC)/parent.o $(DIR_SRC)/printer.o $(DIR_SRC)/stringin.o $(DIR_SRC)/supereraser.o $(DIR_SRC)/symbols.o $(DIR_SRC)/textchanger.o $(DIR_SRC)/textsort.o $(DIR_SRC)/textsortfull.o -o $(EXE)

$(DIR_SRC)/Alphabet.o: lib/Alphabet.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/Alphabet.cpp -o $(DIR_SRC)/Alphabet.o

$(DIR_SRC)/assistant.o: lib/assistant.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/assistant.cpp -o $(DIR_SRC)/assistant.o

$(DIR_SRC)/choose.o: lib/choose.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/choose.cpp -o $(DIR_SRC)/choose.o

$(DIR_SRC)/Createfile.o: lib/Createfile.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/Createfile.cpp -o $(DIR_SRC)/Createfile.o

$(DIR_SRC)/parent.o: lib/parent.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/parent.cpp -o $(DIR_SRC)/parent.o

$(DIR_SRC)/printer.o: lib/printer.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/printer.cpp -o $(DIR_SRC)/printer.o

$(DIR_SRC)/stringin.o: lib/stringin.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/stringin.cpp -o $(DIR_SRC)/stringin.o

$(DIR_SRC)/supereraser.o: lib/supereraser.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/supereraser.cpp -o $(DIR_SRC)/supereraser.o

$(DIR_SRC)/symbols.o: lib/symbols.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/symbols.cpp -o $(DIR_SRC)/symbols.o

$(DIR_SRC)/textchanger.o: lib/textchanger.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/textchanger.cpp -o $(DIR_SRC)/textchanger.o

$(DIR_SRC)/textsort.o: lib/textsort.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/textsort.cpp -o $(DIR_SRC)/textsort.o

$(DIR_SRC)/textsort.o: lib/textsortfull.cpp
	$(CC) $(CXXFLAGS) -I $(DIR_INCLUDE) -c lib/textsortfull.cpp -o $(DIR_SRC)/textsortfull.o

# $(TESTS) : $(DIR_SRC)/CoordPrinter.o $(DIR_SRC)/function.o $(DIR_TEST)/test.o
# 	$(CXX) $(CFLAG) $(LD_FLAGS) $(DIR_SRC)/CoordPrinter.o $(DIR_SRC)/function.o  $(DIR_TEST)/test.o -o $(TESTS)

# $(DIR_TEST)/test.o: test/test.cpp
# 	$(CXX) $(CFLAG) -I $(GTEST_D)/include -I src -c test/test.cpp -o $(DIR_TEST)/test.o
	

clean:
	rm -rf $(DIR_SRC)/*.o 
	rm -rf $(DIR_TEST)/*.o
	bin/*.exe
