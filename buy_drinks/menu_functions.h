#pragma once

#include "common.h";
#include "common_class.h";
#include "functions.h"

void clear_window()
{
	std::cout << "\x1B[2J\x1B[H";
}

int start_window()
{
	int input = 0;
	
	std::cout << "X X X X X X X X X X X X X X X X X X X X X X X X X X X X X" << std::endl;
	std::cout << "X\t\t\t\t\t\t\tX" << std::endl;
	std::cout << "X    Welcome to 'drink + delivery service MUELLER'!     X" << std::endl;
	std::cout << "X\t\t\t\t\t\t\tX" << std::endl;
	std::cout << "X X X X X X X X X X X X X X X X X X X X X X X X X X X X X" << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "Please press 1 to place a drink order" << std::endl;
	std::cin >> input;
	
	while (input != 1)
	{
		std::cout << "Initialization failed. Please press 1 to place a drink order" << std::endl;
		std::cin >> input;
	}
	
	return input;
}