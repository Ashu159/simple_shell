#include "head.h"
/**
 * c_e - takes thress arguments s_n, lps, c,
 * responsible for printing information to
 * the standard output
 *
 * @s_n: identifier or name representing the shell.
 * @lps: intiger value.
 * @c: pointer (array String).
 * Return: Nothing.
 */
void c_e(char *s_n, int lps, char **c)
{
	char b[256];
	int l;

	l = sprintf(b, "%s: %d: %s: not found\n", s_n, lps, c[0]);
	write(STDOUT_FILENO, b, l);
}

