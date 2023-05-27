#include "head.h"
/**
 * s_c - split the command line.
 *
 * @b: string to split.
 * @d: delimiter.
 * Return: An array of tokens.
 */
char **s_c(char *b, const char *d)
{
	char *t = NULL, **c = NULL;
	size_t b_s = 0;
	int i = 0;

	if (b == NULL)
		return (NULL);

	b_s = _strlen(b);
	c = malloc((b_s + 1) * sizeof(char *));

	if (c == NULL)
	{
		perror("Unable to allocate b");
		free(b);
		f_m(c);
		exit(EXIT_FAILURE);
	}

	t = strtok(b, d);

	while (t != NULL)
	{
		c[i] = malloc(_strlen(t) + 1);
		if (c[i] == NULL)
		{
			perror("Unable to allocate b");
			f_m(c);
			return (NULL);
		}
		_strcpy(c[i], t);
		t = strtok(NULL, d);
		i++;
	}
	c[i] = NULL;
	return (c);
}

