#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

enum Color{white, black, purple, red, green, orange};
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
		else if (color == "green")
		return green;
	else if (color == "orange")
		return orange;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;
	std::ifstream input("input.txt");
	
	while (getline(input, s))
		defusal.push_back(s);

	for (int i=0; i<defusal.size()-1; ++i) {
		Color step, nextStep;
		step = set_step(defusal[i]);
		nextStep = set_step(defusal[i+1]);

		switch (step){
		case white:
			if (nextStep == white || nextStep == black) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		case black:
			if (nextStep == white || nextStep == green || nextStep == orange) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		case purple:
			if (nextStep == purple || nextStep == green || nextStep == orange || nextStep == white) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		case red:
			if (nextStep != green) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		case green:
			if (nextStep != orange && nextStep != white) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		case orange:
			if (nextStep != red && nextStep != black) {
				std::cout << "BOOM\n";
				return 0;
			}
			break;
		}
	}
	std::cout << "Succussfully defused!" << std::endl;
	return 0;
}

