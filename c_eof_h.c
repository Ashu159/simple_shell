#include "head.h"
/**
 * c_eof_h - handle the end of file condition.
 *
 * @b: Pointer to the input string.
 * Return: Nothing
 */
void c_eof_h(char *b)
{
	if (b)
	{
		free(b);
		b = NULL;
	}
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	exit(EXIT_SUCCESS);
}

