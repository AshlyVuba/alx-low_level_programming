#include <stdio.h>
/**
 * main - Entry point 
 * Return: 0 on success
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
		putchar(',');
	}
	return (0);
}
