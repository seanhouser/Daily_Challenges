// Challenge302.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

struct element {			//structure to store each element
	std::string name;		//name of checmical element
	std::string symbol;		//symbol of checmical element
	std::string a_weight;	//atomic weight of checmical element
};

std::vector<element> p_table;	//vector to store all elements structures

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream input("p_table.txt");	//steam for periodic table input
	std::string temp;					//string for storing each line of periodic table input

	for (int i=0; getline(input, temp); ++i) {
		std::vector<std::string> buffer_vector;		//vector for storing individual words of each line
		std::string buffer;							//string buffer
		std::stringstream ss(temp);					//insert buffer string into stream
		while (ss >> buffer) {
			buffer_vector.push_back(buffer);		//load vector with separated words
		}
		element e;						//create new element structure and load data
		e.name = buffer_vector[0];
		e.symbol = buffer_vector[1];
		e.a_weight = buffer_vector[3];
		p_table.push_back(e);			//push loaded structure into p_table vector
	}



	return 0;
}

