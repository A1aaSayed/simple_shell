#include "shell.h"

/**
 * main - Entry point to simple shell function
 * @argc: number of parameters
 * @argv: parameters
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	char *command;
	size_t n = 0;

	(void)argc;
	(void)argv;

	printf("simple_shell_prompt$ ");
	getline(&command, &n, stdin);
	printf("%s\n", command);

	free(command);
	return (0);
}
