// Challenge286.cpp : Defines the entry pofloat for the console application.
//

#include "stdafx.h"
#include <iostream>

void rev_factorial(float, float);

float _tmain(float argc, _TCHAR* argv[])
{
	float number;
	std::cout << "Press Ctrl+C to exit\nPlease enter the number you'd like to find the factorial of" << std::endl;
	while (1) {
	std::cin >> number;
	rev_factorial(number, 2);
	}
	return 0;
}

void rev_factorial(float number, float factorial) {
	if (number < 1) {
		std::cout << "NONE" << std::endl;
		return;
	}
	if (number == 1) {
		factorial--;
		std::cout << "The factorial is: " << factorial << std::endl;
		return;
	}
	else {
		number = number/factorial;
		factorial++;
		rev_factorial(number, factorial);
	}
}