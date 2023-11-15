#include "shell.h"

/**
 * free_token - free token
 * @token: token
*/
void free_token(char **token)
{
	for (int i = 0; token[i] != NULL; i++)
		free(token[i]);
	free(token);
}
