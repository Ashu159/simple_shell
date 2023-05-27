#include "head.h"

/**
 * d_p - extract and return the directories.
 *
 * @env: The environmental variables.
 * Return: An array of directories.
 */
char **d_p(char **env)
{
	char *p_v = NULL, **p_w = NULL;
	unsigned int i = 0;

	p_v = strtok(env[i], "=");
	while (env[i])
	{
		if (_strcmp(p_v, "PATH"))
		{
			p_v = strtok(NULL, "\n");
			p_w = s_c(p_v, ":");
			return (p_w);
		}
		i++;
		p_v = strtok(env[i], "=");
	}
	return (NULL);
}

