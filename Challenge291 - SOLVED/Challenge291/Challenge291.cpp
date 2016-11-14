// Challenge291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>

int popFront(std::vector<int> & food_info)
{
	int temp;
	temp = *food_info.begin();
	food_info.erase(food_info.begin());
	return temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream input;
	int s;
	int g_weight;
	int g_temp;
	input.open("input.txt");
	std::vector<int> food_info;
	while (input >> s)
		food_info.push_back(s);
	g_weight = popFront(food_info);
	g_temp = popFront(food_info);
	for (int i=1; !food_info.empty(); ++i) {
		int weight, temp;
		weight = popFront(food_info);
		temp = popFront(food_info);
		if (weight >= g_weight && temp <= g_temp)
			std::cout << i << ' ' ;
	}
	std::cout << std::endl;

	input.close();
	return 0;
}

