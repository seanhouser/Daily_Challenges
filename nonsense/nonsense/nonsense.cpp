// nonsense.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int STOP = 101;
const int EXCLUDE = 1;

int _tmain(int argc, _TCHAR* argv[])
{
    for (int i=0; i<=10; i++) {
        for (int j=0; j<=9; j++) {
            if ((10*i)+j > STOP)
                return 0;
			if ((10*i)+j != EXCLUDE) {
				if (i>0)
					std::cout << i;
				std:: cout << j;
				switch (j) {
				case 1:
					std::cout << "st, ";
					break;
				case 2:
					std::cout << "nd, ";
					break;
				case 3:
					std::cout << "rd, ";
					break;
				default:
					std:: cout << "th, ";
					break;
				}
			}
        }
    }
    return 0;
}

