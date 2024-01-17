#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - print the sum of given arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success and 1 if error
 */

int main(int argc, char *argv[])
{
	int sum;
	int a;
	int count;

	count = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (a = 0; argv[count][a] != '\0'; a++)
		{
			if (!(isdigit(argv[count][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
