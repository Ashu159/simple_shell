#include "head.h"
/**
 * _strlen - string length.
 *
 * @s: string.
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int l = 0;

	while (s[l])
		l++;

	return (l);
}
