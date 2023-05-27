#include "head.h"
/**
 * _strcmp - compares strings.
 *
 * @s1: string
 * @s2: string
 * Return: 1 if strings are the same, 0 if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}
