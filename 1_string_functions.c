#include "shell.h"

/**
 * _strlen - calculate string length
 * @str: the string
 * Return: string length
*/
int _strlen(char *str)
{
	int len;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copy a string
 * @dest: pointer to string
 * @src: pointer to copied string
 * Return: pointer to string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncpy - copy a string with length limit
 * @dest: pointer to string
 * @src: pointer to copied string
 * @n: number of chars
 * Return: pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strcat - concatenate strings
 * @dest: pointer to string
 * @src: pointer to copied string
 * Return: pointer to string
*/
char *_strcat(char *dest, char *src)
{
	int i, len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}

/**
 * _strncat - concatenate strings with length limit
 * @dest: pointer to string
 * @src: pointer to copied string
 * @n: number of chars
 * Return: pointer to string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
