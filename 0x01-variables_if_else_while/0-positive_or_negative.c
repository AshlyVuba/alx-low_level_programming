#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
/* Initialize random number generator with current time */
srand(time(0));
/* Generate a random number between -100 and 100 */
n = rand() % 201 - 100;
/* Check if the number is positive, negative, or zero */
if (n > 0)
{
printf("%d is a positive number\n", n);
}
else if (n < 0)
{
printf("%d is a negative number\n", n);
}
else (n = 0)
{
printf("%d is zero\n", n);
}
return (0);
}
