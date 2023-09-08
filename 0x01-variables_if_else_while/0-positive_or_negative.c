#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    /* Initialize the random number generator with the current time */
    srand(time(0));

    /* Generate a random number between -100 and 100 */
    n = rand() % 201 - 100;

    /* Check if the number is positive or negative and print the result */
    if (n > 0)
    {
        printf("%d is a positive number\n", n);
    }
    else if (n < 0)
    {
        printf("%d is a negative number\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }

    return (0);
}

