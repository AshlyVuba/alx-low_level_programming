#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
<<<<<<< HEAD
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
=======
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
>>>>>>> 01d6de1c4d6d05109979f4a27bd636a9251b3062
}
