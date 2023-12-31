#include <stdio.h>
/**
  * array_iterator - Execute a function on each element of an array
  * @array: The integer array
  * @size: The Size of the array
  * @action: A function to apply to each element
  *
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
