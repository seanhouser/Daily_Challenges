// Challenge320.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	int spiral_num;
	int spiral_size;

	std::cout << "Please enter the number you would like spiraled out\n";
	std:: cin >> spiral_num;
	spiral_size = spiral_num*spiral_num;

	for (int i=1; i<spiral_size; i++) {
		std:: cout << i << ' ';
		if (i%spiral_num == 0)
			std::cout << '\n';
	}

	return 0;
}

