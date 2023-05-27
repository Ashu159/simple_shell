#include "head.h"

/**
 * r_i - reads user input from standars input.
 *
 * Return: number of characters read excluding '\0'.
*/
char *r_i(void)
{
	char *b = NULL;
	size_t b_s = 0;
	ssize_t c_c = 0;
	char *ppt = "#cisfun$ ";

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, ppt, _strlen(ppt));

	c_c = getline(&b, &b_s, stdin);

	if (c_c == EOF)
	{
		c_eof_h(b);
	}
	else if (*b == '\n')
	{
		free(b);
		b = NULL;
	}

	if (_strlen(b) == (unsigned int)_strspn(b, " ") + 1)
	{
		free(b);
		b = NULL;
		exit(EXIT_SUCCESS);
	}

	return (b);
}

