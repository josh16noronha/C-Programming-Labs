/* SYSC 2006 Lab 10. */
// Name: Joshua Noronha
// ID: 101194076
#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
	double a;
	if (n == 0) {
		return 1;
	} else {
		a = x * power(x, n - 1);
	}
	return a;
}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
	if (n < 10) {
		return 1;
	} else {
		int a = num_digits(n / 10);
		return a + 1;
	}

}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */
int occurrences(int a[], int n, int target)
{
	if (n == 0) {
		return 0;
	} else {
		int temp = occurrences(a, n - 1, target);
		if (a[n] == target) {
			return temp + 1;
		} else {
			return temp;
		}
	}
}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
	double a;
	if (n == 0) {
		return 1;
	} else {
		a = x * power(x, n - 1);
	}
	return a;
}
