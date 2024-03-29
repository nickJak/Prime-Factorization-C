/* 
This program finds the prime factorization of a number specified by the user if the number is betweeen 2 and 1000000.
If the number is not between those parameters then the program will continue to ask for the nummber.
*/

// Prime Factorization.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h" 
#include <iostream> 
using namespace std;
int main()
{
	int num, start = 0; // initialize the integers num and start
	
	while (start == 0)// a loop that will run until a number between 2 and 1000000 is entered
	{
		cout << "Enter a number from 2 to 1000000: ";
		cin >> num;
		if ((num >= 2) && (num <= 1000000)) // if a number that is between 2 and 1000000 the program will exit this loop
			start = 1;
	}

	for (int i = 2; i <= num; i++) //will run through all integers from 2 to the number
	{
		while (num%i == 0) // if the number is a prime factor it will run through this loop until it goes to the next prime factor
		{
			cout << i; // prints out the prim factor
			if (i < num) // if the printed prime factor is not the last one the program will print a “ * “  after it.
				cout << " * ";
			num = num / i; // divide the number by I and then assign num that value
		}
	}
	return 0;
}




