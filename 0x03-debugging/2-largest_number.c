#include "main.h"
/**
 * largest_number - returns the largest of the largest of the 3 numbers
 * l: first integer
 * m: second integer
 * n: third integer
 * Return: largest number
 */
int largest_number(int l, int m, int n)
{
	int largest;

	if(l>= m && l >= n)
	{
		largest = l;
	}
	else if (m >= l && m >= n)
	{
		largest = m;
	}
	else
	{
		largest = n
	}
	return (largest);
}
