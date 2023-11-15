#ifndef SHELL_H
#define SHELL_H
#define BUFSIZE 1024
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1
#define MAX_COMMAND_LENGTH 100

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

extern char **environ;

/* String Functions*/
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *str1, char *str2);
int _strncmp(char *str1, char *str2, int n);
int _atoi(char *str);
void _puts(char *str);
/* void strtrim(char *line); */

void display_prompt(void);
void interactive_mode(void);
void free_token(char **token);
void exec(char **argv);

#endif
