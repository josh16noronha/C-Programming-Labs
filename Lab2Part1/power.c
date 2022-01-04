#include "power.h"

/* SYSC 2006 Lab 2, Part 1 */

/* Raise x to the n'th power; n >= 0; x > 0 when n == 0. */

int power1(int x, int n)
{
	int product = 1;
	for (n ; n > 0; n = n - 1) {
		product = product * x;
	}
	return product;
	// The error was product = 0 in the argument of the for loop.
	// So 0*x is going to output 0.
}

int power2(int x, int n)
{
	int product = 1;
	for (; n > 0; n = n - 1) {
		product = product * x;   
	}
	return product;
	// The error was addition of x in the for loop.
}

int power3(int x, int n)
{
	int product = 1;
	for (; n > 0; n = n - 1) {
		product = product * x;
	} 
	return product;
	// The error was n >= 0 in the argument of the for loop.
}

int power4(int x, int n)
{
	int product = 1;
	for (; n > 0; n = n - 1) {
		product = product * x;
	}
	return product;
	// The error was n = n - 1 in the body of the for loop.	
}
