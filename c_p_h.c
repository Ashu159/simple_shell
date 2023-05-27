#include "head.h"

/**
 * c_p_h - print the prompt
 *
 * Return: Nothing.
 */
void c_p_h(void)
{
	if (isatty(STDIN_FILENO))
	{
		const char *c_p = "#cisfun$";

		write(STDOUT_FILENO, c_p, 8);
	}
}
