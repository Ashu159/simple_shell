#include "head.h"
/**
 * s_i_h - handling the SIGINT signal and display ppt.
 *
 * @s: intiger signal number.
 * Return: Nothing.
 */
void s_i_h(int s)
{
	if (s == SIGINT)
	{
		const char *p_s = "\n#cisfun$";

		write(STDOUT_FILENO, p_s, 9);
	}
}

