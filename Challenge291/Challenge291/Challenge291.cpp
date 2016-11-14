// Challenge291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>

int popFront(std::vector<int>);

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream input;
	int s;
	int g_weight;
	int g_temp;
	input.open("input.txt");
	std::vector<int> food_info;
	for (int i=0; input; ++i) {
		input >> s;
		food_info.push_back(s);
	}
	popFront(food_info);

	input.close();
	return 0;
}

int popFront(std::vector<int> & food_info)
{
	int temp;
	temp = *food_info.begin();
	food_info.erase(food_info.begin());
	return temp;
}

