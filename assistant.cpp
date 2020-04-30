#include <iostream>
#include "assistant.h"
void assistant()
{
	std::cout << "The program for sorting text works as follows:" << std::endl <<
		"sort -d  --  sorting without repetition, then you must write next parameter:" << std::endl <<
		"What it will be: string or file;	If string, example: sort -d string" << std::endl <<
		"Then press ENTER;"<<std::endl<<"Next, you will have to write a string to sort" << std::endl;
}