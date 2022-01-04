/* SYSC 2006 Lab 2, Part 2.
 *
 * Incomplete implementations of the functions that will be coded during the lab. 
 */

#include <stdlib.h>
#include <math.h>

#include "exercises.h"

/* Returns n! for n >= 0. (0! is defined to be 1.)
   Note that the return type is int, and n! grows rapidly as n increases,
   so this function should only be used for fairly small values of n; 
   i.e., if ints are implemented as 32-bit values, n must be <= 15.
 */
int factorial(int n)
{
	int multiplication = 1;
	for (n; n > 0; n--) {

		multiplication *= n;

	}

	return multiplication;
}

/* Returns the number of different ordered subsets of k objects picked
   from a set of n objects, for n > 0, k > 0, n >= k.
 */
int ordered_subsets(int n, int k)
{
	int fact_n = factorial(n);
	int objects = n - k;
	int fact_objects = factorial(objects);
	int division = fact_n / fact_objects;

	return division;
}

/* Returns the binomial coefficient (n k); that is, the number of 
   combinations of k objects that can be chosen from a set of n objects, 
   for n > 0, k > 0, n >= k.
 */
int binomial(int n, int k)
{
	int combinations = ordered_subsets(n, k) / factorial(k);

	return combinations;
}

/* Returns the cosine of x (measured in radians) by calculating
 * the first n terms of the infinite series expansion of cosine.
 */
double cosine(double x, int n)
{
	int sign = 1;
	float cosx = 1;
	float term;
	for (int i = 1; i < n; i++) {
		sign = -sign;
		term = sign * pow(x, 2 * i) / factorial(2 * i);
		cosx += term;
	}

	return cosx;
}
