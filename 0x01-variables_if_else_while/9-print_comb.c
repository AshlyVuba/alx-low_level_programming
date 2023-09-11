#include <stdio.h>
/**
 * main - Entry point 
 * Return: 0 on success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(',');
			putchar(b + '0');
			putchar(',');
		}
	}
	return (0);
}
