#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: A function to perform the printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
