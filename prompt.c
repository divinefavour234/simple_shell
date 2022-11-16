#include "shell.h"

/**
 * prompt - The first thing to be seen in the program
 *
 * Return: Return an array of strings
 */

char *prompt()
{
	char *myprompt = "$ ";
	char *cmdline = NULL;
	char *cmdline_copy = NULL;
	size_t len = 0;
	ssize_t char_read;

	while (1)
	{

		_puts(myprompt);
		char_read = getline(&cmdline, &len, stdin);
		if (char_read == -1)
		{
			_puts("EXiting the Shell.....\n");
			exit(EXIT_SUCCESS);
		}

		cmdline_copy = malloc(sizeof(char) * char_read);
		if (cmdline_copy == NULL)
		{
			_puts("Memory Allocation Failed");
			exit(EXIT_SUCCESS);
		}

		strcpy(cmdline_copy, cmdline);


		return (cmdline_copy);
	}
		free(cmdline);
		free(cmdline_copy);
}
