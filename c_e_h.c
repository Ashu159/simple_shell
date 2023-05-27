#include "head.h"
/**
 * c_e_h - exit the command line.
 *
 * @i_c: double pointer.
 * Return: Nothing.
 */
void c_e_h(char **i_c)
{
	int s = 0;

	if (i_c[1] != NULL)
		s = _strint(i_c[1]);
	f_m(i_c);
	exit(s);
}
