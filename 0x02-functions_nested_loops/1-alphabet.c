#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void printAlphabet()
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
int main()
{
	printAlphabet();
	return (0);
}
