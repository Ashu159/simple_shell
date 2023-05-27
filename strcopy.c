#include "head.h"
/**
 * _strcpy - copy string.
 *
 * @d: destination.
 * @s: source.
 * Return: copied string
 */
char *_strcpy(char *d, char *s)
{
	char *m = d;

	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (m);
}
