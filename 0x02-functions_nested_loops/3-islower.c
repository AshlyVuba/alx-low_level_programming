#include <stdbool.h>
/**
 * is_lowercase - checks if a character is a lowercase letter
 * @c: The character to check
 * Return true if the character is lowercase, false otherwise.
 */
bool is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
