#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;
       	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
