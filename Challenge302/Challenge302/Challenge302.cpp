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
	std::vector<char> symbol;		//symbol of checmical element
	std::string a_weight;	//atomic weight of checmical element
};

std::vector<element> p_table;	//vector to store all elements structures

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream input("p_table.txt");	//stream for periodic table input
	std::string temp;					//string for storing each line of periodic table input
	while (getline(input, temp)) {
		std::vector<std::string> buffer_vector;		//vector for storing individual words of each line
		std::string buffer;							//string buffer
		std::stringstream ss(temp);					//insert buffer string into stream
		while (ss >> buffer)
			buffer_vector.push_back(buffer);		//load vector with separated words
		
		element e;							//create new element structure and load data
		e.name = buffer_vector[0];			//load name as a string
		for (char& c : buffer_vector[1])	//load symbol as a c-style character array using vector
			e.symbol.push_back(c);
		e.a_weight = buffer_vector[3];		//load atomic weight as a string
		p_table.push_back(e);				//push loaded structure into p_table vector
	}

	std::ifstream input2("input.txt");			//stream for challenge word input
	std::string temp2;							//string for storing each challenge word

	while (getline(input2, temp2)) {	
		std::vector<char> challenge_word;	//vector for storing c-style character string
		std::string element_match;			//string for storing the matched elements for printing
		for (char& c : temp2)				//load challenge_word vector with characters of current challenge word	
			challenge_word.push_back(c);
		char c = ' ';						//add whitespace to the end of challenge word vector for iterator+1 checking
		challenge_word.push_back(c);

		for (int i=0; i<challenge_word.size(); ++i) {		//for every character in the challenge word
			for (int j=0; j<p_table.size(); ++j) {			//for every element in p_table
				if (challenge_word[i] == tolower(p_table[j].symbol[0]) && p_table[j].symbol.size() == 1) {	//compare challenge word character with element symbols
					std::cout << p_table[j].symbol[0];		//print the single character in the symbol
					element_match += p_table[j].name + ' ';	//concatenate 
					break;									//break prevents checking of elements once a suitable match is found
				}
				else if (challenge_word[i] == tolower(p_table[j].symbol[0]) && p_table[j].symbol.size() == 2 && challenge_word[i+1] == tolower(p_table[j].symbol[1])) {		//compare challenge word character with element symbols, accunts for 2-letter symbols
					for (int k=0; k<p_table[j].symbol.size(); ++k)	//print all characters in the symbol
						std::cout << p_table[j].symbol[k];
					element_match += p_table[j].name + ' ';
					++i;											//increase i to skip next character in challenge word when 2-letter symbol is matched
					break;											//break prevents checking of elements once a suitable match is found
				}										
			}
		}
		std::cout << " ( " << element_match << ')' << '\n';	//print the stored elements that make up the challenge word
	}
	

	return 0;
}

