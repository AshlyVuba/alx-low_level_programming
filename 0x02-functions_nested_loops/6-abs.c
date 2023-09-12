#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
int absolute_value(int n)
{
	if (n < 0)
	{
		return -n;
	}
	else
	{
		return n;
	}
}
int main()
{
	int number = -42;
	int result = absolute_value(number);

	printf("The absolute value of %d is %d\n", number, result);
	return (0);
}
