#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int m_square[3][3] = {{8,1,6},{3,5,7},{4,9,2}};

	//let's do this in the ugliest way possible
	if ((m_square[0][0] + m_square[1][1] + m_square[2][2] == 15) && (m_square[0][2] + m_square[1][1] + m_square[2][0] == 15) && (m_square[0][0] + m_square[1][0] + m_square[2][0] == 15) && (m_square[0][1] + m_square[1][1] + m_square[2][1] == 15) && (m_square[0][2] + m_square[1][2] + m_square[2][2] == 15) && (m_square[0][0] + m_square[0][1] + m_square[0][2] == 15) && (m_square[0][0] + m_square[0][1] + m_square[0][2] == 15) && (m_square[1][0] + m_square[1][1] + m_square[1][2] == 15) && (m_square[2][0] + m_square[2][1] + m_square[2][2] == 15))
		std::cout << "Yup" << std::endl;
	else
		std::cout << "Nope" << std::endl;

	return 0;
}

