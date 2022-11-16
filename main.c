#include "shell.h"
/**
 * main - Entry of the program
 * @argc: The number of argument passed
 * @argv: An array of string
 *
 * Return: always success(0)
 */

int main(int argc, char **argv)
{
	char *command_line;
	char **tokenizedcmd;
	char **cmdline;
	char **argvcopy;
	int j, i;

	argvcopy = malloc(sizeof(char *) * (argc));
	for (j = 1; j < argc; j++)
	{
		argvcopy[j] = argv[j];
	}
	argvcopy[j] = "\n";
	while (1)
	{
		if (argc >= 1)
		{
			cmdline = argvcopy;
		}
		else
		{
			command_line = prompt();
			tokenizedcmd = _strtok(command_line);
			cmdline = tokenizedcmd;
		}
	}
	return (0);
}
