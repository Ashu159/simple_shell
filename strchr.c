#include "head.h"
/**
 * _strchr -  search for a specific charachter
 *
 * @s: source string.
 * @c: character string.
 *
 * Return: the matching character.
*/
char *_strchr(const char *s, const char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}

	return (NULL);
}

