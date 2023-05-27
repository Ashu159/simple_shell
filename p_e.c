#include "head.h"
/**
 * p_e - Printing the content of array (env).
 *
 * @env: The environment variable array.
 * Return: Nothing
 **/
void p_e(char **env)
{
	size_t n = 0, l = 0;

	while (env[n])
	{
		l = _strlen(env[n]);
		write(STDOUT_FILENO, env[n], l);
		write(STDOUT_FILENO, "\n", 1);
		n++;
	}
}

