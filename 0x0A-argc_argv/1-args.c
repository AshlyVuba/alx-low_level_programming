#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments 
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
