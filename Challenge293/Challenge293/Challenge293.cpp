// Challenge293.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

enum Color{white, black, purple, red, green, orange, SUCCESS};
std::vector <std::string> defusal;

Color set_step(std::string color) {
	if (color == "white")
		return white;
	else if (color == "black")
		return black;
	else if (color == "purple")
		return purple;
	else if (color == "red")
		return red;
	else if (color == "orange")
		return orange;
	else
		return SUCCESS;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;
	std::ifstream input("input.txt");
	
	while (getline(input, s))
		defusal.push_back(s);

	for (int i=0; i<defusal.size(); ++i) {
		Color step, nextStep;
		step = set_step(defusal[i]);
		nextStep = set_step(defusal[i+1]);

		switch (step){
		case white:
			if (nextStep == white || nextStep == black) {
				std::cout << "BOOM\n";
				return 0;
			}
		case black:
		case purple:
		case red:
		case green:
		case orange:
		case SUCCESS:
			std::cout << "Successfully defused\n";
		}
	}

	return 0;
}

