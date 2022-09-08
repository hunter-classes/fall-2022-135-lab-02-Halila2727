/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task C

        This program will create an array of size 10 and fill it with user input and allow the user to edit the array until an invalid input has been made.
*/
#include <iostream>

int main()
{
	int myData[10];

	std::cout << std::endl;

	for(int i=0; i<10; i++)
	{
		myData[i]=1;
		std::cout << myData[i] << " ";
	}
	
	std::cout << std::endl;

	int index = 0;
	int value = 0;

	std::cout << "\nInput index: ";
	std::cin >> index;

	std::cout << "Input value: ";
	std::cin >> value;

	while(index >=0 && index < 10)
	{
		myData[index] = value;

		std::cout << std::endl;
		for(int i=0; i<10; i++)
        	{
                	std::cout << myData[i] << " ";
        	}
		std::cout << std::endl;

		std::cout << "\nInput index: ";
		std::cin >> index;

		std::cout << "Input value: ";
		std::cin >> value;
	}

	std::cout << "\n\nIndex out of range. Exit." << std::endl;

	return 0;
}
