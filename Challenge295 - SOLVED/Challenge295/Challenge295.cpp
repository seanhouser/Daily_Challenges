#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>

void printWord(int i, std::vector<char> & data) {
	for (int j=0; j<data.size()/2; ++j) {
		if (j+1 <= i)
			std::cout << data[j+(data.size()/2+1)];
		else
			std::cout << data[j];
	}
	std::cout << '\n';
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<char> data;
	std::ifstream input("input.txt");
	char s;

	while (input >> std::noskipws >> s)
		data.push_back(s);

	for (int i=0; i<data.size()/2+1; ++i) {
		if (i == data.size()/2)
			printWord(i, data);
		else if (data[i] != data[i+data.size()/2+1])
			printWord(i, data);
	}
	return 0;
}