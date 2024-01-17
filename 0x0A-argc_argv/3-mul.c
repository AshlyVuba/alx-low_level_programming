#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string that needs to be converted
 *
 * Return: The int
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Eroor\n");
		return (1);
	}

	return (0);
}
