#include "main.h"
#include <stdlib>

/**
 * malloc_checked - allocates meme=ory using malloc
 * @b: number of bytes
 *
 * Return: pointer a on success and 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
