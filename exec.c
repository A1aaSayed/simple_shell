#include "shell.h"
/**
 * exec - execute the command
 * @argv: arguments
*/
void exec(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];
		if (execve(command, argv, NULL) == -1)
			perror("Error:");
	}
}
