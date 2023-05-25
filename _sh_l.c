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

	while (printf("%s", p), fgets(c, B_S, stdin) != NULL)
	{
		c[strcspn(c, "\n")] = '\0';
		_hle_cd_ps(c);
	}

	return (0);
}

