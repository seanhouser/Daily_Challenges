// Challenge293.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <iostream>

bool defuse_step(std::string color) {

	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;

	std::ifstream input("input.txt");
	while (getline(input, s)) {
		if (s.empty()) {
			std::cout << "Line is empty\n";
			//start state machine over
		}
		else {
			std::cout << s << '\n';
		}
	}


	return 0;
}

