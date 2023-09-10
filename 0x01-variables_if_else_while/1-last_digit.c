#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of this program
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d\n", n, n % 10);
	return (0);
}
