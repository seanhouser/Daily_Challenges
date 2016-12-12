#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream input("input.txt");
	std::vector<char> data;
	char s;

	while (input >> std::noskipws >> s)
		data.push_back(s);

	for (int i=0; i<data.size()/2+1; ++i) {
		for (int j=0; j<(data.size()/2); ++j) {
				if (j+1 <= i)
					std::cout << data[j+(data.size()/2+1)];
				else 
					std::cout << data[j];
		}
		std::cout << '\n';
	}
	return 0;
}