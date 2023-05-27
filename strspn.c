#include "head.h"
/**
 * _strspn  - calculates the length of
 * the initial segment of string.
 *
 * @s: string.
 * @c: characters.
 *
 * Return: number.
*/
int _strspn(const char *s, const char *c)
{
	int l = 0;

	while (*s != '\0')
	{
		if (_strchr(c, *s) != NULL)
		{
			l++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (l);
}

