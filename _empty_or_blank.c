#include "sh.h"

/**
 * _empty_or_blank - check if a string is empty or consists
 * only of whitespace characters
 * @s: the string to check
 *
 * Return: true if the string is empty or consists only of
 * whitespace characters, false otherwise.
 */

bool _empty_or_blank(char *s)
{
	size_t len = strlen(s);

	for (size_t i = 0; i < len; i++)
	{
		if (!isspace(s[i]))
		{
			return (false);
		}
	}
	return (true);
}

