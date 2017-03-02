// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const float total = 1000.0;
const float main_discount[3] = {0.5, 0.6, 0.7};
const float secondary_discount[3] = {0.1, 0.2, 0.3};

float result(float main_discount, float secondary_discount) {
	float partial = total - (total*main_discount);
	return partial -= partial*secondary_discount;
}

int _tmain(int argc, _TCHAR* argv[])
{
	for (int m_d=0; m_d<3; ++m_d) {			//m_d is main discount, s_d is secondary discount
		for (int s_d=0; s_d<3; ++s_d) {
			std::cout << "$1000 with " << main_discount[m_d]*100 << "% + " << secondary_discount[s_d]*100 << "% off = $" << result(main_discount[m_d], secondary_discount[s_d]) << '\n';
		}
	}
	return 0;
}

