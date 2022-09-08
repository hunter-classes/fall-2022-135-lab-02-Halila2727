/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task C

        This program will output the fibonacci sequence numbers for a given interval.
*/

#include <iostream>


int fib_num_generate(int before, int before2)
{
	int now = before + before2;
	return now;
}

int main()
{
	int fib[60];

	fib[0] = 0;
	fib[1] = 1;

	std::cout << "Fibonacci numbers:\n0\n1" << std::endl;

	for(int i=2; i<60; i++)
	{
		fib[i] = fib_num_generate(fib[i-1], fib[i-2]);
		std::cout << fib[i] << std::endl;
	}

	return 0;
}
