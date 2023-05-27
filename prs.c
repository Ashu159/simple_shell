#include "head.h"
#include <string.h>
#include <stdio.h>

/**
 * prs - split sub-strings from a string
 * seperated by delimiters.
 * @i_s: string.
 *
 * Return: an array of strings splits.
*/
char **prs(char *i_s)
{
	char *d = " \0";
	char **t_a = {NULL };
	int n = 0;

	if (i_s == NULL)
		return (NULL);

	n = _strlen(i_s);
	i_s[n - 1] = '\0';
	t_a = s_c(i_s, d);

	free(i_s);

	return (t_a);
}

