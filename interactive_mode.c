#include "shell.h"

/**
 * interactive_mode - display interactive mode
*/

void interactive_mode(void)
{
	char *command;
	char **arguments;

	while (1)
	{
		display_prompt();

		command = readline();
		arguments = tokenize(command);
	}
}
