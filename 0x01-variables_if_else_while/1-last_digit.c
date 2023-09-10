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
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d\n", n, l;
	if (l > 5)
	printf("and is greater than 5");
	else if(l == 0)
	printf("and is zero");
	else (l < 6 && l != 0)
	printf("and is less than 6 and not 0");
	return (0);
}
