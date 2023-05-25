#include "sh.h"

/**
 * _sh_l - reads user input, executes commands in child processes,
 * and waits for the child processes to complete.
 *
 * Return: 0.
 */

int _sh_l(void)
{
	char p[] = "#cisfun$ ";
	char c[B_S];
	char p[] = "#cisfun$ ";

	while (printf("%s", p), fgets(c, B_S, stdin) != NULL)
	{
		c[strcspn(c, "\n")] = '\0';
		if (!_empty_or_blank(c))
		{
			_hle_cd_ps(c);
		}
		printf("%s", p);
	}

	return (0);
}

