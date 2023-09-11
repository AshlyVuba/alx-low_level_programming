#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	int a, b;

	for (a = 10; a <= 99; a++)
	{
		for (b = 10; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
