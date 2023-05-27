#include "head.h"
/**
  * d_c - change the directory if provided.
  *
  * @p: New current working directory.
  * Return: 0 on success, -1 on failure.
  */
int d_c(const char *p)
{
	if (p == NULL)
	{
		char *b = NULL;
		size_t s = 1024;

		p = getcwd(b, s);
	}

	if (chdir(p) == -1)
	{
		perror(p);
		return (98);
	}

	return (1);
}
