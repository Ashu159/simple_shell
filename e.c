#include "head.h"
/**
 * e - handle the different commands.
 *
 * @i_a: command and argument list.
 * @s: pointer arg[0] argument.
 * @env: environmental variables.
 * @cc: number of executed cycles.
 *
 * Return: 1 on exit command 0 otherwise.
*/
int e(char **i_a, char *s, char **env, int cc)
{
	if (i_a == NULL)
		return (0);
	if (_strcmp(i_a[0], "exit") != 0)
		c_e_h(i_a);
	if (_strcmp(i_a[0], "cd") != 0)
	{
		d_c(i_a[1]);
		return (0);
	}
	if (_strcmp(i_a[0], "env") != 0)
	{
		p_e(env);
		return (0);
	}
	e_c(i_a, s, env, cc);
	return (0);
}

