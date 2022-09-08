/*
        Author: Halil Akca
        Course: CSCI-135
        Instructor: Mike Zamansky
        Assignment: Lab 02, Task C

        This program will output the fibonacci sequence numbers for a given interval.
*/

#include <iostream>

//The reason this file does not output the fibonacci sequence correctly once
//the numbers approach 2 billions is because the maximum value an int type
//(our fibonacci array is an int array) can hold is 2,147,483,647 and once
//this max value is passed, C++ reverts the value to the minimum value (-2,147,483,648)
//and starts increasing once again. Since, the program can't display anything
//higher than the max value above, our fibonacci values ultimately diverge
//from the actual fibonacci sequence and includes negative values :(

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
