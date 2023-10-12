#include <functions_pointers.h>
/**
 * array_iterator - Execute a function on each element of an array
 * @array: The integer array
 * @size: The size of the array
 * @action: A function to apply to each element
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

/**
 * print_element - A sample action function to print an element
 * @element: The element to print
 */
void print_element(int element)
{
	printf("%d ", element)
}
