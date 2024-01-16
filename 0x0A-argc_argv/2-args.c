#include <stdio.h>
#include "main.h"

/**
 * main - printts all the arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%\n", argv[i]);
	}

	return (0);
}
