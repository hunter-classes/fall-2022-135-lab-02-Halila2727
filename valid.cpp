/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task A

        This program will return a number squared as long as the number entered is greater than 0 and less than 100.
*/
#include <iostream>

int square(int input)
{
	return input * input;
}

int main()
{
	int userNum = 0;

	std::cout << "Please enter an integer: ";
	std::cin >> userNum;

	while(userNum <= 0 || userNum >=100)
	{
		std::cout << "\nPlease re-enter: ";
		std::cin >> userNum;
	}
	
	std::cout << "\nNumber squared is " << square(userNum) << std::endl;
	return 0;
}
