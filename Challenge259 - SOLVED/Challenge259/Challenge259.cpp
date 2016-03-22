// Challenge259.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

float result;

float findX(char);
float findY(char);

int _tmain(int argc, _TCHAR* argv[])
{
	std::string IP_addy = "219.45.143.143";
	std::vector<char> addy;

	for (char c : IP_addy)
		addy.push_back(c);

	char cur_char;
	char next_char;
	for (std::vector<char>::iterator i = addy.begin(); i != std::prev(addy.end()); ++i) {
		float x1, y1, x2, y2;
		cur_char = *i;
		next_char = *(i+1);
		x1 = findX(cur_char);
		y1 = findY(cur_char);
		x2 = findX(next_char);
		y2 = findY(next_char);

		if (x1 == x2)
			result += abs(y2 - y1);
		else if (y1 == y2)
			result += abs(x2 - x1);
		else
			result += sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
	}
	
	std::cout << "For the IP address "<< IP_addy << " the travel distance is " << std::setprecision(4) <<  result << "cm" << std::endl;
	return 0;
}

float findX(char c)
{
	int result;

	switch (c) {
		case '1':
		case '2':
		case '3':
			return 0;
		case '4':
		case '5':
		case '6':
			return 1;
		case '7':
		case '8':
		case '9':
			return 2;
		case '0':
		case '.':
			return 3;
		}
}

float findY(char c)
{
	switch (c) {
		case '1':
		case '4':
		case '7':
		case '.':
			return 0;
		case '8':
		case '5':
		case '2':
		case '0':
			return 1;
		case '9':
		case '6':
		case '3':
			return 2;
		}
}