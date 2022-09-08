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
	std::cout << "Testing... Printing all integers between -5 and 10!" << std::endl;
	print_interval(-5, 10);

	int begin=0;
	int end=0;
	
	std::cout << std::endl;
	std::cout << "\nPlease enter L: ";
	std::cin >> begin;
	std::cout << "Please enter U: ";
	std::cin >> end;

	std::cout << "\n\n";
	print_interval(begin, end);
	std::cout << std::endl;
	
	return 0;
}
