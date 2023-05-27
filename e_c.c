#include "head.h"

/**
 * e_c - creates a child process using 'fork'.
 *
 * @c: double pointer (commands).
 * @n: Pointer to a character (string).
 * @e_p: array of strings (environment variables).
 * @lps: integer lps.
 * Return: Nothing.
 */
void e_c(char **c, char *n, char **e_p, int lps)
{
	int pid, status;

	pid = fork();
	if (pid < 0)
	{
		perror("Error: fork Error");
		f_m_e(c);
	}
	else if (pid == 0)
	{
		r_c(c, n, e_p, lps);
		f_m(c);
	}
	else
	{
		if (waitpid(pid, &status, 0) < 0)
		{
			perror("Error: waitpid failed");
			f_m_e(c);
		}
	}

	f_m(c);
}

