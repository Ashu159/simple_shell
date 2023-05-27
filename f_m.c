#include "head.h"
/**
 * f_m - freeing the memory allocated for
 * an arrays of strings (commands).
 *
 * @c: Pointer.
 * Return: Nothing.
 */
void f_m(char **c)
{
	size_t s = 0;

	if (c == NULL)
		return;

	for (; c[s] != NULL; s++)
	{
		free(c[s]);
		c[s] = NULL;
	}
	free(c);
}

