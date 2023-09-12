#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char alpha = 'a';
		while (alpha <= 'z')
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
