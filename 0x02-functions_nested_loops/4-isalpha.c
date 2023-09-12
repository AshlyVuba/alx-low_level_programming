#include <stdbool.h>
/**
 * is_alphabetic - checks if a character is an alphabtic character
 *Return: true if the character is alphabetic, false otherwise
 */

bool is_alphabetic(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
