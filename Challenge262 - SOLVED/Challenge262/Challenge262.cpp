#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

void isNum(std::string);

int _tmain(int argc, _TCHAR* argv[])
{
	isNum("123");
	isNum("44.234");
	isNum("0x123N");

	return 0;
}

void isNum(std::string input) 
{
	for (char c : input) {
		std::cout <<  c;
	}
	std::cout << ": (";
	for (char c : input) {
		if (c < 46 || c > 57 || c == 47) {
			std::cout << "String)" << std::endl;
			return;
		}
	}
	std::cout << "Number)" << std::endl;
	return;
}