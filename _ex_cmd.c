#include "sh.h"

/**
 * _ex_cmd - Executes a command.
 * @c: The command to be executed.
 *
 * This function takes a command as input, tokenizes it into arguments,
 * and executes the command using `execve`. If the execution fails,
 * an error message is printed and the program exits with failure.
 */
void _ex_cmd(char *c)
{
    char *a[B_S / sizeof(char *)] = {NULL};
    char *t = strtok(c, " ");
    unsigned long int i = 0;

    while (t != NULL && i < B_S / sizeof(char *) - 1)
    {
        a[i++] = t;
        t = strtok(NULL, " ");
    }

    if (execve(a[0], a, NULL) == -1)
    {
        perror(a[0]);
        exit(EXIT_FAILURE);
    }
}

