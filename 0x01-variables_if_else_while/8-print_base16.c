#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int n;
	for (n = 0; n < 16; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
