#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
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
	void print_alphabet();
	return (0);
}