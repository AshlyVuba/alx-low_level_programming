#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar('\n');
	}
	if (a != 9)
	{
		putchar(',')
	}
	return (0);
}
