/* SYSC 2006 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n)
{
	double sum = 0;
	int negatation = -1;

	for (int i = 0; i < n; i++)
	{

		if (x[i] <= 0)
		{

			sum = sum + (negatation * x[i]);

		}
		else
		{
			sum = sum + x[i];
		}

	}

	double avg = sum / n;

	return avg;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n)
{
	double sum = 0;
	double power = 0;

	for (int i = 0; i < n; i++)
	{

		power = (x[i]) * (x[i]);
		sum = sum + power;

	}

	double pow_avg = sum / n;

	return pow_avg;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
	double temp_maxval = arr[0];

	for (int i = 0; i < n; i++)
	{

		if (arr[i] > temp_maxval)
		{

			temp_maxval = arr[i];
		}

	}

	return temp_maxval;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
	double temp_minval = arr[0];

	for (int i = 0; i < n; i++)
	{

		if (arr[i] < temp_minval)
		{

			temp_minval = arr[i];
		}

	}
	return temp_minval;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double min_x = min(x, n);
	double max_x = max(x, n);
	double function = 0;
	for (int i = 0; i < n; i++)
	{

		x[i] = (x[i] - min_x) / (max_x - min_x);
	}
	return;
}
