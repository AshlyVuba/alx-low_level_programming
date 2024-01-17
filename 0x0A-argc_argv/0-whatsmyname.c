#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc : number of arguments
 * @argv: array of arguments
 *
 * Return : 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
	{
		printf("%\n", argv[0]);
		return 0;
	}

	return 1;

}
