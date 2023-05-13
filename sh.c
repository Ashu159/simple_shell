#include "sh.h"

/**
 * main - This function serves as the entry point for
 * the simple_shell and contains the main logic of
 * the command line interpreter.
 *
 * Return: 0.
 */

int main(void)
{
	char p[] = "#cisfun$ ";
	char c[B_S];
	int s;
	pid_t pid;
	char *e[] = {NULL};

	while (printf("%s", p), fgets(c, B_S, stdin) != NULL)
	{
		c[strcspn(c, "\n")] = '\0';
		pid = fork();

		if (pid == -1)
		{
			perror("./simple_shell");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			char *a[B_S / sizeof(char *)] = {NULL};

			a[0] = c;

			if (execve(c, a, e) == -1)
			{
				perror("./simple_shell");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			if (waitpid(pid, &s, 0) == -1)
			{
				perror("./simple_shell");
				exit(EXIT_FAILURE);
			}
		}
	}
	return (0);
}

