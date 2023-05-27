#include "head.h"
/**
 * f_m_e - freeing the allocated memory and exit.
 *
 * @c: Pointer.
 * Return: Nothing.
 */
void f_m_e(char **c)
{
	size_t s = 0;

	if (c == NULL)
		return;

	for (; c[s] != NULL; s++)
		free(c[s]);

	free(c);
	exit(EXIT_FAILURE);
}

