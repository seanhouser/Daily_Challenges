// Challenge254.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	char word[256];
	printf("Please enter word(s)\n");
	gets_s(word);
	for (int i=0; i<strlen(word); i++) {
			if (word[i] >= 97 && word[i] <= 122)
				std::cout << static_cast<char>('z' - (word[i] - 'a'));
			else if (word[i] >= 65 && word[i] <= 90)
				std::cout << static_cast<char>('Z' - (word[i] - 'A'));
			else
				std::cout << word[i];
	}
	std::cout << '\n';
	return 0;
}

