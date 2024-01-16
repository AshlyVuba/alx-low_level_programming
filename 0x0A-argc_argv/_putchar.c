#incude ,stdio.h>
#include "main.h"
/*
 * _putchar - writes the character c
 * @c : the character to print
 *
 * Return: 1 on success
 * Return: -1 when unsccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
