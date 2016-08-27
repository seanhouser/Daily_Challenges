// Challenge280.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int calOnes(char four, char three, char two, char one, char five);
int calTens(char fourty, char thirty, char twenty, char ten, char fifty);

int _tmain(int argc, _TCHAR* argv[])
{
	std::string tmp;
	while (std::getline(std::cin, tmp)) {
		int ones, tens, total;
		if (tmp.size() != 10) {
			std::cout << "Invalid length\n";
			return 0;
		}
		ones = calOnes(tmp[9], tmp[8], tmp[7], tmp[6], tmp[5]);
		tens = calTens(tmp[0], tmp[1], tmp[2], tmp[3], tmp[4]);
		total = tens + ones;
		if (total < 0)
			std::cout << "Invalid\n";
		else
			std::cout << total << std::endl;
	}
	return 0;
}

int calOnes(char four, char three, char two, char one, char five) {
	int total = 0;
	if ((four == '1' && (three == '0' || two == '0' || one == '0')) || (three == '1' && (two == '0' || one == '0')) || (two == '1' && one == '0'))
		total = -999;
	else if (four == '1') total = 4;
	else if (three == '1') total = 3;
	else if (two == '1') total = 2;
	else if (one == '1') total = 1;
	if (five == '1') total += 5;
	return total;
}

int calTens(char fourty, char thirty, char twenty, char ten, char fifty) {
	int total = 0;
	if (fourty == '1' && (thirty == '0' || twenty == '0' || ten == '0') || (thirty == '1' && (twenty == '0' || ten == '0')) || (twenty == '1' && ten == '0'))
		total = -999;
	else if (fourty == '1') total = 4;
	else if (thirty == '1') total = 3;
	else if (twenty == '1') total = 2;
	else if (ten == '1') total = 1;
	if (fifty == '1') total += 5;
	return total*10;
}
