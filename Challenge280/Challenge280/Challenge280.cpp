// Challenge280.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdlib.h>

int calOnes(char four, char three, char two, char one, char five);

int _tmain(int argc, _TCHAR* argv[])
{
	int ones;
	std::string tmp;
	while (std::getline(std::cin, tmp)) {
		if (tmp.size() != 10) {
			std::cout << "Invalid length\n";
			return 0;
		}
		ones = calOnes(tmp[9], tmp[8], tmp[7], tmp[6], tmp[5]);
		std::cout << ones << std::endl;
	}
	return 0;
}

int calOnes(char four, char three, char two, char one, char five) {
	std::string ones;
	int total;
	ones = ones+five+one+two+three+four;
	if ((four == '1'&& (three == '0' || two == '0' || one == '0')) || (three == '1' && (two == '0' || one == '0')) || (two == '1' && one == '0'))
		total = -999;
	else if (four == '1') total = 4;
	else if (three == '1') total = 3;
	else if (two == '1') total = 2;
	else if (one == '1') total = 1;
	if (five = '1') total += 5;
	return total;
}
