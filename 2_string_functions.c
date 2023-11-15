#include "shell.h"

/**
 * _strcmp - compare two strings
 * @str1: first string
 * @str2: second string
 * Return: 0 if str1 == str2, positive if str1 > str2, negative if str1 < str2
*/
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

/**
 * _strncmp - compare two strings with length limit
 * @str1: first string
 * @str2: second string
 * @n: number of chars
 * Return: 0 if str1 == str2, 1 if str1 > str2, -1 if str1 < str2
*/
int _strncmp(char *str1, char *str2, int n)
{
	int i = 0;

	while (i < n && str1[i] == str2[i])
	{
		if (str1[i] == '\0' || i == n - 1)
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

/**
 * _atoi - convert string to integer
 * @str: string
 * Return: integer converted from string
*/
int _atoi(char *str)
{
	int i, number, len = _strlen(str);

	if (str[0] >= '0' && str[0] <= '9')
		number = str[0] - '0';
	else
		return (0);
	for (i = 1; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number *= 10;
			number += str[i] - '0';
		}
		else
			return (0);
	}
	return (number);
}

/**
 * _putchar - writes the character to the output
 * @c: char
 * Return: 1 on success, -1 if error occured
*/
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _puts - prints a string
 * @str: the string
*/
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
