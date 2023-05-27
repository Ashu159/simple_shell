#include "head.h"

/**
 * r_c - run command
 *
 * @pString: command array
 * @sh: string
 * @env: string
 * @lps: intiger
 */
void r_c(char **pString, char *sh, char **env, int lps)
{
	char **pVoid = NULL, *path = NULL;
	struct stat st;
	unsigned int i = 0;

	if (_strcmp(pString[0], "env") != 0)
		p_e(env);
	if (stat(pString[0], &st) == 0)
	{
		if (execve(pString[0], pString, env) < 0)
		{
			perror(sh);
			f_m_e(pString);
		}
	}
	else
	{
		pVoid = d_p(env);
		while (pVoid[i])
		{
			path = _strcat(pVoid[i], pString[0]);
			i++;
			if (stat(path, &st) == 0)
			{
				if (execve(path, pString, env) < 0)
				{
					perror(sh);
					f_m(pVoid);
					f_m_e(pString);
				}
				return;
			}
		}
		c_e(sh, lps, pString);
		f_m(pVoid);
	}
}
