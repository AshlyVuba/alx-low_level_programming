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
	n = rand()- RAND_MAX / 2;
	printf("Random number:%d\n", n);
	printf("Last digit: %d\n", n % 10);
	return (0);
}
