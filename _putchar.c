#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: the character to be printed
 *
 * Return: 1 on Success and -1 on error
 */
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}
