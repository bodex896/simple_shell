#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


/**
 * linum - get current line number and/or add to it
 * @add: if not zero, add this amt
 * Return: the line number
 */
int linum(int add)
{
	static int line;

	line = line + add;
	return (line);
}

/**
 * get_prog_name - gets the program name
 * @name: the name of the #include "shell.h"
#include <stdio.h>
#include <stdlib.h>

 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a negative num if s1 < s2, positive if s1 > s2 or zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	char *s11;
	char *s22;

	s11 = s1;
	s22 = s2;

	if (!s1 && !s2)
		return (0);

	if (!s1 || !s2)
		return (-1);

	while (*s11 == *s22)
	{
		if (*s11 == '\0')
			break;
		if (*s22 == '\0')
			break;
		s11 = s11 + 1;
		s22 = s22 + 1;
	}

	if (*s11 < *s22)
		return (*s11 - *s22);
	if (*s11 > *s22)
		return (*s11 - *s22);

	return (0);
}

/**
 * _strlen - get the length of a string
 * @s: the string
 * Return: the number of characters in the string minus the null char
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s && s[len] != '\0')
		len++;
	return (len);
}

/**
  * word_count - counts the number of words in a string seperated by a delim
  * @str: string to count the words
  * @delim: separator between words
  * Return: number of words
  */
int word_count(char *str, char *delim)
{
	int i, check = 0, count = 0;

	for (i = 0; str && str[i]; i++)
	{
		if ((str[i] == delim[0]) && check)
		{
			count++;
			check = 0;
		}
		else if (str[i] != delim[0])
			check = 1;
	}
	if (str && str[0])
		count++;

	return (count);
}

/**
 * _strcat - Concats two strings
 * @dest: The destination
 * @src: The source
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	char *write;
	char *s2;

	if (!src)
		return (dest);
	if (!dest)
		return (src);
	write = dest;
	s2 = src;
	for (; *write != '\0'; write++)
	{
	}
	for (; *s2 != '\0'; s2++)
	{
		*write = *s2;
		write++;
	}
	*write = '\0';
	return (dest);
}

/**
  * _strcpy - copy src into dest
  * @dest: destination for copied string
  * @src: string to copy
  * Return: copied string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
char *get_prog_name(char *name)
{
	static char *ret;

	if (!ret)
	{
		ret = name;
	}
	return (ret);
}

/**
 * my_error - custom error printing
 * @command: the message to print
 * @status: the type of error to print
 * @extra: any extra text
 */
void my_error(char *command, int status, char *extra)
{
	char *name = NULL;
	char *line = NULL;
	char *msg = NULL;

	name = get_prog_name(NULL);
	line = _itoa(linum(0));
	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, line, _strlen(line));

	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, ": ", 2);

	switch (status)
	{
	case 2:
		msg = "not found";
		break;
	case 126:
		msg = "Permission denied";
		break;
	case 127:
		msg = "not found";
		break;
	case 9000:
		/* exit illegal number should exit with a code of 2*/
		msg = "Illegal number: ";
		break;
	default:
		msg = "Unknown error occured.";
	}
	write(STDERR_FILENO, msg, _strlen(msg));

	if (extra)
		write(STDERR_FILENO, extra, _strlen(extra));

	write(STDERR_FILENO, "\n", 1);
}


/**
  * main - simple shell
  * @argc: Number of arguments
  * @argv: list of arguments
  * @envp: environment
  * Return: 0 if successful
  */
int main(int argc, char **argv, char **envp)
{
	char *filename = NULL;

	get_prog_name(argv[0]);

	/* argc the right amount of arguments */
	if (argc > 2)
		return (-1);

	/* check if argv[1] is a file */
	if (argv && argv[1])
		filename = argv[1];
	/* signal handler */
	signal(SIGINT, signal_handler);
	/* initialize the environment */
	do_env((char *)envp, NULL);

	/* initialize the linum */
	linum(1);

	/* read, tokenize, execute loop */
	main_loop(filename);

	/* clean up */

	return (0);
}
