// Challenge320.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
	int spiral_num;
	int spiral_size;
	std::vector<int> numbers;

	std::cout << "Please enter the number you would like spiraled out\n";
	std:: cin >> spiral_num;
	spiral_size = spiral_num*spiral_num;

	for (int i=1; i<spiral_size+1; i++) {
			numbers.push_back(i);
		
	}


	for (int i=0; i<spiral_size; i++) {
		std:: cout << numbers[i] << ' ';
		if (i%spiral_num == 0 && i != 0)
			std::cout << '\n';
	}

	return 0;
}

