#include "head.h"
/**
 * main - basic interactive shell
 *
 * @argc: integer
 * @argv: arrays of strings
 * @e_p: arrays o strings (environment variables)
 *
 * Return: 0 on Succcess, 8 on Always
 */
int main(__attribute((unused)) int argc, char *argv[], char *e_p[])
{
	char *b = NULL;
	char **c = NULL;
	int cc = 0;

	signal(SIGINT, s_i_h);
	while (1)
	{
		b = r_i();
		c = prs(b);
		e(c, argv[0], e_p, ++cc);
	}
}

