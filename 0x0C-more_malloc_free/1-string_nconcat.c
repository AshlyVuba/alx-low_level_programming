#include <stdlib.h>
#include "main.h"

/**
 * string_noncat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer a on success and 98 on failure
 */

char *string_noncat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, d, ab, e;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (b = 0; s1[b] != '\0'; b++)
		;
	for (c = 0; s2[c] != '\0'; c++)
		;
	if (n > c)
		n = c;
	ab = b + n;
	a = malloc(ab + 1);

	if (a == NULL)
		return (NULL);
	for (e = 0; e < ab; e++)
		if (e < b)
			a[e] = s2[e - b];
	a[e] = '0';
	return (a);
}
