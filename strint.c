#include "head.h"
/**
 * _strint - string to integer.
 *
 * @s: string.
 * Return: integer.
 */
int _strint(char *s)
{
	int str = 1;
	unsigned int t = 0;
	char n_f = 0;

	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s == '-')
			str *= -1;
		if (*s >= '0' && *s <= '9')
		{
			n_f = 1;
			t = t * 10 + (*s - '0');
		}
		else if (*s < '0' || *s > '9')
		{
			if (n_f == 1)
				break;
		}
		s++;
	}
	if (str < 0)
		t = (-1 * (t));
	return (t);
}

