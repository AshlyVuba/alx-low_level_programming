#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet()
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
