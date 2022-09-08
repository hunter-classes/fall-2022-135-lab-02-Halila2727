/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task B

        This function will return all integers between a requested interval.
*/
#include <iostream>

void print_interval(int L, int U)
{
	for(int i=L; i<U; i++)
	{
		std::cout << i << " ";
	}

	return;
}
