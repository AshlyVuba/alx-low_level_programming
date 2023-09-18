#include "main.h"
/**
<<<<<<< HEAD
 * swap_int - Swap the values of two integers
 * @a: first integer to swap
 * @b: second nteger to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int ux;
=======
 * swap_int - Swaps the values of two integers
  * @a: An integer to swap
  * @b: Another integer to swap
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int aux;
>>>>>>> ed37f02e5fa72ed55c510036e0377f456d0edaf8

	aux = *a;
	*a = *b;
	*b = aux;
}
