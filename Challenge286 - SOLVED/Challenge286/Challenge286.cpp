// Challenge286.cpp : Defines the entry pofloat for the console application.
//

#include "stdafx.h"
#include <iostream>

float rev_factorial(float, float);

float _tmain(float argc, _TCHAR* argv[])
{
	float number, answer;
	std::cout << "Press Ctrl+C to exit\nPlease enter the number you'd like to find the factorial of" << std::endl;
	while (1) {
	std::cin >> number;
	answer = rev_factorial(number, 2);
	if (answer == -99)
		std::cout << "NONE" << std::endl;
	else
		std::cout << "Factorial is " << answer << '!' << std::endl;
	}
	return 0;
}

float rev_factorial(float number, float factorial) {
	if (number < 1)
		return -99;
	if (number == 1)
		return --factorial;
	else {
		number = number/factorial;
		factorial++;
		return rev_factorial(number, factorial);
	}
}