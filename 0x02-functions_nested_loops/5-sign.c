#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
int main()
{
	int num = 98;
	int result = print_sign(num);

	printf("The sign of %d is %d\n", num, result);
	return (0);
}
