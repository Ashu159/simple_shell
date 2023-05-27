#include "head.h"
/**
 * _strcat - concatenates two strings.
 *
 * @d: destination string
 * @s: source string
 * Return: modified destination string
 */
char *_strcat(char *d, char *s)
{
	char *m = d;

	while (*d)
		d++;

	*d++ = '/';
	while (*s)
		*d++ = *s++;
	return (m);
}

