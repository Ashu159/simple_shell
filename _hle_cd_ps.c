#include "sh.h"

/**
 * _hle_cd_ps - Handles the execution of commands.
 * @c: The command to be executed.
 *
 * This function implements the main logic of the shell.
 * It forks a child process, which executes the given
 * command using the `_ex_cmd` function. The parent
 * process waits for the child process to complete. If
 * any errors occur during forking or waiting for the
 * child process, an error message is printed and the
 * program exits with failure.
 */
void _hle_cd_ps(char *c)
{
	pid_t pid = fork();
	int s;

	if (pid == -1)
	{
		perror("./simple_shell");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		_ex_cmd(c);
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

