/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task B

        This program will output the void function made in funcs.cpp.
*/
#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << "\nPlease enter L: -5";
	std::cout << "\nPlease enter U: 10";

	std::cout << "\n\n";
	print_interval(-5, 10);
	std::cout << std::endl;
	
	return 0;
}
