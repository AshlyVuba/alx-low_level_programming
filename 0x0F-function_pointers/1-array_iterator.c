#include <stdio.h>
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
	unsigned int i;
	i = 0;

if (array != NULL && action != NULL && size > 0)
{
while (i < size)
	{
	action(array[i]);
	i++;
	}
}
}
