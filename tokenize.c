#include "shell.h"

/**
 * tokenize - parse command to separated tokens
 * @command: entered command
 * Return: array contains tokens
*/
char **tokenize(char *command)
{
	char *delim = " \n";
	int i, tokens_count = 0;
	char *token;

	token = strtok(command, delim);
	while (token != NULL)
	{
		tokens_count++;
		token = strtok(NULL, delim);
	}
	tokens_count++;

	char **tokens_arr = malloc(sizeof(char *) * tokens_count + 1);

	token = strtok(command, delim);

	for (i = 0; token != NULL; i++)
	{
		tokens_arr[i] = strdup(token);
		token = strtok(NULL, delim);
	}
	tokens_arr[tokens_count] = NULL;

	free(tokens_arr);
	return (tokens_arr);
}
